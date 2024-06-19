#ifndef REMOVEDIGITS_H
#define REMOVEDIGITS_H
#include "textdecoder.h"
class RemoveDigits : public TextDecoder {
public:
    RemoveDigits(Processor *processor) : TextDecoder(processor){};
    QString process(const QString& data) override;
};

#endif // REMOVEDIGITS_H
