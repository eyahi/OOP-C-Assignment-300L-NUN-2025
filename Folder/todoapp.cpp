#include "todoapp.h"

TodoApp::TodoApp(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    taskInput = new QLineEdit(this);
    addButton = new QPushButton("Add Task", this);
    removeButton = new QPushButton("Remove Selected", this);
    taskList = new QListWidget(this);

    layout->addWidget(taskInput);
    layout->addWidget(addButton);
    layout->addWidget(removeButton);
    layout->addWidget(taskList);

    connect(addButton, &QPushButton::clicked, this, &TodoApp::addTask);
    connect(removeButton, &QPushButton::clicked, this, &TodoApp::removeTask);
}

void TodoApp::addTask() {
    if (!taskInput->text().isEmpty()) {
        QListWidgetItem *item = new QListWidgetItem(taskInput->text(), taskList);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Unchecked);
        taskInput->clear();
    }
}

void TodoApp::removeTask() {
    delete taskList->currentItem();
}
