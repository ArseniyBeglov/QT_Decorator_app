#ifndef REVERSETEXT_H
#define REVERSETEXT_H
#include "textdecoder.h"
class ReverseText : public TextDecoder {
public:
    ReverseText(Processor *processor) : TextDecoder(processor){};
    QString process(const QString& data) override;
};
#endif // REVERSETEXT_H
