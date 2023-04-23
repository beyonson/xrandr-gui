#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include <QFrame>
#include <QColor>
#include "ui_xrandr_gui.h"

class DisplayObject : public QGraphicsRectItem
{
	public:
		explicit DisplayObject(QGraphicsRectItem *parent = 0);

	private:
		void mousePressEvent(QGraphicsSceneMouseEvent *event);
		void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
		void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

class MainWindow : public QMainWindow
{
	Q_OBJECT

	public:
		explicit MainWindow(QMainWindow *parent = 0);

	private:
		Ui_xrandrGUI *xrandrGUI = new Ui_xrandrGUI();
		QGraphicsScene *scene	= new QGraphicsScene();
		std::vector<std::string> displays; 

	public slots:
		void detectDisplays(void);
};

#endif // MAINWINDOW_H
