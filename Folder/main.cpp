// #include "mainwindow.h"
#include "todoapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TodoApp window;
    window.setWindowTitle("To-Do List");
    window.resize(300,400);
    window.show();

    return app.exec();
}
