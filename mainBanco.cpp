#include "Banco.hpp"
#include "ContaBancaria.hpp"

using namespace std;

int main(){

char comando;
int id;
string cliente;
double valor;
int dest;
Banco banco;

while(true)
{
   cin >> comando;

if(comando=='C'){
    
   cin>>id>>cliente;

   ContaBancaria* novaConta = banco.CriaConta(id, cliente);

   if(novaConta==nullptr){
    cout<<"ERRO: conta repetida"<<endl;
   }

   else{
    cout<<"conta criada"<<endl;
   }
    
}

else if(comando=='D'){

   cin>>id>>valor;

   ContaBancaria* contaParaDeposito = banco.Pesquisa(id);

   if(contaParaDeposito==nullptr){
      cout<<"ERRO: conta inexistente"<<endl;
   }

   else{
      contaParaDeposito->Deposito(valor);
      cout<<"deposito efetuado"<<endl;
   }

}


else if(comando=='S'){
   cin>>id>>valor;

   ContaBancaria* contaParaSaque = banco.Pesquisa(id);

   if(contaParaSaque==nullptr){
      cout<< "ERRO: conta inexistente"<<endl;
   }

   else{
      contaParaSaque->Saque(valor);
      cout<<"saque efetuado"<<endl;
   }
}

else if(comando=='P'){

   cin>>id>>dest>>valor;

   ContaBancaria* contaPix = banco.Pesquisa(id);
   ContaBancaria* contaDestino = banco.Pesquisa(dest);

   if (contaPix==nullptr||contaDestino==nullptr){
      cout<<"ERRO: conta inexistente"<<endl;
   }

   else{
      contaPix->Pix(contaDestino,valor);
      cout<<"pix efetuado"<<endl;
   }
}


else if(comando=='I'){

   banco.ListaContas();

}

else if(comando=='T'){
   break;
  }
}



return 0;

}

