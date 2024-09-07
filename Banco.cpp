#include "Banco.hpp"
#include <iomanip>
using namespace std;

Banco::Banco(){
    _totalDeContas = 0;
    for(int i=0;i<20;i++){
        contas[i] = nullptr;
    }
}

ContaBancaria* Banco::CriaConta(int id, string cliente){
      
    for(int i=0;i<20;i++){
        if(contas[i]!=nullptr && contas[i]->_id==id){
            return nullptr;
        }
    }

    for(int i=0;i<20;i++){
        if(contas[i]==nullptr){
            contas[i] = new ContaBancaria(id, cliente);
            _totalDeContas++;
            return contas[i];
        }
    }
    
    return nullptr;
}

ContaBancaria* Banco::Pesquisa(int id) {
    for (int i = 0; i < 20; i++) {
        if (contas[i] != nullptr && contas[i]->_id == id) {
            return contas[i];
        }
    }
    return nullptr;
}


void Banco::ListaContas(){

    for(int i=0;i<20;i++){
        if(contas[i]==nullptr){
            break;
        }
        cout<<contas[i]->_id<<" "<<contas[i]->_cliente<<" "<<fixed<<setprecision(2)<<contas[i]->_saldo<<endl;
    }

}