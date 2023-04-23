#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include <QFrame>
#include <QColor>
#include "ui_xrandr_gui.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

	public:
		explicit MainWindow(QMainWindow *parent = 0);

	private:
		Ui_xrandrGUI *xrandrGUI= new Ui_xrandrGUI();
};

#endif // MAINWINDOW_H
