#ifndef HEXTODECIMAL_H
#define HEXTODECIMAL_H
#include "textdecoder.h"
class HexToDecimal : public TextDecoder {
public:
    HexToDecimal(Processor *processor) : TextDecoder(processor){};
    QString process(const QString& data) override;
};

#endif // HEXTODECIMAL_H
