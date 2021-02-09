/*    Exemplo0113 - v1.3. - 17 / 03 / 2020   
      Author: Ricardo Portilho de Andrade        
*/ 

// dependencias 
#include "io.h"                    // para definicoes proprias ( na mesma pasta ) 
#include <stdio.h>                 // para as entradas e saidas 
#include <stdbool.h>               // para valores logicos  
#include <string.h>                // para cadeias de caracteres
#include <math.h>                  // para funcoes matematicas 

int main ( int argc, char* argv [ ] ) 
{
// definir dado
int x = 0;  
int y = 0;

// identificar     
    printf ( "%s\n", "\nExemplo0113 - Programa = v1.3" );     
    printf ( "%s\n", "Autor: Ricado Portilho de Andrade" );     
    printf ( "\n" ); // mudar de linha 

//programa 

printf("Digite o tamanho da base do retangulo:");
scanf("%i", &x); //lado do retangulo
printf("Digite o tamanho da altura do retangulo:");
scanf("%i", &y); //lado do retangulo

int a = (x*y/3); //decubrir um terco da area

printf("\nUm terco da area desse retangulo e' igual a %d\n", a);

getchar();
getchar();
return(0);

}//end main


/*
---------------------------------------------- documentacao complementar 
Versao  Resultado  Teste     Observar as saidas
0.1       (OK)      01.      *Apos colocar um valor para x, que antes era conciderado com valor igual a 0, o valor colocado e' mostrado na tela e e' um numero inteiro.
0.2       (OK)      01.      *Apos colocar um valor para x, que antes era considerado com valor igual a 0.0, o valor colocado e' mostrado na tela e e' um numero real.
0.3       (OK)      01.      *Apos colocar um valor para x, que antes era considerado com valor igual a A, o valor colocado e' mostrado na tela e e' igual ao primeiro caractere digitado. 
0.4       (OK)      01.      *Apos colocar um valor para x, que antes era considerado com valor igual a 0/false, o valor colocado e' mostrado na tela e e' igual ao numero colocado. 
0.5       (OK)      01.      *Apos colocar um valor para x, que antes era considerado com valor igual a abc, o valor colocado e' mostrado na tela e e' igual ao conjunto de caractere colocado. 
0.6       (OK)      01.      *Apos colocar um valor para x, y e indiretamente para z, sendo os dois primeiros numeros inteiror e o z igual o resutado da mutiplicacao desses numeros, e' mostrado na tela a operacao feita e seu resutado (z).
0.7       (OK)      01.      *Apos colocar um valor para x, y e indiretamente para z, os tres valores sao reais, sendo que z e' igual ao rersutado da potencia "x elevado a y".
0.8       (OK)      01.      *Apos colocar um conjunto de caracteres para x, y e indiretamente para z, sendo que z e' igual a juncao dos caracteres de x e y.
0.9       (OK)      01.      *Ao rodar o programa podemos indentificar uma serie de resutados, sendo que esses resultados sao muito diversificados.          
1.0       (OK)      01.      *Pode perceber que o programa utiliza diferentes formas de de "avaliar" um valor, essas formas sao caractere, fracao, inteiro, logica e conjunto de caracteres.

EXERCICIOS:
1.1       (OK)      01.      *Um valor inteiro e' inserido e e' tratado como um lado de um quadrado, depois e' dado o valor da metade da area do quadrado. 
1.2       (OK)      01.      *Um valor inteiro e' inserido e e' tratado como um lado de um quadrado, depois e' o valor e' mutiplicado por dois  e e' dado a area e perimetro. 
1.3       (OK)      01.      *Dois valores sao inseridos e sao tratados como base e altura de um retangulo, depois e' dado o valor da terca parte da area do retangulo.

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

EXERCICIOS:
1.1     01.     *Nao houve problemas na compilacao do programa.
1.2     01.     *Nao houve problemas na compilacao do programa.
1.3     01.     *Nao houve problemas na compilacao do programa.

---------------------------------------------- previsao de testes 

VERSAO: 0.1
a.)5             RESUTADO: O valor do x para de ser considerado 0 e e' comeca a ser igual a 5.
b.)-5            RESUTADO: O valor do x para de ser considerado 0 e e' comeca a ser igual a -5.
c.)123456789     RESUTADO: O valor do x para de ser considerado 0 e e' comeca a ser igual a 123456789.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.2
a.)0.5           RESUTADO: O valor do x para de ser considerado 0 e comeca a ser igual a 0.5.
b.)-0.5          RESUTADO: O valor do x para de ser considerado 0 e comeca a ser igual a -0.5.
c.)1.23456789    RESUTADO: O valor do x para de ser considerado 0 e comeca a ser igual a 1.23456789.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.3
RESUTADO: O valor de x para de ser considerado A e comeca a ser igual a uma letra escolhida. 
P.s.: O valor sempre ira ser igual a primeira letra que a pessoa colocar. 
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.4
a.)1           RESUTADO: O valor de x e' indentificado como 1.
b.)0           RESUTADO: O valor de x e' indentificado como 0.
c.)true        RESUTADO: O valor de x e' indentificado como 0.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.5
a.)def           RESUTADO: O valor de x e' indentificado como def.
b.)d e f         RESUTADO: O valor de x e' indentificado como d.
c.)d_e_f         RESUTADO: O valor de x e' indentificado como d_e_f.
P.s.: Somente quando as palavras de uma frase sao conectadas por algum tipo de caractere (exemplo:A_Casa_grande),
a frase sera mostrada em sua totalidade, caso nao sejam conectadas somente a primeira palavra aparecera.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.6
a.) 3 e  5        RESUTADO: O valor dado e' z = (3)*(5)=(15).
b.)-3 e  5        RESUTADO: O valor dado e' z = (-3)*(5)=(-15).
c.)-3 e -5        RESUTADO: O valor dado e' z = (-3)*(-5)=(15).
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.7
a.) 2.0 e  3.0        RESUTADO: O valor dado e' 8.
b.) 3.0 e  2.0        RESUTADO: O valor dado e' 9.
c.)-3.0 e  2.0        RESUTADO: O valor dado e' 9.
d.)-2.0 e -3.0        RESUTADO: o valor dado e' -0.125.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.8
a.) 12 e 24        RESUTADO: O valor e' igual a 1224.
b.) ab e cd        RESUTADO: O valor e' igual a abcd. 
c.)  a e bc        RESUTADO: O valor e' igual a abc.
d.) ab e c         RESUTADO: O valor e' igual a abc.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.9
RESULTADO: O programa utiliza a variavel x, y e z para um conjunto de acoes, sendo que uma das mais usadas e' a logica.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.

VERSAO: 1.0
a.) a          RESUTADO: O valor e' igual a a
b.) 4.2        RESUTADO: O valor e' igual a 4.200000
c.) 10         RESUTADO: O valor e' igual a 10
d.) 1          RESUTADO: O valor e' igual a 1
e.) abc def    RESUTADO: O valor e' igual a abc                                                                       
f.) abc def    RESUTADO: O valor e' igual a abc def
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.

EXERCICIOS:
VERSAO: 1.1
a.) 4           RESULTADO: O valor entregue e' igual a 8
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.

VERSAO: 1.2
a.) 5           RESULTADO: Os valores entregues sao iguais a 100 e 40 
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.

VERSAO: 1.3
a.) 15 e 2           RESULTADO: O valor entregue e' igual a 10 
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.





---------------------------------------------- historico 
 
Versao   Data     Modificacao   
0.1      17/03    esboco 
0.2      17/03    mudanca de versao. 
0.3      17/03    utilizacao de caracteres.
0.4      17/03    utilizacao de valores logicos.
0.5      17/03    utilizacao de cadeias de caracteres.
0.6      17/03    utilizacao de mutiplicacao de dois numeros inteiros. 
0.7      17/03    utilizacao da biblioteca math.h.
0.8      17/03    utilizacao da biblioteca string.h para usar conjuntos de caracteres.
0.9      17/03    utilizacao de "materiais" de diferentes bibliotecas.
1.0      17/03    utilizacao da biblioteca io.h

EXERCICIOS:
1.1      17/03    utilizacao de bibliotecas da propria linguagem. 
1.2      17/03    utilizacao de bibliotecas da propria linguagem.
1.3      17/03    utilizacao de bibliotecas da propria linguagem.


---------------------------------------------- testes 
 
 Versao   Teste                Identificacao de programa 
 0.1      01. ( OK )           Leitura e exibicao de inteiro. 
 0.2      01. ( OK )           Leitura e exibicao de reais.  
 0.3      01. ( OK )           leitura e exibicao de caracteres.
 0.4      01. ( OK )           leitura e exibicao de valores logicos.
 0.5      01. ( OK )           leitura e exibicao de cadeias de caracteres.
 0.6      01. ( OK )           leitura de dois valores inteiros e exibicao de um valor.
 0.7      01. ( OK )           leitura de dois valores reais e exibicao de um valor.
 0.8      01. ( OK )           leitura de dois conjuntos de caracteres e exibicao de uma juncao desses dois conjuntos.
 0.9      01. ( OK )           utilizacao de valores definidos e exibicao de respostas que variam de caracteres, numeros inteiros,partes fracinadas e logicas. 
 1.0      01. ( OK )           entrada e saida de valores de diferentes tipos.

 EXERCICIOS:
 1.1      01. ( OK )           entrada e saida de valores inteiros.
 1.2      01. ( OK )           entrada e saida de valores inteiros.
 1.3      01. ( OK )           entrada e saida de valores inteiros.

*/