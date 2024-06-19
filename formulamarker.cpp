#include "formulamarker.h"

QString FormulaMarker::process(const QString& data) {
    QString processedData = TextDecoder::process(data);
    QRegularExpression formulaRegex("(\\d+)([\\+\\-])(\\d+)");
    int formulaCount = 1;
    QRegularExpressionMatchIterator matchIterator = formulaRegex.globalMatch(processedData);
    while (matchIterator.hasNext()) {
        QRegularExpressionMatch match = matchIterator.next();
        processedData.replace(match.captured(), match.captured() + " (Формула " + QString::number(formulaCount++) + ")");
    }
    return processedData;
}

