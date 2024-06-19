#ifndef DECIMALTOHEX_H
#define DECIMALTOHEX_H
#include "textdecoder.h"
class DecimalToHex : public TextDecoder {
public:
    DecimalToHex(Processor *processor) :TextDecoder(processor){};
    QString process(const QString& data) override;
};

#endif // DECIMALTOHEX_H
