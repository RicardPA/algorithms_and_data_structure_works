/*
 Exemplo1220 - v0.0. - 13 / 06 / 2020
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
#include "mymatrix.hpp"
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
 Method01 - Mostrar certa quantidade de valores.
*/
void method01(void)
{
   // definir dados
   int L = 0;
   int C = 0;
   int F = 0;
   int I = 1;
   // Indentificador
   cout << endl
        << "EXEMPLO1220 - Method01 - v0.0" << endl;
   // Ler dados
   while (L <= 0 || C <= 0 || F < I)
   {
      cout << endl
           << "Coloque o valor referente a quantidade de linhas: ";
      cin >> L;
      cout << endl
           << "Coloque o valor referente a quantidade de colunas: ";
      cin >> C;
      cout << endl
           << "Coloque o valor referente ao limite inicial: ";
      cin >> I;
      cout << endl
           << "Coloque o valor referente ao limite final: ";
      cin >> F;
   }
   // Criar matriz
   Matrix<int> matrix(L, C);
   // Colocar valores aleatorios
   matrix.random(I, F, "DADOS.TXT");
   // mostrar matriz
   matrix.print();
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
   Matrix<int> matrix(1, 1);
   Matrix<int> matrix2(1, 1);
   int L = 0;
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method02 - v0.0" << endl;
   // pedir a constante------------------------------
   cout << endl
        << "Coloque o valor referente a constante: ";
   cin >> L;
   // ler matriz ------------------------------------
   matrix.fread("DADOS.TXT");
   //------------------------------------------------
   // mostrar dados
   cout << endl
        << "Antes do escalonamento" << endl;
   matrix.print();
   matrix.escal(L);
   matrix2 = matrix;
   // mostrar dados
   cout << endl
        << "Depois do escalonamento" << endl;
   matrix2.print();
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
   Matrix<int> matrix(1, 1);
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method03 - v0.0" << endl;
   // gravar dados
   matrix.fread("DADOS.TXT");
   // teste de indentidade
   matrix.print();
   if (matrix.identidad())
   {
      cout << "E' matriz identidade" << endl;
   }
   else
   {
      cout << "Nao e' matriz identidade" << endl;
   }
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
   Matrix<int> matrix1(1, 1);
   Matrix<int> matrix2(1, 1);
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method04 - v0.0" << endl;
   matrix1.fread("DADOS.TXT");
   matrix2.fread("DADOS.TXT");
   if (matrix1 == matrix2)
   {
      cout << "Sao iguais" << endl;
   }
   else
   {
      cout << "Nao sao iguais" << endl;
   }
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
   Matrix<int> matrix1(1, 1);
   Matrix<int> matrix2(1, 1);
   Matrix<int> soma(1, 1);
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method05 - v0.0" << endl;
   // ler dados
   matrix1.fread("DADOS.TXT");
   matrix1.escal(2);
   matrix1.print();
   matrix2.fread("DADOS.TXT");
   matrix2.escal(3);
   matrix2.print();
   // somar
   soma = (matrix1 + matrix2);
   // mostrar a soma
   soma.print();
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
   Matrix<int> matrix(1, 1);
   int L = 0;
   int L2 = 0;
   int F = 0;
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method06 - v0.0" << endl;
   // ler valores
   matrix.fread("DADOS.TXT");
   // pedir para o usuario
   while ((L < 0 || L2 < 0) || (L == L2))
   {
      cout << endl
           << "Coloque o valor referente a linha resposta: ";
      cin >> L;
      cout << endl
           << "Coloque a segunda linha da operacao: ";
      cin >> L2;
      cout << endl
           << "Coloque a constante: ";
      cin >> F;
   }
   // Operar
   matrix.addRows(L, L2, (F));
   // mostrar resultado
   matrix.print();
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
   Matrix<int> matrix(1, 1);
   int c = 0;
   int c2 = 0;
   int F = 0;
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method07 - v0.0" << endl;
   // ler valores
   matrix.fread("DADOS.TXT");
   // pedir para o usuario
   while ((c < 0 || c2 < 0) || (c == c2))
   {
      cout << endl
           << "Coloque o valor referente a linha resposta: ";
      cin >> c;
      cout << endl
           << "Coloque a segunda linha da operacao: ";
      cin >> c2;
      cout << endl
           << "Coloque a constante: ";
      cin >> F;
   }
   // Operar
   matrix.subCol(c, c2, (F));
   // mostrar resultado
   matrix.print();
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
   Matrix<int> matrix(1, 1);
   int c = 0;
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method08 - v0.0" << endl;
   // ler valores
   matrix.fread("DADOS.TXT");
   // pedir para o usuario
   cout << endl
        << "Coloque o valor que voce que encontrar: ";
   cin >> c;
   // Operar
   int g = matrix.searchRows ( c );
   // mostrar resultado
   matrix.print();
   // linha onde o valor foi encontrado
   cout << "Linha: " << g << endl;
   // encerrar
   pause("Apertar ENTER para continuar");
} // fim method08 ( )

