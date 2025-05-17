#include "diaryentry.h"

DiaryEntry::DiaryEntry(const QString &title, const QString &content, const QString &date)
    : title(title), content(content), date(date) {}

QString DiaryEntry::getTitle() const { return title; }
QString DiaryEntry::getContent() const { return content; }
QString DiaryEntry::getDate() const { return date; }

QString DiaryEntry::toString() const {
    return "Date: " + date + "\nTitle: " + title + "\nContent:\n" + content + "\n";
}
