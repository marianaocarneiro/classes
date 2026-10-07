//* include/botao.h

#ifndef BOTAO_H
#define BOTAO_H

#include <Arduino.h>

class Botao
{
private:
    uint8_t _pinBotao;
    bool _estadoBotao;
    bool _estadoAnteriorBotao;

public:
    Botao(uint8_t pin);

    void iniciar();
    void atualizar();
    bool pressionou();
    bool soltou();
};

#endif
