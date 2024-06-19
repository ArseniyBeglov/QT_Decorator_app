#include "makeprocessor.h"

QString MakeProcessor::readData(const QString& filename){
    QFile file(filename);
    QString fileText;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        fileText = in.readAll();
        fileText.replace("\n", " ");
        file.close();
    }
    return fileText;
};

QString MakeProcessor::process(const QString &data) {
    return readData(data);
}
