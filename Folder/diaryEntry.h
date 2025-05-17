#ifndef DIARYENTRY_H
#define DIARYENTRY_H


#include <QString>

class DiaryEntry {
public:
    DiaryEntry(const QString &title = "", const QString &content = "", const QString &date = "");

    QString getTitle() const;
    QString getContent() const;
    QString getDate() const;

    QString toString() const;

private:
    QString title;
    QString content;
    QString date;
};

#endif // DIARYENTRY_H
