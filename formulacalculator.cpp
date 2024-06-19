#include "formulacalculator.h"

QString FormulaCalculator::process(const QString& data) {
    QString processedData = TextDecoder::process(data);
    QRegularExpression formulaRegex("(\\d+)([\\+\\-])(\\d+)");
    QRegularExpressionMatchIterator matchIterator = formulaRegex.globalMatch(processedData);
    while (matchIterator.hasNext()) {
        QRegularExpressionMatch match = matchIterator.next();
        int num1 = match.captured(1).toInt();
        int num2 = match.captured(3).toInt();
        QString op = match.captured(2);
        int result = (op == "+") ? num1 + num2 : num1 - num2;
        processedData.replace(match.captured(), QString::number(result));
    }
    return processedData;
}
