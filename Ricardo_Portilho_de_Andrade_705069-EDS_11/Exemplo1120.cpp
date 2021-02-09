/*
 Exemplo1101 - v0.0. - 03 / 06 / 2020
 Author: Ricardo Portilho de Andrade 
*/
// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres
// ----------------------------------------------- definicoes globais
void pause(std::string text)
{
   std::string dummy;
   std::cin.clear();
   std::cout << std::endl
             << text;
   std::cin.ignore();
   std::getline(std::cin, dummy);
   std::cout << std::endl
             << std::endl;
} // end pause ( )
// ----------------------------------------------- classes / pacotes
#include "myarray.hpp"
using namespace std;
// ----------------------------------------------- metodos
/**
 Method00 - nao faz nada.
*/
void method00(void)
{
   // nao faz nada
} // fim method00 ( )

//--------------------------------------------------------------

/**
 Method01 - Fazer um array com valores aleatorios.
*/
void method01(void)
{
   int Q = 0;
   int I = 1;
   int F = 0;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method01 - v0.0" << endl;
   while (Q <= 0 || F < I)
   {
      cout << endl
           << "Coloque o valor referente a quantidade de dados: ";
      cin >> Q;
      cout << endl
           << "Coloque o valor referente ao limite inicial: ";
      cin >> I;
      cout << endl
           << "Coloque o valor referente ao limite final: ";
      cin >> F;
   }
   // definir dados
   Array<int> int_array(Q);
   // ler dados
   int_array.random(I, F, "arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method01 ( )

//---------------------------------------------------------------

/**
 Method02.
*/
void method02()
{
   // definir dados
   Array<int> int_array;
   int maior = 0;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method02 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // mostrar o maior
   maior = int_array.arrayIntB();
   cout << "O maio valor e': " << maior << endl;
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method02 ( )

//--------------------------------------------------------------

/**
 Method03.
*/
void method03()
{
   // definir dados
   Array<int> int_array;
   int menor = 0;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method03 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // mostrar o maior
   menor = int_array.arrayIntS();
   cout << "O menor valor e': " << menor << endl;
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method03 ( )

//---------------------------------------------------------------

/**
 Method04.
*/
void method04()
{
   // definir dados
   Array<int> int_array;
   int soma = 0;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method04 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // mostrar o maior
   soma = int_array.arraySoma();
   cout << "A soma dos valores do arranjo e': " << soma << endl;
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method04 ( )

//---------------------------------------------------------------

/**
 Method05.
*/
void method05()
{
   // definir dados
   Array<int> int_array;
   int media = 0;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method05 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // mostrar o maior
   media = int_array.arrayMedia();
   cout << "A media dos valores do arranjo e': " << media << endl;
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method05 ( )

//--------------------------------------------------------------

/**
 Method06.
*/
void method06()
{
   // definir dados
   Array<int> int_array;
   bool zero = false;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method06 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // mostrar o maior
   zero = int_array.arrayZero();
   if (zero)
   {
      cout << "O arranjo e' composto somente por zeros: " << zero << endl;
   }
   else
   {
      cout << "O arranjo nao e' composto somente por zeros: " << zero << endl;
   }
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method06 ( )

//-------------------------------------------------------------

/**
 Method07.
*/
void method07()
{
   // definir dados
   Array<int> int_array;
   bool ordem = false;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method07 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // mostrar o maior
   ordem = int_array.arrayOrd();
   if (ordem)
   {
      cout << "O arranjo e' ordenado: " << ordem << endl;
   }
   else
   {
      cout << "O arranjo nao e' ordenado: " << ordem << endl;
   }
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method07 ( )

//-------------------------------------------------------------

/**
 Method08.
*/
void method08()
{
   // definir dados
   Array<int> int_array;
   Array<int> int_array2;
   bool encontrado = false;
   int procurado = 0;
   int F = 0;
   int I = 1;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method08 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   int t = int_array.tamanhoArray("arrayRandom.txt");
   do
   {
      cout << endl
           << "Coloque o valor a ser procurado: ";
      cin >> procurado;
      cout << endl
           << "Coloque o valor referente ao limite inicial: ";
      cin >> I;
      cout << endl
           << "Coloque o valor referente ao limite final: ";
      cin >> F;
   } while ((procurado <= 0) || (F < I) || (F > (t - 1)) || (I < 0));
   // mostrar dados
   int_array.print();
   // mostrar o maior
   encontrado = int_array.arrayVOeste(procurado, I, F);
   if (encontrado)
   {
      cout << "O valor foi encntrado: " << encontrado << endl;
   }
   else
   {
      cout << "O valor valor nao foi encontrado: " << encontrado << endl;
   }
   // reciclar espaco
   int_array.free();
   int_array2.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method08 ( )

//-------------------------------------------------------------

/**
 Method09.
*/
void method09()
{
   int V = 0;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method09 - v0.0" << endl;
   cout << endl
        << "Coloque um valor para ser multiplicado pelos valores do arranjo: ";
   cin >> V;
   // definir dados
   Array<int> int_array;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // escalar
   int_array.escalar(V);
   // mostrar dados
   int_array.print();
   // reciclar espaco
   int_array.free();
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method09 ( )

//-------------------------------------------------------------

/**
 Method10.
*/
void method10()
{
   // definir dados
   int c = 0;
   Array<int> int_array;
   // identificar
   cout << endl
        << "EXEMPLO1110 - Method10 - v0.0" << endl;
   // ler dados
   int_array.fread("arrayRandom.txt");
   // mostrar dados
   int_array.print();
   // ordenar array
   while(!(int_array.arrayOrd())){
   int_array.arrayOrdern();
   cout << "carragando..." << endl;
   c = c + 1;
   }
   // mostrar dados
   int_array.print();
   cout << c << endl;
   // reciclar espaco
   int_array.free();
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
              // repetir ate desejar parar
   do
   {
      // identificar
      cout << "EXEMPLO1101 - Programa - v0.0\n " << endl;
      // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - Parar " << endl;
      cout << " 1 - Fazer um arranjo com valores aleatorios " << endl;
      cout << " 2 - Falar qual e' o maior valor de um array" << endl;
      cout << " 3 - Falar qual e' o menor valor de um array" << endl;
      cout << " 4 - Somar todos os valores de um array" << endl;
      cout << " 5 - Obter a media de um array" << endl;
      cout << " 6 - Verificar se array e' composto somente por zeros" << endl;
      cout << " 7 - Verificar se arranjo esta ordenado" << endl;
      cout << " 8 - Procurar um valor especifico em um array" << endl;
      cout << " 9 - Multiplicar um array por uma constante" << endl;
      cout << "10 - Ordenar um array" << endl;
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
              << "ERRO: Valor invalido." << endl;
      } // fim escolher
   } while (x != 0);
   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // fim main( )

/*
---------------------------------------------- documentacao complementar
Versao  Resultado  Teste     Observar as saidas
0.1       (OK)      01.      * O programa nos mostra um array, que progride de 1 ate' 5.
0.2       (OK)      01.      * Fazer um arranjo de tamanho 5 com valores colocados pelo usuario
0.3       (OK)      01.      * Fazer e gravar um arranjo em um arquivo com tamanho 5
0.4       (OK)      01.      * Ler arquivo com valores armazenados
0.5       (OK)      01.      * Fazer uma copia de um arranjo predefinido
0.6       (OK)      01.      * Fazer uma copia de um arranjo que esta' em um arquivo utilizando um construtor
0.7       (OK)      01.      * Fazer uma copia de um arranjo que esta' em um arquivo utilizando o sinal de igualdade
0.8       (OK)      01.      * Compara dois arranjos utilizando dois sinais de igual
0.9       (OK)      01.      * Soma dois arranjos
1.0       (OK)      01.      * Fala se uma posicao existe em um arranjo
Exercicios
1.1       (OK)      01.      * Fazer um arranjo com valores aleatorios
1.2       (OK)      01.      * Falar qual e' o maior valor de um array
1.3       (OK)      01.      * Falar qual e' o menor valor de um array
1.4       (OK)      01.      * Somar todos os valores de um array
1.5       (OK)      01.      * Obter a media de um array
1.6       (OK)      01.      * Verificar se array e' composto somente por zeros
1.7       (OK)      01.      * Verificar se arranjo esta ordenado
1.8       (OK)      01.      * Procurar um valor especifico em um array
1.9       (OK)      01.      * Multiplicar um array por uma constante
2.0       (OK)      01.      * Ordenar um array

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

---------------------------------------------- previsao de testes-------------------------------|------------------|
Exemplos                                                                                        |Validacao de teste| 
*EXEMPLO1101                                                                                    |------------------|
a.) |5| -> { 1, 2, 3, 4, 5}----------------------------------------------------------------->(OK)
                                                                                                |
*EXEMPLO1102                                                                                    |
a.) | 1, 2, 3, 4, 5 | -> { 1, 2, 3, 4, 5 }-------------------------------------------------->(OK)
                                                                                                |
*EXEMPLO1103                                                                                    |
a.) | 1, 2, 3, 4, 5 | -> INT_ARRAY1.TXT -> [ 1, 2, 3, 4, 5 ]-------------------------------->(OK)
                                                                                                |
*EXEMPLO1104                                                                                    |
a.) INT_ARRAY1.TXT -> [ 1, 2, 3, 4, 5 ] -> | 1, 2, 3, 4, 5 |-------------------------------->(OK)
                                                                                                |
*EXEMPLO1105                                                                                    |
a.) { 1, 2, 3, 4, 5 } -> Copia -> { 1, 2, 3, 4, 5 }----------------------------------------->(OK)
                                                                                                |
*EXEMPLO1106                                                                                    |
a.) INT_ARRAY1.TXT -> [ 1, 2, 3, 4, 5 ] -> Copia -> { 1, 2, 3, 4, 5 }----------------------->(OK)
                                                                                                |
*EXEMPLO1107                                                                                    |
a.) INT_ARRAY1.TXT -> [ 1, 2, 3, 4, 5 ] -> Copia -> { 1, 2, 3, 4, 5 }----------------------->(OK)
                                                                                                |
*EXEMPLO1108                                                                                    |
a.) {1, 2, 3} == {1, 2, 3} -> {Igualdade = 1}----------------------------------------------->(OK)
                                                                                                |
*EXEMPLO1109                                                                                    |
a.) INT_ARRAY1.TXT -> [1, 2, 3, 4, 5] + {1, 2, 3, 4, 5} -> {2, 4, 6, 8, 10}----------------->(OK)
                                                                                                |
*EXEMPLO1110                                                                                    |
a.) {Fora dos limites:} -> {[-1]: 0}//{[5]:ERROR: Invalid position.}------------------------>(OK)
                                                                                                |
------------------------------------------------------------------------------------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                                      |
                                                                                                |
*EXEMPLO1111                                                                                    |
a.) |5, 1, 10| -> { 5, 4, 9, 9, 8}---------------------------------------------------------->(OK)
                                                                                                |
*EXEMPLO1112                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> {O maio valor e': 9}----------------------------->(OK)
                                                                                                |
*EXEMPLO1113                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> {O menor valor e': 1}---------------------------->(OK)
                                                                                                |
*EXEMPLO1114                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> {A soma dos valores do arranjo e': 35}----------->(OK)
                                                                                                |
*EXEMPLO1115                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> {A media dos valores do arranjo e': 7}----------->(OK)
                                                                                                |
*EXEMPLO1116                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> {O arranjo nao e' composto somente por zeros: 0}->(OK)
                                                                                                |
*EXEMPLO1117                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> {O arranjo nao e' ordenado: 0}------------------->(OK)
                                                                                                |                                                                                               
*EXEMPLO1118                                                                                    |
a.) |8, 1, 3| -> [ 5, 4, 9, 9, 8 ] -> {O valor valor nao foi encontrado: 0}----------------->(OK)
                                                                                                |                                                                                               
*EXEMPLO1119                                                                                    |
a.) |8| -> [ 5, 4, 9, 9, 8 ] -> { 40, 32, 72, 72, 64 }-------------------------------------->(OK)
                                                                                                |
*EXEMPLO1120                                                                                    |
a.) INT_ARRAY1.TXT -> [ 5, 4, 9, 9, 8 ] -> { 4, 5, 8, 9, 9 }-------------------------------->(OK)
                                                                                                |                                                                                                |                                                                                                 |                                                                                                 |                                                                                                |                                                                                                |                                                                                    |                                                                                    |                                                                                    |                                                                                   |
                                                                                                |
________________________________________________________________________________________________|                                                                                   
*/