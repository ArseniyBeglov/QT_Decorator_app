#include "decimaltohex.h"

QString DecimalToHex::process(const QString& data) {
    QString processedData = TextDecoder::process(data);
    QRegularExpression decimalRegex("\\b\\d+\\b");
    QRegularExpressionMatchIterator matchIterator = decimalRegex.globalMatch(processedData);
    while (matchIterator.hasNext()) {
        QRegularExpressionMatch match = matchIterator.next();
        QString decimal = match.captured();
        int decValue = decimal.toInt();
        processedData.replace(QRegularExpression("\\b"+decimal+"\\b"), "0x" + QString::number(decValue, 16));
    }
    return processedData;
}
