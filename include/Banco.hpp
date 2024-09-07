#ifndef BANCO_H
#define BANCO_H
#include "ContaBancaria.hpp"

struct Banco {

    int _totalDeContas;
    ContaBancaria *contas [20];

    Banco ();

    ContaBancaria* CriaConta (int, string);
    ContaBancaria* Pesquisa (int);
    void ListaContas();


};

#endif