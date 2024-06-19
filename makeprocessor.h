#ifndef MAKEPROCESSOR_H
#define MAKEPROCESSOR_H
#include "processor.h"
#include <QFile>
#include <QTextStream>
class MakeProcessor: public Processor {
public:
    QString process(const QString& data) override;
    QString readData(const QString& filename);
};
#endif // MAKEPROCESSOR_H
