/*
 Exemplo0520 - v0.0. - 19 / 04 / 2020
 Author: Ricardo Portilho de Andrade 
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <math.h>

//----------------------------------------------------------------------------------------------------------------

/**
 Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )

//----------------------------------------------------------------------------------------------------------------

/**
 M3 - Mostrar certa quantidade de valores multiplos de tres.
 @param x - quantidade de valores a serem mostrados
*/
void M3 ( int x )
{
// definir dado local
   int y = 1; // controle
   int z = 1;
// repetir enquanto controle menor que a quantidade desejada
   while ( y <= x )
   {
      z = 3 * y;
   // mostrar valor
      IO_printf ( "%d: %d\n", y, z );
   // passar ao proximo valor controlado
      y = y + 1;
   } // fim se
} // fim

/**
 Method01 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method01 ( )
{
// definir variaveis
   int quantidade = 0;
// identificar
   IO_id ( "EXEMPLO0520 - Method01 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   M3 (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

//-----------------------------------------------------------------------------------------------------------------------------

/**
 IM3 - Mostrar certa quantidade de valores multiplos de tres que sao impares.
 @param x - quantidade de valores a serem mostrados
*/
void IM3 ( int x )
{
// definir dado local
   int y = 1; // posicionador 
   int z = 1;
   int c = 1; // contador/ controle
// repetir enquanto controle menor que a quantidade desejada
   while ( c <= x )
   {
   // multiplicar o numero por tres
      z = 3 * y;
   // mostrar se o valor for multiplo de 3 e impar
      if ( z % 2 != 0 )
      {
         IO_printf ( "%d: %d\n", c, z );
         c = c + 1; 
      } 
   // passar para o proximo numero
      y = y + 1;
   } // fim se
} // fim

/**
 Method02 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method02 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method02 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   IM3 (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
/**
 PM3 - Mostrar certa quantidade de valores multiplos de tres que sao pares.
 @param x - quantidade de valores a serem mostrados
*/
void PM3 ( int x )
{
// definir dado local
   int y = x; // posicionador 
   int z = 1;
   int c = x; // contador/ controle
   y = y * 2; // obter quantidade total de numeros 
// repetir enquanto controle menor que a quantidade desejada
   while ( c > 0 )
   {
   // multiplicar o numero por tres
      z = 3 * y;
   // mostrar se o valor for multiplo de 3 e impar
      if ( z % 2 == 0 )
      {
         IO_printf ( "%d: %d\n", c, z ); 
         c = c - 1;
      } 
   // passar para o proximo numero
      y = y - 1;
   } // fim se
} // fim ( )

/**
 Method03 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method03 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method03 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   PM3 (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

//-----------------------------------------------------------------------------------------------------------------------------

 /**
 M3I - Mostrar certa quantidade de valores com denominadores igual a um multiplo de 3.
 @param x - quantidade de valores a serem mostrados
*/
void M3I ( int x )
{
// definir dado local
   int y = 1; // posicionador 
   int z = 1;
   double value = 0.0;
 
// repetir enquanto controle menor que a quantidade desejada
   while ( y <= x )
   {
   // Divisoes per multiplos de 3
      z = 3 * y;
   // Mostrar o valor 
      value = pow (z, -1);
      IO_printf ( "%d: 1/%d = %lf\n", y, z, value );
      y = y + 1;
   } // fim se
} // fim ( )

/**
 Method04 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method04 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method04 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   M3I (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
 /**
 PI - Mostrar certa quantidade de valores com denominadores igual a um multiplo de 3.
 @param x - quantidade de valores a serem mostrados
*/
void PI ( int x, int z )
{
// definir dado local
   int y = 1; // posicionador 
   int c = 0;
   int i = 0;
   double value = 0.0;

// repetir enquanto controle menor que a quantidade desejada
   while ( y <= x )
   {
      i = pow (z, (y - 1));
   // Mostrar o valor 
      value = pow (z, -(y - 1));
      IO_printf ( "%d: 1/%d = %lf\n", y, i, value );
      c = c - 1;
      y = y + 1;
   } // fim se
} // fim ( )

/**
 Method05 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method05 ( )
{
// definir variaveis
   int quantidade = 1;
   int D = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method05 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( D == 0)
      {
         IO_printf ("\nERRO: atencao o valor do denominador nao pode ser igual a zero.\n\n");
      }
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
      IO_printf("Coloque o valor referente ao denominador: ");
      IO_scanf("%d", &D);
   } while ( quantidade <= 0 || D == 0);  //While para testar o valor da quantidade
// executar o metodo auxiliar
   PI (quantidade, D);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
 /**
 SI - Mostrar a soma dos impares do numero tres para frente que nao sao multiplos de 5.
 @param x - quantidade de valores a serem mostrados
*/
void SI ( int x)
{
// definir dado local 
   int z = 3;
   int c = 1;
   int soma = 0;

// repetir enquanto controle menor que a quantidade desejada
   while ( c <= x )
   {
   // Testar para mostrar o valor 
   
      if ( ( z % 5 != 0 ) && ( z % 2 != 0 ) )
      {
         IO_printf ("%d: %d\n", c, z);
         c = c + 1;
         soma = soma + z;
      } // fim se
      z = z + 2;   
   }
   IO_printf ("%s %d","Soma =", soma);
} // fim ( )

