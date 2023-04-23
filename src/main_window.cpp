#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

#include "main_window.h"

std::string exec(const char* cmd);

// constructor
MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
	// show xrandrGUI
	this->xrandrGUI->setupUi(this);
	QObject::connect(this->xrandrGUI->pushButton_4, SIGNAL(clicked()), this, SLOT(detectDisplays()));
}

// used to see if there are new displays plugged in
std::string MainWindow::detectDisplays(void) 
{
	std::string result;
	result = exec("xrandr");
	std::cout << result << std::endl;
	return result;
}

// used to execute command
std::string exec(const char* cmd)
{
	std::array<char, 128> buffer;
	std::string result;
	std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
	if (!pipe)
		throw std::runtime_error("popen() failed!");
	while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
		result += buffer.data();
	return result;
}
