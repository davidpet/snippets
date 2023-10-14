Sure, here is a basic example of a Qt application that creates a simple GUI window with a button. This example will demonstrate the usage of some of the most common Qt classes and methods.

#include <QApplication> // Include QApplication which manages the GUI application's control flow and main settings
#include <QPushButton>  // Include QPushButton which provides a command button

int main(int argc, char **argv)
{
    QApplication app(argc, argv); // Create a QApplication object. It needs the command line arguments to handle some platform-dependent features

    QPushButton button("Hello, world!"); // Create a QPushButton object. The text on the button is passed as a parameter

    button.show(); // Show the button. A widget is never visible when you create it. You must call show() to make it visible

    return app.exec(); // Enter the main event loop and wait until exit() is called. It's necessary for handling events
}