//-------------------------------------------------------------

/**
 Method09.
*/
void method09()
{
   // definir dados
   Matrix<int> matrix(1, 1);
   int c = 0;
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method08 - v0.0" << endl;
   // ler valores
   matrix.fread("DADOS.TXT");
   // pedir para o usuario
   cout << endl
        << "Coloque o valor que voce que encontrar: ";
   cin >> c;
   // Operar
   int g = matrix.searchCol ( c );
   // mostrar resultado
   matrix.print();
   // linha onde o valor foi encontrado
   cout << "Coluna: " << g << endl;
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
   Matrix<int> matrix(1, 1);
   int c = 0;
   // identificar
   cout << endl
        << "EXEMPLO1220 - Method10 - v0.0" << endl;
   // ler valores
   matrix.fread("DADOS.TXT");
   // mostrar a matrix normal
    matrix.print();
   // Operar
   matrix = matrix.transp();
   // mostrar resultado
   matrix.print();
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
      cout << "EXEMPLO1201 - Programa - v0.0\n " << endl;
      // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - Parar " << endl;
      cout << " 1 - Criar matriz com valores aleatorios" << endl;
      cout << " 2 - Multiplicar valores da matriz por uma constante" << endl;
      cout << " 3 - Verificar se e' matriz identidade" << endl;
      cout << " 4 - Verificar se duas matrizes sao iguais" << endl;
      cout << " 5 - Somar duas matrizes" << endl;
      cout << " 6 - Fazer uma operacao com duas linhas" << endl;
      cout << " 7 - Fazer uma operacao com duas colunas" << endl;
      cout << " 8 - Procurar um valor e' falar em que linha ele se encontra" << endl;
      cout << " 9 - Procurar um valor e' falar em que coluna ele se encontra" << endl;
      cout << "10 - Transpor uma matriz" << endl;
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
0.1       (OK)      01.      * Criar matriz com valores predefinidos
0.2       (OK)      01.      * Criar matriz com valores colocados pelo usuario
0.3       (OK)      01.      * Criar matriz com valores colocados pelo usuario e gravar em arquivo
0.4       (OK)      01.      * Ler arquivo com valores armazenados
0.5       (OK)      01.      * Fazer uma copia de uma matriz predefinida
0.6       (OK)      01.      * Conferir se uma matriz contem somente zeros
0.7       (OK)      01.      * Conferir se duas matrizes sao iguais
0.8       (OK)      01.      * Subtrair duas matrizes
0.9       (OK)      01.      * Multiplicar duas matrizes
1.0       (OK)      01.      * Fazer todos os valores ficarem negativos
Exercicios
1.1       (OK)      01.      * Criar matriz com valores aleatorios
1.2       (OK)      01.      * Multiplicar valores da matriz por uma constante
1.3       (OK)      01.      * Verificar se e' matriz identidade
1.4       (OK)      01.      * Verificar se duas matrizes sao iguais
1.5       (OK)      01.      * Somar duas matrizes
1.6       (OK)      01.      * Fazer uma operacao com duas linhas
1.7       (OK)      01.      * Fazer uma operacao com duas colunas
1.8       (OK)      01.      * Procurar um valor e' falar em que linha ele se encontra
1.9       (OK)      01.      * Procurar um valor e' falar em que coluna ele se encontra
2.0       (OK)      01.      * Transpor uma matriz

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

---------------------------------------------- previsao de testes------------------|------------------|
Exemplos                                                                           |Validacao de teste| 
*EXEMPLO1201                                                                       |------------------|
a.) { 1, 2, 3, 4 }->{ 1  2 }--------------------------------------------------->(OK)
                    { 3  4 }                                                       |
                                                                                   |
*EXEMPLO1202                                                                       |
a.) | 1, 2, 3, 4 | -> { 1  2 }------------------------------------------------->(OK)
                      { 3  4 }                                                     |
                                                                                   |
