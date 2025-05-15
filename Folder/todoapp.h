#ifndef TODOAPP_H
#define TODOAPP_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QListWidget>
#include <QVBoxLayout>

class TodoApp : public QWidget {
    Q_OBJECT

public:
    explicit TodoApp(QWidget *parent = nullptr);

private slots:
    void addTask();
    void removeTask();

private:
    QLineEdit *taskInput;
    QPushButton *addButton;
    QPushButton *removeButton;
    QListWidget *taskList;
};

#endif // TODOAPP_H
