#ifndef FORMULAMARKER_H
#define FORMULAMARKER_H
#include "textdecoder.h"
class FormulaMarker : public TextDecoder{
public:
    FormulaMarker(Processor *processor) : TextDecoder(processor){};
    QString process(const QString& data) override;
};

#endif // FORMULAMARKER_H
