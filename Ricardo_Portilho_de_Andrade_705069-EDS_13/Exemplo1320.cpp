/*
 Exemplo1320 - v0.0. - 20 / 06 / 2020
 Author: Ricardo Portilho de Andrade 
*/
// ----------------------------------------------- classes
#include "Contato.hpp" // classe para tratar dados de pessoas
// ----------------------------------------------- definicoes globais
using namespace std;
// ----------------------------------------------- metodos
/**
 Method00 - nao faz nada.
*/
void method00()
{
   // nao faz nada
} // fim method00 ( )
//_________________________________________________________________________
/**
 Method01 - Testar atribuição de valores 
*/
void method01()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method01 - v0.0\n"
        << endl;
   // definir e mostrar valores
   pessoa1.pushName();
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method01 ( )
//________________________________________________________________
/**
 Method02 - Testar atribuicoes.
*/
void method02()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method02 - v0.0\n"
        << endl;
   // definir e mostrar valores
   pessoa1.pushName();
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   pessoa1.pushFone();
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method02 ()
//________________________________________________________________________
/**
 Method03 - Testar recuperacao de dados.
*/
void method03()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method03 - v0.0\n"
        << endl;
   // definir e mostrar valores
   pessoa1.pushName();
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   pessoa1.pushFone();
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method03 ( )
//_______________________________________________________________________
/**
 Method04 - Ler arquivo com dados.
*/
void method04()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method04 - v0.0\n"
        << endl;
   // definir e mostrar valores
   pessoa1.scanFilePeople("Pessoa1.TXT");
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method04 ( )

//__________________________________________________________________________
/**
 Method05 - Gravar dados em arquivo.
*/
void method05()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method05 - v0.0\n"
        << endl;
   // definir e mostrar valores
   pessoa1.pushName();
   pessoa1.pushFone();
   pessoa1.printFilePeople("Pessoa1.TXT");
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method05 ( )
//________________________________________________________________
/*
 Method06 - Colocar outro telefone.
*/
void method06()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method06 - v0.0\n"
        << endl;
   // definir e mostrar valores
   pessoa1.pushName();
   pessoa1.pushFone();
   pessoa1.pushSFone();
   cout << "pessoa1 - " << pessoa1.toString() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method06 ( )
