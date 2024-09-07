#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>
#include <iostream>

using namespace std;

struct ContaBancaria {

    int _id;
    string _cliente;
    float _saldo;

    ContaBancaria(int id, string cliente);

    void Deposito (double);
    void Saque (double);
    void Pix (ContaBancaria*, double);
    void Imprime ();
    


};

#endif