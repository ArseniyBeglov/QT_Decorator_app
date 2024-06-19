#ifndef TEXTDECODER_H
#define TEXTDECODER_H
#include "processor.h"

class TextDecoder: public Processor {
protected:
    Processor *proc;
public:
    TextDecoder(Processor *processor): proc(processor){};

    QString process(const QString& data) override{
        return proc? proc->process(data): nullptr;
    };
};

#endif // TEXTDECODER_H