/**
 Method06 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method06 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method05 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   SI (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )


//-----------------------------------------------------------------------------------------------------------------------------
 
 /**
 ISI - Mostrar a soma dos inversos impares, do numero tres para frente que nao sao multiplos de 5.
 @param x - quantidade de valores a serem mostrados
*/
void ISI ( int x)
{
// definir dado local 
   int z = 3;
   int c = 1;
   double soma = 0;
   double inverso = 0;

// repetir enquanto controle menor que a quantidade desejada
   while ( c <= x )
   {
   // Testar para mostrar o valor 
   
      if ( ( z % 5 != 0 ) && ( z % 2 != 0 ) )
      {
         IO_printf ("%d: 1/%d\n", c, z);
         c = c + 1;
         inverso = pow ( z, -1); 
         soma = soma + inverso;
      } // fim se
      z = z + 2;   
   }
   IO_printf ("%s %lf","Soma =", soma);
} // fim ( )

/**
 Method07 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method07 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method05 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   ISI (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
 /**
 SN - Mostrar a soma dos numeros naturais nao nulos.
 @param x - quantidade de valores a serem mostrados
*/
void SN ( int x)
{
// definir dado local 
   int c = 1;
   int soma = 0;
// repetir enquanto controle menor que a quantidade desejada
   while ( c <= x )
   {
   // Testar para mostrar o valor 
      IO_printf("%d: %d\n", c, c);
      soma = soma + c;
      c = c + 1; 
   }
   IO_printf ("%s %d","Soma =", soma);
} // fim ( )

/**
 Method08 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method08 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method05 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   SN (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
 /**
 SQN - Mostrar a soma do quadrado dos numeros naturais nao nulos.
 @param x - quantidade de valores a serem mostrados
*/
void SQN ( int x)
{
// definir dado local 
   int c = 1;
   int soma = 0;
   int d = 0;
// repetir enquanto controle menor que a quantidade desejada
   while ( c <= x )
   {
   // Testar para mostrar o valor 
     
         d = pow( c, 2 );
         
      if ( c % 5 == 0)////////////Necessario, pois por algum motivo quando c e' multiplo de 5 ele tem potencia com resultado diferente em uma unidade
      {
       d = d + 1;           
      }
      
      IO_printf("%d: %d\n", c, d);
      soma = soma + d;
      c = c + 1; 
   }
   IO_printf ("%s %d","Soma =", soma);
} // fim ( )

/**
 Method09 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method09 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method05 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   SQN (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
 /**
 SIN - Mostrar a soma do inverso dos numeros naturais nao nulos.
 @param x - quantidade de valores a serem mostrados
*/
void SIN ( int x)
{
// definir dado local 
   int c = 1;
   double soma = 0;
   double g = 1;
// repetir enquanto controle menor que a quantidade desejada
   while ( c <= x )
   {
   // Testar para mostrar o valor 
      IO_printf("%d: 1/%d\n", c, c);
      soma = soma + (1/g);
      c = c + 1; 
      g = g + 1;
   }
   IO_printf ("%s %lf","Soma =", soma);
} // fim ( )