//________________________________________________________________
/**
 Method07 - Descubrir quantidade de telefones.
*/
void method07()
{
   // definir dados
   Contato pessoa1;
   Contato pessoa2;
   Contato pessoa3;
   Contato pessoa4;
   // identificar
   cout << "\nEXEMPLO1320 - Method07 - v0.0\n"
        << endl;
   // testar atributos
   pessoa1.setNome("Pessoa_01");
   pessoa1.setFone("111");
   pessoa2.setNome("Pessoa_03");
   pessoa2.setFone("222");
   pessoa4.setNome("Pessoa_04");
   pessoa4.setSFone("444");
   pessoa3.setNome("Pessoa_03");
   pessoa3.setFone("333");
   pessoa3.setSFone("333");
   // mostrar dados
   cout << "pessoa1 - " << pessoa1.toString() << " Quantidade de Fones: " << pessoa1.toFones() << endl;
   cout << "pessoa2 - " << pessoa2.toString() << " Quantidade de Fones: " << pessoa2.toFones() << endl;
   cout << "pessoa3 - " << pessoa3.toString() << " Quantidade de Fones: " << pessoa3.toFones() << endl;
   cout << "pessoa4 - " << pessoa4.toString() << " Quantidade de Fones: " << pessoa4.toFones() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method07 ( )
//_____________________________________________________________________
/**
 Method08 - Atribuir dois telefones.
*/
void method08()
{
   // definir dados
   Contato pessoa1;
   // identificar
   cout << "\nEXEMPLO1320 - Method08 - v0.0\n"
        << endl;
   // testar atributos
   pessoa1.setNome("Pessoa_01");
   pessoa1.setFone("111-111");
   pessoa1.setSFone("111-111");
   // mostrar dados
   cout << "pessoa1 - " << pessoa1.toString() << " Quantidade de Fones: " << pessoa1.toFones() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method08 ( )
//________________________________________________________________
/**
 Method09 - Modificar segundo telefone.
*/
void method09()
{
   // definir dados
   Contato pessoa1;
   Contato pessoa2;
   // identificar
   cout << "\nEXEMPLO1320 - Method09 - v0.0\n"
        << endl;
   // testar atributos
   pessoa1.setNome("Pessoa_01");
   pessoa1.setFone("111-111");
   pessoa1.setSFone("111-111");
   pessoa1.setSMFone("121-121");
   // mostrar dados
   cout << "pessoa1 - " << pessoa1.toString() << " Quantidade de Fones: " << pessoa1.toFones() << endl;
   // testar atributos9
   pessoa2.setNome("Pessoa_02");
   pessoa2.setSMFone("222-222");
   // mostrar dados
   cout << "pessoa2 - " << pessoa2.toString() << " Quantidade de Fones: " << pessoa2.toFones() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method09 ( )
//________________________________________________________________
/**
 Method10 - Excluir telefone.
*/
void method10()
{
   // definir dados
   Contato pessoa1;
   Contato pessoa2;
   // identificar
   cout << "\nEXEMPLO1320 - Method10 - v0.0\n"
        << endl;
   // testar atributos
   pessoa1.setNome("Pessoa_01");
   pessoa1.setFone("111-111");
   pessoa1.setSFone("121-121");
   // mostrar dados
   cout << "pessoa1 - " << pessoa1.toString() << " Quantidade de Fones: " << pessoa1.toFones() << endl;
   cout << "pessoa1 - Delete SFone" << endl;
   pessoa1.dellSFone();
   // mostrar dados
   cout << "pessoa1 - " << pessoa1.toString() << " Quantidade de Fones: " << pessoa1.toFones() << endl;
   // testar atributos
   cout << "-----------------------------------------------" << endl;
   cout << "pessoa2 - Delete SFone" << endl;
   pessoa2.setNome("Pessoa_02");
   pessoa2.dellSFone();
   // mostrar dados
   cout << "pessoa2 - " << pessoa2.toString() << " Quantidade de Fones: " << pessoa2.toFones() << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method10 ( )
// ----------------------------------------------- acao principal
/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(int argc, char **argv)
{
   // definir dado
   int x = 0; // definir variavel com valor inicial
              // repetir até desejar parar
   do
   {
      // identificar
      cout << "EXEMPLO1320 - Programa - v0.0\n " << endl;
      // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - " << endl;
      cout << " 2 - " << endl;
      cout << " 3 - " << endl;
      cout << " 4 - " << endl;
      cout << " 5 - " << endl;
      cout << " 6 - " << endl;
      cout << " 7 - " << endl;
      cout << " 8 - " << endl;
      cout << " 9 - " << endl;
      cout << "10 - " << endl;
      // ler do teclado
      cout << endl
           << "Entrar com uma opcao: ";
      cin >> x;
      // escolher acao
      switch (x)
      {
      case 0:
         method00();
         break;
      case 1:
         method01();
         break;
      case 2:
         method02();
         break;
      case 3:
         method03();
         break;
      case 4:
         method04();
         break;
      case 5:
         method05();
         break;
      case 6:
         method06();
         break;
      case 7:
         method07();
         break;
      case 8:
         method08();
         break;
      case 9:
         method09();
         break;
      case 10:
         method10();
         break;
      default:
         cout << endl
              << "ERRO: Valor invalido." << endl
              << endl;
      } // fim escolher
   } while (x != 0);
   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // fim main( )

/*
---------------------------------------------- documentacao complementar
Versao  Resultado  Teste     Observar as saidas
0.1       (OK)      01.      * Testar definicao de contatos (objetos)
0.2       (OK)      01.      * Armazenar e retornar contatos armazenados utilizando metodo no CPP
0.3       (OK)      01.      * Armazenar e retornar contatos armazenados utilizando metodo no HPP
0.4       (OK)      01.      * Colocar caracteres de usuarios utilizando nova forma de direcionamento
0.5       (OK)      01.      * Teste erros em programa
0.6       (OK)      01.      * Teste erros em programa
0.7       (OK)      01.      * Teste erros em programa
0.8       (OK)      01.      * Copiar dados de um contato para outro
0.9       (OK)      01.      * Criar arranjo de contatos 
1.0       (OK)      01.      * Utilizar arranjo de contatos 
Exercicios
1.1       (OK)      01.      * Atribuir nome a um usuario
1.2       (OK)      01.      * Atribuir numero de contato de um usuario
1.3       (OK)      01.      * Verificacao do telefone 
1.4       (OK)      01.      * Ler dados do contato em um arquivo
1.5       (OK)      01.      * Gravar dados em um arquivo
1.6       (OK)      01.      * Atribir um segundo telefone ao usuario
1.7       (OK)      01.      * Dizer quantos numeros um contato tem 
1.8       (OK)      01.      * Fazer um metodo para artibuir o seundo numero de telefone 
1.9       (OK)      01.      * Modificar o segundo numero de telefone 
2.0       (OK)      01.      * Excluir o segundo numero de telefone 

---------------------------------------------- notas / observacoes / comentarios
Versao  Teste    Comentarios
0.1     01.     *Nao houve problemas na compilacao do programa.
0.2     01.     *Nao houve problemas na compilacao do programa.
0.3     01.     *Nao houve problemas na compilacao do programa.
0.4     01.     *Nao houve problemas na compilacao do programa.
0.5     01.     *Nao houve problemas na compilacao do programa.
0.6     01.     *Nao houve problemas na compilacao do programa.
0.7     01.     *Nao houve problemas na compilacao do programa.
0.8     01.     *Nao houve problemas na compilacao do programa.
0.9     01.     *Nao houve problemas na compilacao do programa.
1.0     01.     *Nao houve problemas na compilacao do programa.

Exercicios
1.1     01.     *Nao houve problemas na compilacao do programa.
1.2     01.     *Nao houve problemas na compilacao do programa.
1.3     01.     *Nao houve problemas na compilacao do programa.
1.4     01.     *Nao houve problemas na compilacao do programa.
1.5     01.     *Nao houve problemas na compilacao do programa.
1.6     01.     *Nao houve problemas na compilacao do programa.
1.7     01.     *Nao houve problemas na compilacao do programa.
1.8     01.     *Nao houve problemas na compilacao do programa.
1.9     01.     *Nao houve problemas na compilacao do programa.
2.0     01.     *Nao houve problemas na compilacao do programa.
//-------------------------------------|Legenda|-----------------------------------|
*Essas regras tambem sao usadas para todos os tipos de dados*

|Valor| => Ex: |5| => Colocado pelo usuario
|Valores| => Ex: |5, 5, 6| => Colocados pelo usuario
{Valor} => Ex: {5} => Predefinido pelo programa/Resposta do programa  
{Valores} => Ex: {5, 6, 8} => Predefinidos pelo programa/Resposta do programa  
[Valor] => Ex: [5] => Coletado de um arquivo
[Valores] => Ex: [5, 9, 3] => Coletados de um arquivo
FILENAME.TXT => Ex: ruaNome.txt => Arquivo utilizado pelo programa 

+ => soma 
- => subtracao
/ => divisao
* => multiplicacao
== => comparacao
= => transferencia de valores 
-> => sequancia de operacoes 
// => fim de uma operacao e comeco de outra 

---------------------------------------------- previsao de testes------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                 
Exercicios                                                                         |
                                                                                   |
*EXEMPLO1311                                                                       |
a.) | Ricardo | -> { pessoa1 - { Ricardo, (NULL), (NULL) } }------------------->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1312                                                                       |
a.) | Ricardo, 12345-6789 | -> {pessoa1 - { Ricardo, 1234-56789, (NULL) }}----->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1313                                                                       |
a.) | Ricardo, p45u| -> { ERRO: Por favor verifique o seu numero }------------->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1314                                                                       |
a.) [2, Reginha, 468451654] { pessoa1 - { Reginha, 468451654, (NULL) } }------->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1315                                                                       |
a.) | Ricardo, 123-456 | -> Pessoa1.TXT -> [ 2, Ricardo, 123-456 ]------------->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1316                                                                       |
a.) | Ricardo, 123-456, 123-457 | -> {pessoa1 - { Ricardo, 123-456, 123-457 }}->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1317                                                                       |
a.) {pessoa1 - { Pessoa_01, 111, (NULL) }} -> {Quantidade de Fones: ( 1 )}----->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1318                                                                       |
a.) {Pessoa_01, 111-111, 111-111} -> {pessoa1 - {Pessoa_01, 111-111, 111-111}}->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1319                                                                       |
a.) {Pessoa_01, 111-111, 111-111} -> {Pessoa_01, 111-111, 121-121}------------->(OK)
                                                                                   |                                                                                   
                                                                                   |
*EXEMPLO1320                                                                       |
a.) {Pessoa_01, 111-111, 121-121 }} -> {Pessoa_01, 111-111, (NULL) }}---------->(OK)
                                                                                   |                                                                                   
                                                                                   |                                                                                    |                                                                                    |                                                                                   |                                                                                   |                                                                                    |                                                                                   |                                                                                                                                                                      
___________________________________________________________________________________|                                                                                   
*/