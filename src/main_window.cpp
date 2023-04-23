#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

#include "main_window.h"

std::stringstream exec(const char* cmd);

// display object constructor
DisplayObject::DisplayObject(QGraphicsRectItem *parent) : QGraphicsRectItem(parent)
{
	this->setRect(10,10,10,10);
	this->setPos(0,0);
	this->setBrush(Qt::blue);
}

// constructor
MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
	// show xrandrGUI
	this->xrandrGUI->setupUi(this);

	// add scene
	this->scene->setSceneRect(0,0,1200,1000);
	this->xrandrGUI->graphicsView->setScene(this->scene);

	// connect signals
	QObject::connect(this->xrandrGUI->pushButton_4, SIGNAL(clicked()), this, SLOT(detectDisplays()));
}

// used to see if there are new displays plugged in
void MainWindow::detectDisplays(void) 
{
	std::string newLine;
	std::stringstream result; 
	result = exec("xrandr | grep \" connected \" | awk '{ print$1 }'");
	displays.clear();
	while(getline(result, newLine))
	{
		displays.push_back(newLine);
	}
	DisplayObject *newObject = new DisplayObject();
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
