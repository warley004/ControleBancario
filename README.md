# Sistema Bancário

Este projeto tem como objetivo praticar os conceitos de Tipos Abstratos de Dados (TAD) e Modularização através da implementação de um sistema bancário simples para um pequeno banco. O sistema permite que clientes criem contas, depositem, saquem e realizem transferências (pix) entre contas.

## Funcionalidades

O sistema é composto por dois TADs principais: `ContaBancaria` e `Banco`, além de um arquivo `mainBanco.cpp` que gerencia as operações do banco.

### TAD Conta Bancária

O TAD `ContaBancaria` armazena os dados de uma conta bancária e fornece métodos para manipular essas informações.

**Atributos:**
- `id` (inteiro): Identificador único da conta.
- `cliente` (string): Nome do titular da conta.
- `saldo` (float): Saldo atual da conta.

**Métodos:**
- **Construtor:** Inicializa uma nova conta com um ID e nome de cliente fornecidos, com saldo inicial igual a zero.
- **Depósito:** Recebe um valor e adiciona ao saldo da conta.
- **Saque:** Recebe um valor e subtrai do saldo da conta, se houver saldo suficiente.
- **Pix:** Transfere um valor para outra conta, especificada por um apontador.
- **Imprime:** Exibe o ID, nome do cliente e saldo da conta com duas casas decimais.

### TAD Banco

O TAD `Banco` armazena e gerencia múltiplas contas bancárias, permitindo operações sobre o conjunto de contas.

**Atributos:**
- `numeroDeContas` (inteiro): Número total de contas cadastradas.
- `contas` (vetor de apontadores para `ContaBancaria`): Armazena até 20 contas bancárias.

**Métodos:**
- **Construtor:** Inicializa o banco com `numeroDeContas` igual a zero e o vetor de contas com `nullptr`.
- **CriaConta:** Cria uma nova conta bancária com um ID e nome fornecidos, armazenando no vetor de contas. Retorna um apontador para a conta ou `nullptr` se o ID for duplicado.
- **Pesquisa:** Pesquisa uma conta pelo ID e retorna um apontador para a conta encontrada ou `nullptr` se não existir.
- **ListaContas:** Imprime as informações de todas as contas cadastradas no banco.

### Arquivo Principal (`mainBanco.cpp`)

O arquivo principal gerencia as operações do banco através de comandos de entrada, exibindo as mensagens apropriadas para cada operação:

- **C <id> <nome>:** Cria uma nova conta com o ID e nome fornecidos. Exibe "conta criada" ou "ERRO: conta repetida".
- **D <id> <valor>:** Realiza um depósito na conta especificada. Exibe "deposito efetuado" ou "ERRO: conta inexistente".
- **S <id> <valor>:** Realiza um saque da conta especificada. Exibe "saque efetuado" ou "ERRO: conta inexistente".
- **P <id> <dest> <valor>:** Realiza uma transferência (pix) entre contas. Exibe "pix efetuado" ou "ERRO: conta inexistente".
- **I:** Lista as informações de todas as contas cadastradas no banco.
- **T:** Termina a execução do programa.


## Como Executar

1. Compile os arquivos utilizando o arquivo Makefile fornecido:
   ```bash
   Make

2. Execute o comando:
   ```bash
   ./bin/mainBanco

## Exemplo de uso:

- Entrada:
  ```bash:
  C 123 Luiz
  C 123 Maria
  C 999 Maria
  D 123 1000
  S 555 500
  S 123 200
  P 123 999 300
  I
  T

- Saída:
  ```bash:
  conta criada
  ERRO: conta repetida
  conta criada
  deposito efetuado
  ERRO: conta inexistente
  saque efetuado
  pix efetuado
  123 Luiz 500.00
  999 Maria 300.00

## Requisitos:

C++11 ou superior.

## Autor:

- Warley Júnio Vieira Ribeiro Batista - (Desenvolvedor Principal).