/**
 Method10 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method10 ( )
{
// definir variaveis
   int quantidade = 1;
// identificar
   IO_id ( "EXEMPLO0520 - Method05 - v0.0" );
// testar se o valor da quantidade e' maior que zero   
   do
   {
      if ( quantidade <= 0)
      {
         IO_printf ("\nERRO: atencao o valor da quantidade nao pode ser menor ou igual a zero.\n\n");
      }
   // obtencao dos valores 
      IO_printf("Coloque o valor referente a quantidade: ");
      IO_scanf("%d", &quantidade);
   } while ( quantidade <= 0 );  //While para testar o valor da quantidade
// executar o metodo auxiliar
   SIN (quantidade);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )

//-----------------------------------------------------------------------------------------------------------------------------
 
/*
 Funcao principal.
 @return codigo de encerramento
*/
int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO0520 - Programa - v0.0" );
   
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Mostrar multiplos de tres" );
      IO_println ( " 2 - Mostrar multiplos de tres impares" );
      IO_println ( " 3 - Mostrar multiplos de tres pares" );
      IO_println ( " 4 - Mostrar denominadores multiplos de tres" );
      IO_println ( " 5 - Mostrar fracoes que tem como denominador multiplos" );
      IO_println ( " 6 - Mostrar a suma de todos os numeros impares nao divisiveis por 5" );
      IO_println ( " 7 - Mostrar a soma das fracoes que tem como denominador impares nao divisiveis por 5" );
      IO_println ( " 8 - Mostrar a soma dos numeros naturais de um em diante" );
      IO_println ( " 9 - Mostrar a soma do quadrado dos numeros naturais nao nulos" );
      IO_println ( "10 - Mostrar a soma do inverso multiplicativo dos numeros naturais nao nulos" );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );
   
   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method01 ( );
            break;
         case 2:
            method02 ( );
            break;
         case 3:
            method03 ( );
            break;
         case 4:
            method04 ( );
            break;
         case 5:
            method05 ( );
            break;
         case 6:
            method06 ( );
            break;
         case 7:
            method07 ( );
            break;
         case 8:
            method08 ( );
            break;
         case 9:
            method09 ( );
            break;
         case 10:
            method10 ( );
            break;
         default:
            IO_println ( "ERRO: Valor invalido." );
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   IO_pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )

/*
---------------------------------------------- documentacao complementar
Versao  Resultado  Teste     Observar as saidas
0.1       (OK)      01.      * O programa nos mostra uma contagem, que progride de 1 ate' 5.
0.2       (OK)      01.      * O programa nos mostra cinco valores pares.
0.3       (OK)      01.      * O programa nos mostra cinco valores pares, tendo como diferenca do exemplo anterior a utilizacao de multiplicacao e nao soma. 
0.4       (OK)      01.      * O programa nos mostra cinco valores pares em contagem regressiva.
0.5       (OK)      01.      * O programa nos mostra cinco valores pares em contagem regressiva, utilizando for como repetidor.
0.6       (OK)      01.      * Mostra o resultado da soma entre os quatro primeiros pares e o numero um.
0.7       (OK)      01.      * Mostra a soma de fracoes que tem como denominador os quatro primeiros numeros pares.
0.8       (OK)      01.      * Mostra a soma de fracoes que tem como numerador os quatro primeiros impares e denominador os quatro primeiros pares, ele tambem soma o numero um referente a fracao 1/1.
0.9       (OK)      01.      * Mostra a soma de fracoes que tem como numerador os quatro primeiros impares e denominador os quatro primeiros pares, ele tambem soma o numero um referente a fracao 1/1.
1.0       (OK)      01.      * Mortrar o produto da multiplicacao dos tres primeiros impares.

Exercicios
1.1       (OK)      01.      * Mostra os multiplos de tres em ordem crescente.
1.2       (OK)      01.      * Mostra os multiplos de tres impares.
1.3       (OK)      01.      * Mostra os multiplos de tres pares.
1.4       (OK)      01.      * Mostra os denominadores multiplos de tres. 
1.5       (OK)      01.      * Mostra os uma potencia de expoente negativo.
1.6       (OK)      01.      * Mostra a soma dos valores impares nao divisiveis por cinco.
1.7       (OK)      01.      * Mostra a soma das fracoes que tem como denominador impares nao divisiveis por 5
1.8       (OK)      01.      * Mostra a soma dos naturais de um em diante.
1.9       (OK)      01.      * Mostra a soma do quadrado dos numeros naturais nao nulos.
2.0       (OK)      01.      * Mostra a soma do inverso multiplicativo dos numeros naturais nao nulos.

------------------------------------------------------------------ notas / observacoes / comentarios
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

---------------------------------------------- previsao de testes------------------|------------------|
Exemplos                                                                           |Validacao de teste| 
*Exemplo0501                                                                       |------------------|
a.) 5 -> { 1, 2, 3, 4, 5 }---------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0502                                                                       |
a.) 5 -> { 2, 4, 6, 8, 10 }--------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0503                                                                       |
a.) 5 -> { 2, 4, 6, 8, 10 }--------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0504                                                                       |
a.) 5 -> { 10, 8, 6, 4, 2 }--------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0505                                                                       |
a.) 5 -> { 10, 8, 6, 4, 2 }--------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0506                                                                       |
a.) 5 -> { 8, 6, 4, 2, soma de pares = 21 }----------------------------------------->(OK)
                                                                                   |
*Exemplo0507                                                                       |
a.) 5 -> { 1/8, 1/6, 1/4, 1/2, soma de fracoes = 2.041667 }------------------------->(OK)
                                                                                   |
*Exemplo0508                                                                       |
a.) 5 -> { 1/1, 1/2, 3/4, 5/6, 7/8, Soma de fracoes = 3.958333 }-------------------->(OK)
                                                                                   |
*Exemplo0509                                                                       |
a.) 5 -> { 1/1, 3/2, 5/4, 7/6, 9/8, soma de fracoes = 6.041667 }-------------------->(OK)
                                                                                   |
*Exemplo0510                                                                       |
a.) 5 -> { 1, 3, 5, 7, 9, produto = 6.041667 }-------------------------------------->(OK)
                                                                                   |
-----------------------------------------------------------------------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                         |
                                                                                   |
*Exemplo0511                                                                       |
a.) 5 -> { 3, 6, 9, 12, 15 }-------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0512                                                                       |
a.) 5 -> { 3, 9, 15, 21, 27 }------------------------------------------------------->(OK)
                                                                                   |
*Exemplo0513                                                                       |
a.) 5 -> { 6, 12, 18, 24, 30 }------------------------------------------------------>(OK)
                                                                                   |
*Exemplo0514                                                                       |
a.) 5 -> { 1/3, 1/6, 1/9, 1/12, 1/15 }---------------------------------------------->(OK)
                                                                                   |
*Exemplo0515                                                                       |
a.) 5 -> { 1/1, 1/2, 1/4, 1/8, 1/16 }----------------------------------------------->(OK)
                                                                                   |
*Exemplo0516                                                                       |
a.) 5 -> { 3, 7, 9, 11, 13, Soma = 43 }--------------------------------------------->(OK)
a.) 13 -> { 3, 7, 9, 11, 13, 17, 19, 21, 23, 27, 29, 31, 33, Soma = 243 }----------->(OK)                                                                                                                                                                                                                                                                                                                                                                                                                |
                                                                                   |
*Exemplo0517                                                                       |
a.) 5  -> { 1/3, 1/7, 1/9, 1/11, 1/13, Soma = 0.755134 }---------------------------->(OK)
a.) 8  -> { 1/3, 1/7, 1/9, 1/11, 1/13, 1/17, 1/19, 1/21, Soma = 0.914208 }---------->(OK)        
                                                                                   |
*Exemplo0518                                                                       |
a.) 5  -> { 1, 2, 3, 4, 5, Soma = 15 }---------------------------------------------->(OK)
a.) 8  -> { 1, 2, 3, 4, 5, 6, 7, 8, Soma = 36 }------------------------------------->(OK)        
                                                                                   |
*Exemplo0519                                                                       |
a.) 5  -> { 1, 4, 9, 16, 25, Soma = 55 }-------------------------------------------->(OK)
a.) 8  -> { 1, 4, 9, 16, 25, 36, 49, 64, Soma = 204 }------------------------------->(OK)        
                                                                                   |
*Exemplo0520                                                                       |
a.) 5  -> { 1/1, 1/2, 1/3, 1/4, 1/5, Soma = 2.283333 }------------------------------>(OK)
a.) 8  -> { 1/1, 1/2, 1/3, 1/4, 1/5, 1/6, 1/7, 1/8, Soma = 2.717857 }--------------->(OK)        
                                                                                   |                                                                                                                                                                                                                                                                                                                                 
___________________________________________________________________________________|      
                                                                             
---------------------------------------------- historico
Versao Data Modificacao
 0.1    /   esboco
---------------------------------------------- testes

Versao   Teste  Identificacao de programa
 0.1 01. ( OK ) . Contar de 1 até 5.
 0.2 01. ( OK ) . Contar e mostrar os cinco primeiros pares.
 0.3 01. ( OK ) . Contar e mostrar os cinco primeiros pares.
 0.4 01. ( OK ) . Contar e mostrar, de forma regressiva. 
 0.5 01. ( OK ) . Contar e mostrar, de forma regressiva.
 0.6 01. ( OK ) . Somar, Contar e mostrar, de forma regressiva.
 0.7 01. ( OK ) . Somar fracoes.
 0.8 01. ( OK ) . Somar fracoes.
 0.9 01. ( OK ) . Somar fracoes.
 1.0 01. ( OK ) . Multiplicar. 

Exercicios
 1.1 01. ( OK ) . Mostrar os multiplos de tres.
 1.2 01. ( OK ) . Mostrar os multiplos de tres. 
 1.3 01. ( OK ) . Mostrar os multiplos de tres.
 1.4 01. ( OK ) . Mostrar denominadores multiplos de tres.
 1.5 01. ( OK ) . Mostrar potencias com expoente negativo.
 1.6 01. ( OK ) . Mostrar a soma dos valores impares nao divisiveis por 5.
 1.7 01. ( OK ) . Somar as fracoes que tem como denominador impares nao divisiveis por 5.
 1.8 01. ( OK ) . Somar numeros naturais de um para cima.
 1.9 01. ( OK ) . Somar o quadrado dos numeros naturais nao nulos. 
 2.0 01. ( OK ) . Somar o inverso multiplicativo dos numeros naturais nao nulos.

*/