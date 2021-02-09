/*
 Exemplo0619 - v0.0. - 19 / 04 / 2020
 Author: Ricardo Portilho de Andrade 
*/
// dependencias
#include "io.h" // para definicoes proprias

//----------------------------------------------------------------------------------------------------------------

/**
 Method00 - nao faz nada.
*/
void method00 ( )
{
  // nao faz nada
} // fim method00 ( )
//____________________________________________________________________________________________________________________

/**
 Method01a - Mostrar certa quantidade de valores impares apartir do numero 5.
 @param x - quantidade de valores a serem mostrados
*/
void method01a ( int x )
{
   // repetir enquanto valor maior ou igual a zero
   if ( x > 0 )
   {     
   // passar ao proximo
      method01a ( x - 1 ); // motor da recursividade  
   // mostrar valor
      IO_printf ( "%d: %d\n", x, (2 * x) + 3  );      
   } // fim se
} // fim method01a( )

/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dado
   int y = 1;  //controle
// identificar
   IO_id ( "EXEMPLO0620 - Method01 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado 
   
    //Mandar o valor para o metodo auxiliar 
   method01a ( y ); // motor da recursividade
    // encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )
//____________________________________________________________________________________________________________________

/**
 Method02a - Mostrar certa quantidade de multiplos de tres.
 @param x - quantidade de valores a serem mostrados
*/
void method02a ( int x )
{
   // repetir enquanto valor maior ou igual a zero
   if ( x > 0 )
   {     
   // mostrar valor
      IO_printf ( "%d: %d\n", x, (3 * x));      
   // passar ao proximo
      method02a ( x - 1 ); // motor da recursividade  
   } // fim se
} // fim method02a( )

/**
 Method02.
*/
void method02 ( )
{
// definir dado
   int y = 1;  //controle
// identificar
   IO_id ( "EXEMPLO0620 - Method02 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado 
   
// metodo auxiliar
   method02a ( y );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
//____________________________________________________________________________________________________________________

/**
 Method03a - Mostrar o numero um e certa quantidade de multiplos de cinco.
 @param x - quantidade de valores a serem mostrados
*/
void method03a ( int x )
{
   // repetir enquanto valor maior ou igual a zero
   if ( x > 0 )
   {     
   // mostrar valor
      IO_printf ( "%d: %d\n", x + 1, (5 * x));      
   // passar ao proximo
      method03a ( x - 1 ); // motor da recursividade     
   } // fim se
   //mostrar o numero um da sequencia predefinida 
   else 
   {
      IO_printf("%d: %d", x + 1, 1);
   }
} // fim method03a( )

/**
 Method03.
*/
void method03 ( )
{
// definir dado
   int y = 1;  //controle
// identificar
   IO_id ( "EXEMPLO0620 - Method03 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado

// configurar valor para adequar o contador 
   y = y - 1;    
// metodo auxiliar
   method03a ( y );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
//____________________________________________________________________________________________________________________

/**
 Method04a - Mostrar fracoes adiquiridas por meio da potenciacao de tres por numeros negativos.
 @param x - quantidade de valores a serem mostrados
*/
void method04a ( int x )
{
   // repetir enquanto valor maior ou igual a zero
   if ( x > 0 )
   {       
   // mostrar valor
      IO_printf ( "%d: [ %d / %0.0lf ]\n", x + 1, 1, pow(3, x));         
   // passar ao proximo
      method04a ( x - 1 ); // motor da recursividade
   } // fim se
   //mostrar o numero um da sequencia predefinida 
   else 
   {
      IO_printf("%d: [ %d ]\n", x + 1, 1);
   }
} // fim method04a( )

/**
 Method04.
*/
void method04 ( )
{
// definir dado
   int y = 1;  //controle
// identificar
   IO_id ( "EXEMPLO0620 - Method04 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado
// configurar valor para adequar o contador 
   y = y - 1;    
// metodo auxiliar
   method04a ( y );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )
//____________________________________________________________________________________________________________________
/**
 Method05a - Mostrar caracteres de uma cadeia de caracteres separadamente.
 @param palavra - sequncia de caracteres. 
 @param x - quantidade de valores a serem mostrados / posicao.
 @param g - mostrar o caractere da palavra.
*/
void method05a ( chars palavra, int x, char g )
{
   // definir dado
   int resposta = 0;
   // testar se contador valido
   if ( 0 <= x && x < strlen ( palavra ) )
   {
      g = palavra [x];
      IO_printf("posicao: [%d] letra: [%c]\n", x, g);
      method05a ( palavra, x + 1, 'a' );
   } // fim se

/* //[mostrar barra zero]   
     else
   {
      g = palavra [x];
      IO_printf("\n EXTRA: Posicao: [%d] Letra: [%c] <== esse e' o barra zero.\n", x, g);
   } // fim se
*/

// retornar resposta
} // fim method05a( )


/**
 Method05.
*/
void method05 ( )
{
// definir dado
   chars y = IO_new_chars ( STR_SIZE );
// identificar
   IO_id ( "EXEMPLO0620 - Method05 - v0.0" );
// ler do teclado
   y = IO_readstring ( "Entrar com uma palavra: " );   
// metodo auxiliar
   method05a ( y, 0, 'a' );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )
//____________________________________________________________________________________________________________________
/**
 Method06a - Mostrar os impares apos o 3.
 @param x - valor mostrado
 @param y - controle
 @param w - quantidade   
*/
void method06a ( int w, int y, int x )
{
   // repetir enquanto valor maior ou igual a zero
   if ( y >= w )
   {     
   // mostrar valor
      IO_printf ( "%d: %d\n", w, x);      
   // passar ao proximo
      method06a ( w + 1, y, x + 2 ); // motor da recursividade  
   } // fim se
} // fim method02a( )

/**
 Method06.
*/
void method06 ( )
{
// definir dado
   int y = 1;  //controle
   int x = 3;  //valor inicial
   int w = 1;  //quantidade
// identificar
   IO_id ( "EXEMPLO0620 - Method06 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado 
   
// metodo auxiliar
   method06a ( w, y, x );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
//____________________________________________________________________________________________________________________
/**
 Method07a - Mostrar os impares apos o 3.
 @param x - valor mostrado
 @param y - controle
 @param w - quantidade   
*/
double method07a ( int y, double x, int w )
{ 
 // soma com valor inicial 
    double soma = 0;
    x = (1/x); 
 // repetir enquanto valor maior ou igual a zero
   if ( y > w )
   {     
    // mostrar valor
      IO_printf ( "%d: 1/%0.0lf\n", w + 1, pow(x, -1)); 
      IO_printf ( "%lf\n", x);      
    // somar
      soma = x + method07a ( y, (pow ( x, -1 ))+ 2, w + 1);
   } // fim se  
  return ( soma ); // retornar para somar 
} // fim method02a( )

/**
 Method07.
*/
void method07 ( )
{
// definir dado
   int y = 1;  //controle
   int quantidade = 0;
   double x = 3.0;  //valor inicial
   double resposta = 0; //soma 
// identificar
   IO_id ( "EXEMPLO0620 - Method07 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado 
// metodo auxiliar
   quantidade = y;
   resposta = method07a ( y, x, 0 );  
// mostrar a soma 
   IO_printf ("%s%lf","Soma = ", resposta);    
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )
//____________________________________________________________________________________________________________________

/**
 Method08a - Gerador de numero de Fibonacci.
 @return numero de Fibonacci
 @param x - numero de ordem cujo valor sera' calculado
*/
int Method08a ( int x )
{
// definir dado
   int resposta = 0;
// testar se contador valido
   if ( x == 1 || x == 2 )
   {
   // primeiros dois valores iguais a 1
      resposta = 1; // bases
   }
   else
   {
      if ( x > 1 )
      {
      // fazer de novo com valor absoluto
         resposta = Method08a ( x-1 ) + Method08a ( x-2 );
      } // fim se
   } // fim se
 return (resposta);  
} // fim  Method08a ( )

/*
 Method08aPai - controlador do gerador de numero de Fibonacci.
 @return soma dos pares adquiridos
 @param x - quantidade de pares que foram pedodos 
 @param controle - "reduzir" uma repeticao do programa
 @param posicao - percorre os valores de Fibonacci.
*/

int Method08aRei ( int x, int controle, int posicao )
{
 int par = 0; // ajuda na verificacao do valor
 int soma = 0; // soma dos pares
 do
 {
  posicao = posicao + 1;
  par = Method08a ( posicao - 1 );
  if ( par % 2 == 0 || par == 1 )
  {
   IO_printf("Valor = %d\n", par);
   controle = controle + 1;
   soma = soma + par;
  } 
 }while ( x > controle );
 IO_printf("Soma = %d", soma);
}

/**
 Method08.
*/
void method08 ( )
{
// definir dado
   int y = 1;  //controle
// identificar
   IO_id ( "EXEMPLO0620 - Method08 - v0.0" );

// fazer um teste    
   do 
   {
    //Dizer se a quantidade esta atendendo aos parametros 
      if ( y <= 0 )
      {
         IO_printf("\n Erro: Atencao a quantidade nao pode ser menor ou igual a zero.\n\n");
      }
    //Pedir um valor ao usuario
      IO_printf ("Coloque o valor referente a quantidade de pares: ");
    //Valor colocado pelo usuario
      IO_scanf("%d", &y);
   } while ( y <= 0 ); //Testar o valor colocado 
// metodo auxiliar
   Method08aRei ( y, 0, 1 );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )
//____________________________________________________________________________________________________________________
/**
 Method09a - Mostrar algarismos pares de uma cadeia de caracteres separadamente.
 @param palavra - sequncia de caracteres. 
 @param x - quantidade de valores a serem mostrados / posicao.
 @param g - mostrar o caractere da palavra.
 @param contador - conta os numeros mostrados.
*/
void method09a ( chars palavra, int x, char g, int contador )
{
   // definir dado
   int resposta = 0;
   // testar se contador valido
   if ( 0 <= x && x < strlen ( palavra ) )
   {
      g = palavra [x];
      if ( g >= '0' && g <= '9' && g % 2 == 0 )
      {
       contador = contador + 1;
       IO_printf("%d: Algarismo: [%c]\n", contador, g);
      }
      method09a ( palavra, x + 1, 'a', contador );
   } // fim se  
}


/**
 Method09.
*/
void method09 ( )
{
// definir dado
   chars y = IO_new_chars ( STR_SIZE );
// identificar
   IO_id ( "EXEMPLO0620 - Method09 - v0.0" );
// ler do teclado
   y = IO_readstring ( "Entrar com uma palavra: " );   
// metodo auxiliar
   method09a ( y, 0, 'a', 0 );      
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
//_______________________________________________________________________________________________________________________________________________
/**
 Method10a - Mostrar algarismos pares de uma cadeia de caracteres separadamente.
 @param palavra - sequncia de caracteres. 
 @param x - quantidade de valores a serem mostrados / posicao.
 @param g - mostrar o caractere da palavra.
 @param contador - conta os numeros mostrados.
*/
int method10a ( chars palavra, int x, char g, int contador )
{
   // definir dado
   int resposta = 0;
   // testar se contador valido
   if ( 0 <= x && x < strlen ( palavra ) )
   {
      g = palavra [x];
      if ( g >= 'A' && g <= 'Z' )
      {
       contador = contador + 1;
       IO_printf("Mauiscula: [%c]\n", g);
      }
      method10a ( palavra, x + 1, 'a', contador);
   } // fim se 
   if (x == strlen (palavra))
   {
    IO_printf("Quantidade total de maiusculas: %d", contador);
   } 
}

/**
 Method10.
*/
void method10 ( )
{
// definir dado
   chars y = IO_new_chars ( STR_SIZE );
   int g = 0;
// identificar
   IO_id ( "EXEMPLO0620 - Method10 - v0.0" );
// ler do teclado
   y = IO_readstring ( "Entrar com uma palavra: " );   
// metodo auxiliar
   method10a ( y, 0, 'a', 0 );    
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )
//_____________________________________________________________________________________________________________________________________________________________________

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
      IO_id ( "EXEMPLO0619 - Programa - v0.0" );
   
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Mostrar os numeros impares do cinco em diante." );
      IO_println ( " 2 - Mostrar todos o multiplos de tres apartir do tres." );
      IO_println ( " 3 - Mostrar o numero um e certa quantidade de multiplos de cinco." );
      IO_println ( " 4 - Mostrar os numeros adquiridos atraves da elevacao do tres por numeros negativos e nulo." );
      IO_println ( " 5 - Mostrar as letras de um sequencia de caractere e sua posicao." );
      IO_println ( " 6 - Mostrar impares do numero tres em diante." );
      IO_println ( " 7 - Mostrar fracoes que contem numeros impares do tres em diante como denominador." );
      IO_println ( " 8 - Mostrar uma certa quantidade de numeros pares, da sequencia Fibonacci, e os soma." );
      IO_println ( " 9 - Mostrar os algarismos pares presentes em uma sequencia de caracteres." );
      IO_println ( "10 - Mostrar as Letras Maiusculas de uma cadeia de caracteres e sua quantidade total." );
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
0.1       (OK)      01.      * Mostra uma contagem regressiva do numero 5 ate o 1.
0.2       (OK)      01.      * Mostra uma contagem progressiva do numero 1 ate o 5.
0.3       (OK)      01.      * Mostra uma contagem prograssiva do numero 1 ate o 5, sem modificacao na saida mas com contem modificacao no codigo, pois ha' uma presenca de else. 
0.4       (OK)      01.      * Mostra o numero um e depois todos os pares ate o numero 8.
0.5       (OK)      01.      * Mostra fracoes de denominador impar e numerador par.
0.6       (OK)      01.      * Utilizando o mesmo mecanismo de contagem do exemplo anterior, o programa alem de mostrar as fracoes e depois ele as soma.  
0.7       (OK)      01.      * Utilizando um mecanismo parecido com o anterior o programa mostra fracoes com denominador par e o numerador impar e depois soma elas.
0.8       (OK)      01.      * Mostra a quantidade de digitos que o numero contem.
0.9       (OK)      01.      * Mostra os cinco primeiros digitos de fibonacci.
1.0       (OK)      01.      * Mostra a quantidade de letras minusculas de uma palavra.

Exercicios
1.1       (OK)      01.      * Mostra os numeros impares do cinco em diante.
1.2       (OK)      01.      * Mostra todos os multiplos de tres apartir do tres.
1.3       (OK)      01.      * Mostra o numero um e certa quantidade de multiplos de cinco.
1.4       (OK)      01.      * Mostra os numeros adquiridos atraves da elevacao do tres por numeros negativos e nulo.
1.5       (OK)      01.      * Mostra as letras de um sequencia de caractere e sua posicao.
1.6       (OK)      01.      * Mostra os impares apos o numero tres.
1.7       (OK)      01.      * Mostra fracoes que tem como denominador numeros impares do tres em diante. 
1.8       (OK)      01.      * Mostra valores pares da sequencia de Fibonacci e os soma.
1.9       (OK)      01.      * Mostra os algarismos pares presentes em uma sequncia de caracteres.
2.0       (OK)      01.      * Mostra as Letras maiusculas e sua quantidade total.

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

---------------------------------------------- previsao de testes-------------------------------------------------------------|------------------|
Exemplos                                                                                                                      |Validacao de teste| 
*Exemplo0601                                                                                                                  |------------------|
a.) { 5, 4, 3, 2, 1 }----------------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0602                                                                                                                  |
a.) { 1, 2, 3, 4, 5 }----------------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0603                                                                                                                  |
a.) { 1, 2, 3, 4, 5 }----------------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0604                                                                                                                  |
a.) { 1, 2, 4, 6, 8 }----------------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0605                                                                                                                  |
a.) { 1, 2/3, 4/5, 6/7, 8/9 }--------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0606                                                                                                                  |
a.) { 1.0, 2.0/3.0, 4.0/5.0, 6.0/7.0, 8.0/9.0 soma = 4.212698}------------------------------------------------------------>(OK)
                                                                                                                              |
*Exemplo0607                                                                                                                  |
a.) { 1.0, 3.0/2.0, 5.0/4.0, 7.0/6.0, 9.0/8.0, soma de fracoes = 6.041667}------------------------------------------------>(OK)
                                                                                                                              |
*Exemplo0608                                                                                                                  |
a.) { digitos (123) = 3, digitos (  1) = 1, digitos (-10) = 2}------------------------------------------------------------>(OK)
                                                                                                                              |
*Exemplo0609                                                                                                                  |
a.) { fibonacci (1) = 1, fibonacci (2) = 1, fibonacci (3) = 2, fibonacci (4) = 3, fibonacci (5) = 5}---------------------->(OK)
                                                                                                                              |
*Exemplo0610                                                                                                                  |
a.) { Minusculas ("abc",0) = 3, Minusculas ("aBc",0) = 2, Minusculas ("AbC",0) = 1}--------------------------------------->(OK)
                                                                                                                              |
