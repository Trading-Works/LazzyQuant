#ifndef MESSAGE_HANDLER_H
#define MESSAGE_HANDLER_H

class QString;

QString setupMessageHandler(bool toStdOut, bool toFile, const QString &moduleName);
void restoreMessageHandler();

#endif // MESSAGE_HANDLER_H
