#include "hextodecimal.h"

QString HexToDecimal::process(const QString& data) {
    QString processedData = TextDecoder::process(data);
    QRegularExpression hexRegex("\\b0x[0-9a-fA-F]+\\b");
    QRegularExpressionMatchIterator matchIterator = hexRegex.globalMatch(processedData);
    while (matchIterator.hasNext()) {
        QRegularExpressionMatch match = matchIterator.next();
        QString hex = match.captured();
        bool flag;
        int decimal = hex.toInt(&flag, 16);
        if (flag)
            processedData.replace(match.captured(), QString::number(decimal));
    }
    return processedData;
}
