#include <gtkmm.h>
#include "gui/mainwindow.h"

int main(int argc, char *argv[])
{
	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	MainWindow mainWindow;

	return app->run(mainWindow);
}
