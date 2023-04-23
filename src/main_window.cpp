#include "main_window.h"

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
	// show xrandrGUI
	this->xrandrGUI->setupUi(this);
}