------------------------------------------------------------------------------------------------------------------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                                                                    |
                                                                                                                              |
*Exemplo0611                                                                                                                  |
a.) 5 -> { 5, 7, 9, 11, 13 }---------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0612                                                                                                                  |
a.) 5 -> { 5, 7, 9, 11, 13 }---------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0613                                                                                                                  |
a.) 5 -> { 1, 5, 10, 15, 20 }--------------------------------------------------------------------------------------------->(OK)
                                                                                                                              |
*Exemplo0614                                                                                                                  |
a.) 5 -> { 1 / 81, 1 / 27, 1 / 9, 1 / 3, 1 }------------------------------------------------------------------------------>(OK)                                                                                                                                                                                                                                                                                                                                                 
                                                                                                                              |
*Exemplo0615                                                                                                                  |
a.) ka5d -> { Posicao: [0] Letra: [k], Posicao: [1] Letra: [a], Posicao: [2] Letra: [5], Posicao: [3] Letra: [d] }-------->(OK)                                                                                                                                                                                                                                                                                                                                                 
                                                                                                                              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
*Exemplo0616                                                                                                                  |
a.) 5 -> { 3, 5, 7, 9, 11 }----------------------------------------------------------------------------------------------->(OK)                                                                                                                                                                                                                                                                                                                                                 
b.) 20 -> { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41 }---------------------------------->(OK)                                                                                                                                                                                                                                                             
                                                                                                                              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
