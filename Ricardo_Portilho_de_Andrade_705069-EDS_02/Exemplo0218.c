/*    
Exemplo0218 - v0.0. - 27 / 03 / 2020    
Author: Ricardo Portilho de Andrade       
*/ 
// dependencias 
#include "io.h" // para definicoes proprias 

   
/*   
Funcao principal.   
@return codigo de encerramento   
@param argc - quantidade de parametros na linha de comandos   
@param argv - arranjo com o grupo de parametros na linha de comandos 
*/ 

int main ( ) 
{ 
 // definir dado     
   double x = 0;   // definir variavel com valor inicial 
   double y = 0;   // definir variavel com valor inicial 
   
 // identificar 
   
   printf ( "%s\n", "\nExemplo0218 - Programa = v2.0" );     
   printf ( "%s\n", "Autor: Ricado Portilho de Andrade" );     
   printf ( "\n" ); // mudar de linha 
 //(OBS.:Estou utilizando esse metodo de indentificaçao,
 //pois não consegui colocar o meu nome no metodo IO_id).   
 
 
 // ler do teclado     
   x = IO_readdouble ( "Entrar com um valor real: " );   
   y = IO_readdouble ( "Entrar com outro valor real: " );
     
 // testar valor      

   if(x > y)
   {
     IO_printf ( "%s (%lf) (%lf)\n", "O primeiro valor e' maior que o segundo", x, y );
   }  
   else if(x < y)
   {
     IO_printf ( "%s (%lf) (%lf)\n", "O primeiro valor e' menor que o segundo", x, y );
   } 
   else
   {
     IO_printf ( "%s (%lf) (%lf)\n", "O primeiro valor e' igual ao segundo", x, y );
   } 
  
  // encerrar     
   IO_pause ( "Apertar ENTER para terminar" );     
   return ( 0 ); 
} // fim main( ) 
 
 
 
 
 
