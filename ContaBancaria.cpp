#include "ContaBancaria.hpp"
using namespace std;

ContaBancaria::ContaBancaria(int id, string cliente){
        _id = id;
        _cliente = cliente;
        _saldo = 0;
    }

void ContaBancaria::Deposito (double valorDeDeposito){

    _saldo = _saldo + valorDeDeposito;

}

void ContaBancaria::Saque (double valorDeSaque){

   _saldo = _saldo - valorDeSaque;

}

void ContaBancaria::Pix (ContaBancaria *ponteiroPix, double valorDoPix){

    if(ponteiroPix==nullptr||this==nullptr||this->_saldo < valorDoPix){
        return;
    }

    this -> _saldo = this->_saldo - valorDoPix;
    ponteiroPix -> _saldo = ponteiroPix->_saldo + valorDoPix;

}


void ContaBancaria::Imprime(){
    
    cout << _id << " " << _cliente << " " << _saldo <<endl;

}