*Exemplo0617                                                                                                                  |
a.) 5 -> { 1/3, 1/5, 1/7, 1/9, 1/11 Soma = 0.872211}---------------------------------------------------------------------->(OK)                                                                                                                                                                                                                                                                                                                                                 
b.) 20 -> { 1/3, 1/5, 1/7, 1/9, 1/11, 1/13, 1/15, 1/17, 1/19, 1/21, 1/23, 1/25, 1/27, 1/29, 1/31, 1/33, Soma = 1.398434}-->(OK)                                                                                                                                                                                                                                                            
                                                                                                                              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
*Exemplo0618                                                                                                                  |
a.) 5 -> { 1, 1, 2, 8, 34, Soma = 46}------------------------------------------------------------------------------------->(OK)                                                                                                                                                                                                                                                                                                                                                 
b.) 10 -> { 1, 1, 2, 8, 34, 144, 610, 2584, 10946, 46368, Soma = 60698 }-------------------------------------------------->(OK)                                                                                                                                                                                                                                                            
                                                                                                                              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
*Exemplo0619                                                                                                                  |
a.) Dfg5er4 -> { D, Quantidade total de mauisculas: 1 }------------------------------------------------------------------->(OK)                                                                                                                                                                                                                                                                                                                                                 
b.) DFGert378wefEF -> { D, F, G, E, F, Quantidade total de maiusculas: 5 }------------------------------------------------>(OK)                                                                                                                                                                                                                                                            
                                                                                                                              |                                                                                                                              |
                                                                                                                              |                                                                                                                              |
