#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <QString>
#include <QRegularExpression>
class Processor {
public:
    virtual QString process(const QString& data) = 0;
};

#endif // PROCESSOR_H
