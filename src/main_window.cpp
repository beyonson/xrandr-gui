#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

#include "main_window.h"

#define SCENEWIDTH 800
#define SCENEHEIGHT 495
#define DISPLAYWIDTH 192
#define DISPLAYHEIGHT 108

std::stringstream exec(const char* cmd);

// display object constructor
DisplayObject::DisplayObject(QGraphicsRectItem *parent) : QGraphicsRectItem(parent)
{
	this->setRect(0,0,DISPLAYWIDTH,DISPLAYHEIGHT);
	this->setPos(0,0);
	this->setBrush(Qt::blue);
	this->setAcceptHoverEvents(true);
}

void DisplayObject::setPosition(int x, int y)
{
	this->setPos(x, y);
}

void DisplayObject::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	return;	
}

void DisplayObject::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
	QPointF origCursorPosition = event->lastScenePos();
	QPointF updatedCursorPosition = event->scenePos();

	QPointF origPosition = this->scenePos();
	QPointF updatedCursorX = updatedCursorPosition - origCursorPosition + origPosition;

	this->setPos(updatedCursorX);
}

void DisplayObject::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
	return;	
}

// constructor
MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
	// show xrandrGUI
	this->xrandrGUI->setupUi(this);

	// add scene
	this->scene->setSceneRect(0,0,SCENEWIDTH,SCENEHEIGHT);
	this->xrandrGUI->graphicsView->setScene(this->scene);

	// connect signals
	QObject::connect(this->xrandrGUI->detectButton, SIGNAL(clicked()), SLOT(detectDisplays()));
}

// used to see if there are new displays plugged in
void MainWindow::detectDisplays(void) 
{
	std::string newLine;
	std::stringstream result; 
	result = exec("xrandr | grep \" connected \" | awk '{ print$1 }'");

	// clear scene
	displays.clear();
	this->scene->clear();
	while(getline(result, newLine))
	{
		displays.push_back(newLine);
	}

	// get number of displays and place accordingly
	DisplayObject *newObject = new DisplayObject();
	newObject->setPos(SCENEWIDTH/2 - DISPLAYWIDTH/2, SCENEHEIGHT/2 - DISPLAYHEIGHT/2);
	this->scene->addItem(newObject);
}

// used to execute command
std::stringstream exec(const char* cmd)
{
	std::array<char, 128> buffer;
	std::stringstream result;
	std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
	if (!pipe)
		throw std::runtime_error("popen() failed!");
	while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
		result << buffer.data();
	return result;
}