______________________________________________________________________________________________________________________________|                                                                                      
---------------------------------------------- historico
Versao Data Modificacao
 0.1    /   esboco
---------------------------------------------- testes
Versao   Teste  Identificacao de programa
 0.1 01. ( OK ) . Contagem regressiva.
 0.2 01. ( OK ) . Contagem progressiva.
 0.3 01. ( OK ) . Contagem progressiva.
 0.4 01. ( OK ) . Mostra fracoes com denominador impar e numerador par. 
 0.5 01. ( OK ) . Mostra fracoes com denominador impar e numerador par e a soma das mesmas.
 0.6 01. ( OK ) . Mostra fracoes com denominador par e numerador impar e a soma das mesmas.
 0.7 01. ( OK ) . Mostra fracoes com denominador par e o numerador impar e depois soma elas.
 0.8 01. ( OK ) . Mostra a quantidade de digito que um numero contem.
 0.9 01. ( OK ) . Mostra os cinco primeiros digitos de fibonacci.
 1.0 01. ( OK ) . Mostra a quantidade de letrs minusculas de uma palavra.

Exercicios
 1.1 01. ( OK ) . Mostra os numeros impares do cinco em diante.
 1.2 01. ( OK ) . Mostra multiplos de tres.
 1.3 01. ( OK ) . Mostra o numero um e certa quantidade de multiplos de cinco.
 1.4 01. ( OK ) . Mostra os numeros adquiridos atraves da elevacao do tres por numeros negativos e nulo.
 1.5 01. ( OK ) . Mostra as letras de um sequencia de caractere e sua posicao.
 1.6 01. ( OK ) . Mostra os impares apos o numero tres.
 1.7 01. ( OK ) . Mostra fracoes que tem como denominador numeros impares.
 1.8 01. ( OK ) . Mostra valores pares da sequencia de Fibonacci e os soma.
 1.9 01. ( OK ) . Mostra os algarismos pares presentes na cadeia de caracteres.
 2.0 01. ( OK ) . Mostra as letras maiusculas e a quantidade total das mesmas.

*/