#ifndef FORMULACALCULATOR_H
#define FORMULACALCULATOR_H
#include "textdecoder.h"
class FormulaCalculator : public TextDecoder {
public:
    FormulaCalculator(Processor *processor) : TextDecoder(processor){};
    QString process(const QString& data) override;
};


#endif // FORMULACALCULATOR_H
