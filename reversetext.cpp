#include "reversetext.h"

QString ReverseText::process(const QString& data) {
    QString baseData = TextDecoder::process(data);
    QString processedData = "";
    for (int i = baseData.length() - 1; i >= 0; --i) {
        processedData.append(baseData.at(i));
    }
    return processedData;
}
