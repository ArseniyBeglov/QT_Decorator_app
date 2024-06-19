#include "removedigits.h"

QString RemoveDigits::process(const QString& data) {
    QString processedData = TextDecoder::process(data);
    processedData.remove(QRegularExpression("[1-9]+"));
    return processedData;
}