*EXEMPLO1203                                                                       |
a.) | 1, 2, 3, 4| -> MATRIX1.TXT -> [ 2, 2, 1, 2, 3, 4 ]----------------------->(OK)
                                                                                   |
*EXEMPLO1204                                                                       |
a.) MATRIX1.TXT -> [ 2, 2, 1, 2, 3, 4 ] -> { 1 2 }----------------------------->(OK)
                                           { 3 4 }                                 |
                                                                                   |
*EXEMPLO1205                                                                       |
a.) { 1 2 } -> Copia -> { 1 2 }------------------------------------------------>(OK)
    { 3 4 }             { 3 4 }                                                    |
                                                                                   |
*EXEMPLO1206                                                                       |
a.) { 0 0 } -> Zero = 1 / { 1 2 } -> Zero = 0 --------------------------------->(OK)
    { 0 0 }               { 3 4 }                                                  |
                                                                                   |
*EXEMPLO1207                                                                       |
a.) Matrix_1 -> { 1 2 } != Matrix_2 -> Copia -> { 1 2 } / { Diferentes = 0 }--->(OK)
                { 3 4 }                         { 3 4 }                            |
*EXEMPLO1208                                                                       |
a.) { 1 2 } - { 1 2 } -> { 0 0 }----------------------------------------------->(OK)
    { 3 4 }   { 3 4 }    { 0 0 }                                                   |
                                                                                   |
*EXEMPLO0709                                                                       |
a.) { 1 0 } * { 1 2 } -> { 1 2 }----------------------------------------------->(OK)
    { 0 1 }   { 3 4 }    { 3 4 }                                                   |
                                                                                   |
*EXEMPLO0710                                                                       |
a.) { 1 2 } -> { -1 -2 }------------------------------------------------------->(OK)
    { 3 4 }    { -3 -4 }                                                           |
                                                                                   |
-----------------------------------------------------------------------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                         |
                                                                                   |
*EXEMPLO1211                                                                       |
a.) | 2, 2, 1, 10 | -> { 1 6 }------------------------------------------------->(OK)
                       { 2 9 }                                                     |                                                                                   
                                                                                   |
*EXEMPLO1212                                                                       |
a.) | 3 | -> { 1 6 } -> { 3 18 }----------------------------------------------->(OK)
             { 2 9 }    { 6 27 }                                                   |                                                                                   
                                                                                   |
*EXEMPLO1213                                                                       |
a.) { 1 6 } -> { Nao e' matriz identidade }------------------------------------>(OK)
    { 2 9 }                                                                        |                                                                                   
                                                                                   |
*EXEMPLO1214                                                                       |
a.) { 1 6 } == { 1 6 } { Sao iguais }------------------------------------------>(OK)
    { 2 9 }    { 2 9 }                                                             |                                                                                   
                                                                                   |
*EXEMPLO1215                                                                       |
a.) { 2 12 } + { 3 18 } = {  5 30 }-------------------------------------------->(OK)
    { 4 18 }   { 6 27 }   { 10 45 }                                                |                                                                                   
                                                                                   |
*EXEMPLO1216                                                                       |
a.) | 1, 0, 3 | -> { 1 6 } -> { 1   6 }---------------------------------------->(OK)
                   { 2 9 }    { 9  45 }                                            |                                                                                   
                                                                                   |
*EXEMPLO1217                                                                       |
a.) | 0, 1, 3 | -> { 1 6 } -> { -15  6 }---------------------------------------->(OK)
                   { 2 9 }    { -21  9 }                                           |                                                                                   
                                                                                   |
*EXEMPLO1218                                                                       |
a.) | 2 | -> { 1 6 } -> { Linha: 2 }------------------------------------------->(OK)
             { 2 9 }                                                               |                                                                                   
                                                                                   |
*EXEMPLO1219                                                                       |
a.) | 2 | -> { 1 6 } -> { Coluna: 1 }------------------------------------------>(OK)
             { 2 9 }                                                               |                                                                                   
                                                                                   |
*EXEMPLO1220                                                                       |
a.) { 1 6 } -> { 1 2 }--------------------------------------------------------->(OK)
    { 2 9 }    { 6 9 }                                                             |                                                                                   
                                                                                   |                                                                                    |                                                                                    |                                                                                   |                                                                                   |                                                                                    |                                                                                   |                                                                                                                                                                      
___________________________________________________________________________________|                                                                                   
*/