/*
---------------------------------------------- documentacao complementar 
Versao  Resultado  Teste     Observar as saidas
0.1       (OK)      01.      *Apos colocarmos um valor, inteiro, o programa nos informa se o mesmo é igual a zero ou diferente de zero.
0.2       (OK)      01.      *Apos colocarmos um valor, inteiro, o programa nos informa se o mesmo é igual a zero ou diferente de zero.
0.3       (OK)      01.      *Apos colocarmos um valor, inteiro, o programa nos informa se o mesmo é igual a zero, diferente de zero maior ou menor que zero.
0.4       (OK)      01.      *Apos colocarmos um valor, real, o programa nos informa se o mesmo está dentro do intervalo, de 1 até 10, ou não, além disso ele fala se o valor ultrapassa ou e' utrapassado pelos valores dentro do intervalo.  
0.5       (OK)      01.      *Apos colocarmos um valor, preferencialmente um caractere, o programa nos informa se esse valor e' um numero, uma letra maiuscula ou minuscula e tambem se ele e' um tipo de simbolo. 
0.6       (OK)      01.      *Apos colocarmos um valor, preferencialmente um caractere, o programa nos mostra se o valor e' uma letra ou diferente de uma letra.    
0.7       (OK)      01.      *Apos colocarmos um valor, preferencialmente um caractere, o programa nos mostra se o valor e' uma letra ou diferente de uma letra.    
0.8       (OK)      01.      *Apos colocarmos um valor, preferencialmente os valores ['A','0','a'], ele nos diz qual caractere utilizamos e o seu valor.
0.9       (OK)      01.      *Apos colocarmos um valor, preferencialmente os valores ['0','1','2','3'], ele nos diz qual numero, inteiro, utilizamos e o seu valor.
1.0       (OK)      01.      *Apos colocarmos um valor, preferencialmente os valores ['0','1','2','3'], ele nos diz qual numero, inteiro, utilizamos e o seu valor, utilizando metodos predefinidos.
    
Exercicios:
1.1       (OK)      01.      *Apos colocarmos um valor, o programa nos diz se ele e' par ou impar. 
1.2       (OK)      01.      *Apos colocarmos um valor, o programa nos diz se ele e' um numero maior que 100, menor que -100 e ainda se ele e' par ou impar. 
1.3       (OK)      01.      *Apos colocarmos um valor, o programa nos diz se ele e' um numero que esta no entervalo aberto (30:75). 
1.4       (OK)      01.      *Apos colocarmos um valor, o programa nos diz se ele e' um numero que esta no entervalo fechado [30:75]. 
1.5       (OK)      01.      *Apos colocarmos um valor, o programa nos diz se ele e' um numero que esta nos entervalos fechados [33:66] e [20:45]. 
1.6       (OK)      01.      *Apos colocarmos dois valores, o programa nos diz se os valores são par ou impar. 
1.7       (OK)      01.      *Apos colocarmos dois valores, o programa nos diz se os valores são par ou impar e se sao positivos e negativos.     
1.8       (OK)      01.      *Apos colocarmos dois valores, o programa nos diz se os valores sao iguais ou diferentes.     
    
----------------------------------------------- notas / observacoes / comentarios 
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

Exercicios:
1.1     01.     *Nao houve problemas na compilacao do programa.
1.2     01.     *Nao houve problemas na compilacao do programa.
1.3     01.     *Nao houve problemas na compilacao do programa.
1.4     01.     *Nao houve problemas na compilacao do programa.
1.5     01.     *Nao houve problemas na compilacao do programa.
1.6     01.     *Nao houve problemas na compilacao do programa.
1.7     01.     *Nao houve problemas na compilacao do programa.
1.8     01.     *Nao houve problemas na compilacao do programa.

---------------------------------------------- previsao de testes 

VERSAO: 0.1
a.)0             RESUTADO: É mostrada a seguinte mensagem "Valor igual a zero (0)".
b.)5             RESUTADO: É mostrada a seguinte mensagem "Valor diferente de zero (5)"
c.)-5            RESUTADO: É mostrada a seguinte mensagem "Valor diferente de zero (-5)"
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.2
a.)0             RESUTADO: É mostrada a seguinte mensagem "Valor igual a zero (0)".
b.)5             RESUTADO: É mostrada a seguinte mensagem "Valor diferente de zero (5)"
c.)-5            RESUTADO: É mostrada a seguinte mensagem "Valor diferente de zero (-5)"
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.3
a.)0             RESUTADO: É mostrada a seguinte mensagem "Valor igual a zero (0)".
b.)5             RESUTADO: São mostradas as seguintes mensagens "Valor diferente de zero  (5)" e "Valor maior que zero (5)".
c.)-5            RESUTADO: São mostradas as seguintes mensagens "Valor diferente de zero  (5)" e "Valor menor que zero (-5)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 0.4
a.)   0       Resultado: É mostrada a seguinte mensagem "Valor fora do intervalo " e "Valor abaixo do intervalo".
b.)   1       Resultado: É mostrada a seguinte mensagem "Valor dentro do intervalo".
c.)  10       Resultado: É mostrada a seguinte mensagem "Valor dentro do intervalo".
d.)  -1       Resultado: É mostrada a seguinte mensagem "Valor fora do intervalo " e "Valor abaixo do intervalo".      
e.) 100       Resultado: É mostrada a seguinte mensagem "Valor fora do intervalo " e "Valor acima do intervalo".  
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 0.5
a.)   a       Resultado: É mostrada a seguinte mensagem "Letra minuscula (a)"
b.)   A       Resultado: São mostradas as seguintes mensagens "Valor diferente de maiuscula (A)" e "Letra maiuscula (A)"
c.)   0       Resultado: São mostradas as seguintes mensagens "Valor diferente de maiuscula (0)" e "Algorimo (0)"
d.)   #       Resultado: São mostradas as seguintes mensagens "Valor diferente de maiuscula (#)" e "Valor diferente de algorismo (#)"      
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 0.6
a.)   0       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (0)"
b.)   1       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (1)"
c.)  10       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (1)"
d.)  -1       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (-)"      
e.) 100       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (1)"
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 0.7
a.)   0       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (0)"
b.)   1       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (1)"
c.)  10       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (1)"
d.)  -1       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (-)"      
e.) 100       Resultado: É mostrada a seguinte mensagem "Valor diferente de letra (1)"
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 0.8
a.)   0       Resultado: E' mostrada a seguinte mensagem "Valor igual do simbolo zero (0=48)".
b.)   A       Resultado: E' mostrada a seguinte mensagem "Valor igual 'a letra A (A=65)".
c.)   a       Resultado: E' mostrada a seguinte mensagem "Valor igual 'a letra a (a=97)".
d.)   1       Resultado: E' mostrada a seguinte mensagem "Valor diferente das opcoes ['0','A','a'] (1=49)"
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 0.9
a.)   0       Resultado: E' mostrada a seguinte mensagem "Valor igual a zero (0)".
b.)   1       Resultado: E' mostrada a seguinte mensagem "Valor igual a um   (1)".
c.)   2       Resultado: E' mostrada a seguinte mensagem "Valor igual a dois (2)".
d.)   3       Resultado: E' mostrada a seguinte mensagem "Valor igual a tres (3)".
e.)   4       Resultado: E' mostrada a seguinte mensagem "Valor diferente das opcoes [0,1,2,3] (4)".
f.)  -1       Resultado: E' mostrada a seguinte mensagem "Valor diferente das opcoes [0,1,2,3] (-1)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

VERSAO: 1.0
a.)   0       Resultado: Não ha' mensagem de saida.
b.)   1       Resultado: E' mostrada a seguinte mensagem "Valor igual a um".
c.)   2       Resultado: E' mostrada a seguinte mensagem "Valor igual a (2)".
d.)   3       Resultado: E' mostrada a seguinte mensagem "Valor igual a tres (3)".
e.)   4       Resultado: E' mostrada a seguinte mensagem "Valor diferente das opcoes [0,1,2,3] (4)".
f.)  -1       Resultado: E' mostrada a seguinte mensagem "Valor diferente das opcoes [0,1,2,3] (-1)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Exercicios:
Versão: 1.1
a.)   0       Resultado:E' mostrada a seguinte mensagem "Valor e' igual a par (0)".
b.)   2       Resultado:E' mostrada a seguinte mensagem "Valor e' igual a par (2)".
c.)  -2       Resultado:E' mostrada a seguinte mensagem "Valor e' igual a par (-2)".
e.)   5       Resultado:E' mostrada a seguinte mensagem "Valor e' igual a impar (5)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.2
a.)   5       Resultado:E' mostrada a seguinte mensagem "O valor pertece ao intervalo de -100 < x > 100 (5)".
b.) 100       Resultado:E' mostrada a seguinte mensagem "O valor pertece ao intervalo de -100 =< x => 100 (100)".
c.)-150       Resultado:Sao mostradas as seguintes mensagens "Valor e' menor que -100 (-150)" e "Valor e' igual a par (-150)".
e.) 155       Resultado:Sao mostradas as seguintes mensagens "Valor e' maior que 100 (155)" e "Valor e' igual a impar (155)".
f.) 158       Resultado:Sao mostradas as seguintes mensagens "Valor e' maior que 100 (158)" e "O valor nao e' impar (158)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.3
a.)   5       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence ao intervalo aberto (30:75) (5)".
b.) 100       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence ao intervalo aberto (30:75) (100)".
c.)  40       Resultado:E' mostrada a seguinte mensagem "O valor pertence ao intervalo aberto (30:75) (40)".
c.)  30       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence ao intervalo aberto (30:75) (30)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.4
a.)   5       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence ao intervalo fechado [30:75] (5)".
b.) 100       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence ao intervalo fechado [30:75] (100)".
c.)  40       Resultado:E' mostrada a seguinte mensagem "O valor pertence ao intervalo fechado [30:75] (40)".
c.)  30       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence ao intervalo aberto [30:75] (30)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.5
a.)  26       Resultado:E' mostrada a seguinte mensagem "O valor pertence ao intervalo fechado [20:45] (26)".
b.) 100       Resultado:E' mostrada a seguinte mensagem "O valor nao pertence aos intervalos fechados [33:66] e [20:45] (100)".
c.)  40       Resultado:Sao mostradas as seguintes mensagens "O valor pertence ao intervalo fechado [20:45] (40)" e "O valor pertence ao intervalo fechado [33:66] (40)".
c.)  33       Resultado:Sao mostradas as seguintes mensagens "O valor pertence ao intervalo fechado [20:45] (33)" e "O valor pertence ao intervalo fechado [33:66] (33)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.6
a.) 6 e 4        Resultado:Sao mostradas as seguintes mensagens "O primeiro valor e' par (6)" e "O segundo valor nao e' impar (4)".
b.) 5 e 7        Resultado:Sao mostradas as seguintes mensagens "O primeiro valor nao e' par (5)" e "O segundo valor e' impar (7)".
c.) 2 e 5        Resultado:Sao mostradas as seguintes mensagens "O primeiro valor e' par (2)" e "O segundo valor e' impar (5)".
c.) 5 e 6        Resultado:Sao mostradas as seguintes mensagens "O primeiro valor nao e' par (5)" e "O segundo valor nao e' impar (6)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.7
a.)  6 e 4         Resultado:Sao mostradas as seguintes mensagens "O primeiro valor e' par e positivo (6)" e "O segundo valor e' par e positivo (4)".
b.) -5 e 7         Resultado:Sao mostradas as seguintes mensagens "O primeiro valor e' impar e negativo (-5)" e "O segundo valor e' impar e positivo (7)".
c.)  2 e -5        Resultado:Sao mostradas as seguintes mensagens "O primeiro valor e' par e positivo (2)" e "O segundo valor e' impar e negativo (-5)".
c.) -5 e -6        Resultado:Sao mostradas as seguintes mensagens "O primeiro valor e' impar e negativo (-5)" e "O segundo valor e' par e negativo (-6)
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

Versão: 1.8
a.)  7.5 e 7             Resultado: E' mostrada a seguinte mensagem "O primeiro valor e' maior que o segundo (7.500000) (7.000000)".
b.)  3 e 7               Resultado: E' mostrada a seguinte mensagem "O primeiro valor e' menor que o segundo (3.000000) (7.000000)".
c.) -5.25 e -5.25        Resultado: E' mostrada a seguinte mensagem "O primeiro valor e' igual ao segundo (-5.250000) (-5.250000)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos. 

---------------------------------------------- historico 
 
Versao   Data     Modificacao   
0.1      27/03    esboco 
0.2      27/03    esboco 
0.3      27/03    esboco   
0.4      27/03    esboco
0.5      27/03    esboco
0.6      27/03    esboco
0.7      27/03    esboco
0.8      27/03    esboco
0.9      27/03    esboco
1.0      27/03    esboco

Exercicios:
1.1      27/03    esboco
1.2      27/03    esboco
1.3      27/03    esboco
1.4      27/03    esboco
1.5      27/03    esboco
1.6      27/03    esboco
1.7      27/03    esboco
1.8      27/03    esboco


---------------------------------------------- testes 
 
 Versao   Teste                Identificacao de programa 
 0.1      01. ( OK )           Leitura e exibicao de inteiro. 
 0.2      01. ( OK )           Leitura e exibicao de inteiro, utilizando else.
 0.3      01. ( OK )           Leitura e exibicao de inteiro, utilizanção de mais restrições.
 0.4      01. ( OK )           Leitura e exibicao de real.
 0.5      01. ( OK )           Leitura e exibicao de caractere.
 0.6      01. ( OK )           Leitura e exibicao de caractere.
 0.7      01. ( OK )           Leitura e exibicao de caractere.
 0.8      01. ( OK )           Leitura e exibicao de caractere e numeros.
 0.9      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.0      01. ( OK )           Leitura e exibicao numeros inteiros.

 Exercicios:
 1.1      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.2      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.3      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.4      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.5      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.6      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.7      01. ( OK )           Leitura e exibicao numeros inteiros.
 1.8      01. ( OK )           Leitura e exibicao numeros reais.
 
*/
