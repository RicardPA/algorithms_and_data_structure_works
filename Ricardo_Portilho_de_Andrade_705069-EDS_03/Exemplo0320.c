/*    
Exemplo0320 - v0.0. - 30 / 03 / 2020    
Author: Ricardo Portilho de Andrade */ 
// dependencias 
#include "io.h"  // para definicoes proprias 
#include <stdio.h>

void Metodo00()
{

}

/*
Exemplo 11
*/
      
void Exemplo11()
{
   int x = 0;
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   char w;
  
  //indentificacao
   IO_id ( "EXEMPLO0311 - v0.0" );
   
 //ler palavra  
   IO_printf ( "Entrar com uma palavra: " );     
   scanf  ( "%s", palavra ); 

 // repetir para cada letra    
   tamanho = strlen ( palavra );
    
   //Teste usado para saber somente sobre as letras maiusculas 
   for( x  = 0; x < tamanho; x = x + 1 )
   {
      //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
      //mostrar as letras maiusculas 
      if('A' <= w && w <= 'Z' )
      {
         printf("(%c)", w);
      }  
   }
   printf(" sao letras maiusculas.\n\n");
   IO_pause ("Apertar ENTER para continuar");
}

/*
Exemplo 12
*/

void Exemplo12()
{ 
 //difinicao de dados 
   int x = 0;
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   int y = 0;
   char w;

 //indentificacao
   IO_id ( "EXEMPLO0312 - v0.0" );
   
 //ler palavra  
   IO_printf ( "Entrar com uma palavra: " );     
   scanf  ( "%s", palavra ); 

 // repetir para cada letra    
   tamanho = strlen ( palavra );

//Teste usado para saber somente sobre as letras maiusculas 
   for( x  = 0; x < tamanho; x = x + 1 )   
   {
      //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
      //mostrar as letras maiusculas 
      if('A' <= w && w <= 'Z' )
      {
         y = 1 + y;
         printf("\n(%c) : (%i)\n", w, y);
      }  
   }
   IO_pause ("Apertar ENTER para continuar"); 
}
 
/*
Exemplo 13
*/
 
void Exemplo13() 
{ 
 //difinicao de dados 
   int x = 0;
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   int y = 0;
   char w;

 //indentificacao
   IO_id ( "EXEMPLO0313 - v0.0" );
   
 //ler palavra  
   IO_printf ( "Entrar com uma palavra: " );     
   scanf  ( "%s", palavra ); 

 // repetir para cada letra    
   tamanho = strlen ( palavra );
/*
 //Apagar a caixa de comentario para utilizar a contagem regressiva.
  for( x  = tamanho; x >= 0; x = x - 1 )   
   {
      //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
      //contar a quntidade de letras maiusculas 
     if('A' <= w && w <= 'Z' )
      {
         y = 1 + y;
      }
   }
  */
   
//Teste usado para saber somente sobre as letras maiusculas 
   for( x  = tamanho; x >= 0; x = x - 1 )   
   {
      //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
      //mostrar as letras maiusculas 
      if('A' <= w && w <= 'Z' )
      {
         y = 1 + y; //apagar isso pera a contagem regressiva
         printf("\n(%c) : (%i)\n", w, y);
      
      //         y = y - 1; //caso voce queira uma contagem regressiva  
      }  
   }
   IO_pause ("Apertar ENTER para continuar");
} 

/*
Exemplo 14
*/

void Exemplo14()
{ 
 //difinicao de dados 
   int x = 0;
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   int y = 0;// Letras maiusculas 
   int z = 0;// Letras minusculas  
   char w;

 //indentificacao
   IO_id ( "EXEMPLO0314 - v0.0" );
   
 //ler palavra  
   IO_printf ( "Entrar com uma palavra: " );     
   scanf  ( "%s", palavra ); 

 // repetir para cada letra    
   tamanho = strlen ( palavra );
 
   //Teste para saber os tipos de caracteres 
   
   for( x  = 0; x < tamanho; x = x + 1 )   
   {
   //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
     
     //dizer se a letra e' maiuscula 
      if('A' <= w && w <= 'Z' )
      {
         y = 1 + y;
         printf("(%c) E' uma letra maiuscula. (%i)\n", w, y);
      }         
      
      //dizer se e' minuscula 
      else if('a' <= w && w <= 'z' )
      {
         z = 1 + z;
         printf("(%c) E' uma letra minuscula. (%i)\n", w, z);
      } 
       
   }  
   int h = z + y;
   printf("(%i) E' a guantidade total de letras maiusculas.\n", y);
   printf("(%i) E' a guantidade total de letras minusculas.\n", z);
   printf("(%i) E' a guantidade total de letras.\n", h);  
   
   IO_pause ("Apertar ENTER para continuar");
} 

/*
Exemplo 15
*/

void Exemplo15() 
{ 
 //difinicao de dados 
   int x = 0;
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   int y = 0;// Letras maiusculas 
   int z = 0;// Letras minusculas  
   char w;

 //indentificacao
   IO_id ( "EXEMPLO0315 - v0.0" );
   
 //ler palavra  
   IO_printf ( "Entrar com uma palavra: " );     
   scanf  ( "%s", palavra ); 

 // repetir para cada letra    
   tamanho = strlen ( palavra );
 
   //Teste para saber os tipos de caracteres 
   
   for( x  = tamanho; x >= 0; x = x - 1 )   
   {
     //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
     //dizer se e' minuscula 
      
      if('0'<= w && w <= '9')
      {
         y = 1 + y;
         printf("(%c): contagem => (%i). \n", w, y);
      } 
   }     
   IO_pause ("Apertar ENTER para continuar");     
}

/*
Exemplo 16
*/
 
void Exemplo16( ) 
{ 
 //difinicao de dados 
   int x = 0;
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   int y = 0;// Letras maiusculas 
   int z = 0;// Letras minusculas  
   char w;

 //indentificacao
   IO_id ( "EXEMPLO0316 - v0.0" );
   
 //ler palavra  
   IO_printf ( "Entrar com uma palavra: " );     
   scanf  ( "%s", palavra ); 

 // repetir para cada letra    
   tamanho = strlen ( palavra );
 
   //Teste para saber os tipos de caracteres 
   
   for( x  = tamanho - 1; x >= 0; x = x - 1 ) // Coloquei um menos um para o programa nao ler o /0 no final da linha 
   {
     //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (palavra [x]);
      
     //dizer se e' minuscula 
      
      if((!('0'<= w && w <= '9') && !('A' <= w && w <= 'Z' ) && !('a' <= w && w <= 'z' )))
      {
         y = 1 + y;
         printf("(%c): contagem => (%i). \n", w, y);
      } 
   }  
   
   IO_pause ("Apertar ENTER para continuar");
}

/*
Exemplo 17
*/

void Exemplo17( ) 
{ 
 //difinicao de dados 
   int x = 0; // limite inferior 
   int y = 0; // limite superior 
   int z = 1; // repeticoes
   int w = 0; // numero
   int c = 0; // contador 

 //indentificacao
   IO_id ( "EXEMPLO0317 - v0.0" );
   
   do
   {
   //ler variaveis 
      if (x > y)
      {
         IO_printf ( "\n ERRO: O LIMITE INFERIOR DEVE SER MENOR QUE O SUPERIOR\n" );
      }
      if (z == 0)
      {
         IO_printf ( "\n ERRO: QUANTIDADE DE TESTES NAO PODE SER IGUAL A ZERO\n" );
      }
      IO_printf ( "Entrar com o limite inferior: " );     
      scanf  ( "%i", &x ); 
      IO_printf ( "Entrar com o limite superior: " );     
      scanf  ( "%i", &y );
      IO_printf ( "Entrar com a quantidade de teste que voce quer: " );     
      scanf  ( "%i", &z );
   } while((z == 0)||(x >= y)); 

   
   do
   {  
      z = z - 1;
   
      IO_printf ( "Entrar com um numero: " );     
      scanf  ( "%i", &w );     
       
      if ((x <= w) && (w <= y) && ( w % 3 == 0))
      {
         c = c + 1;
         IO_printf ( "(%d) e' multiplo de 3 [%d]\n", w, c );
      }
      
      else if ((x <= w) && (w<= y) && ( w % 3 != 0))
      {
         IO_printf ( "(%d) nao e' multiplo de 3\n", w );
      }
      
      else
      {
         IO_printf ( "(%d) nao esta' no intervalo [%d:%d]\n", w, x, y );
      }
   }while (z != 0);
   IO_printf ( "Voce colocou [%d] valores que sao mutiplos de 3\n", c );
   
   IO_pause ("Apertar ENTER para continuar");
}

/*
Exemplo 18
*/

void Exemplo18( ) 
{ 
 //difinicao de dados 
   int x = 0; // limite inferior 
   int y = 0; // limite superior 
   int z = 1; // repeticoes
   int w = 0; // numero
   int c = 0; // contador 

 //indentificacao
   IO_id ( "EXEMPLO0318 - v0.0" );
   
   do
   {
   //ler variaveis 
      if (x > y)
      {
         IO_printf ( "\n ERRO: O LIMITE INFERIOR DEVE SER MENOR QUE O SUPERIOR\n" );
      }
      if (z == 0)
      {
         IO_printf ( "\n ERRO: QUANTIDADE DE TESTES NAO PODE SER IGUAL A ZERO\n" );
      }
      IO_printf ( "Entrar com o limite inferior: " );     
      scanf  ( "%i", &x ); 
      IO_printf ( "Entrar com o limite superior: " );     
      scanf  ( "%i", &y );
      IO_printf ( "Entrar com a quantidade de teste que voce quer: " );     
      scanf  ( "%i", &z );
   } while((z == 0)||(x >= y)); 

   
   do
   {  
      z = z - 1;
   
      IO_printf ( "Entrar com um numero: " );     
      scanf  ( "%i", &w );     
       
      if ((x <= w) && (w <= y) && ( w % 7 != 0) && ( w % 5 == 0))
      {
         c = c + 1;
         IO_printf ( "(%d) e' multiplo de 5 e nao e' multiplo de 7 [%d]\n", w, c );
      }
      
      else if ((x <= w) && (w<= y) && ( w % 7 == 0) && ( w % 5 == 0))
      {
         IO_printf ( "(%d) e' multiplo de 5, mas e' multiplo de 7.\n", w );
      }
      
      else if ((x <= w) && (w<= y) && (w % 5 != 0))
      {
         IO_printf ( "(%d) nao e' multiplo de 5\n", w );
      }
      
      else
      {
         IO_printf ( "(%d) nao esta' no intervalo [%d:%d]\n", w, x, y );
      }
   }while (z != 0);
   IO_printf ( "Voce colocou [%d] valores que sao mutiplos de 5, mas nao sao multiplos de 7.\n", c );
   
   IO_pause ("Apertar ENTER para continuar");
}



/*
Exemplo 19
*/

void Exemplo19( ) 
{ 
 //difinicao de dados 
   double x = 0; // limite inferior 
   double y = 0; // limite superior 
   int z = 1; // repeticoes
   double w = 0; // numero
   int c = 0; // contador 
    

 //indentificacao
   IO_id ( "EXEMPLO0319 - v0.0" );
   
   do
   {
   //ler variaveis 
      if (x > y)
      {
         IO_printf ( "\n ERRO: O LIMITE INFERIOR DEVE SER MENOR QUE O SUPERIOR\n" );
      }
      if (z == 0)
      {
         IO_printf ( "\n ERRO: QUANTIDADE DE TESTES NAO PODE SER IGUAL A ZERO\n" );
      }
      IO_printf ( "Entrar com o limite inferior: " );     
      scanf  ( "%lf", &x ); 
      IO_printf ( "Entrar com o limite superior: " );     
      scanf  ( "%lf", &y );
      IO_printf ( "Entrar com a quantidade de teste que voce quer: " );     
      scanf  ( "%d", &z );
   
   } while((x >= y)||(z == 0)); 

   
   do
   {  
      z = z - 1;
   
      IO_printf ( "Entrar com um numero: " );     
      scanf  ( "%lf", &w );     
       
      if ((x <= w) && (w <= y))
      {
         int a = 0; // parte inteira
         a = w;
      
         if ( a % 2 == 0)
         {
            c = c + 1;
            IO_printf ( "(%0.5lf) tem sua parte inteira igual a par. [%d]\n", w, c );
         }
      }
      
      else
      {
         IO_printf ( "(%0.5lf) nao esta' no intervalo [%0.5lf:%0.5lf]\n", w, x, y );
      }
     
   }while (z != 0);
   IO_printf ( "Voce colocou [%d] valores que tem sua parte inteira igual a par.\n", c );
   
   IO_pause ("Apertar ENTER para continuar");
}

/*
Exemplo 20
*/

void Exemplo20( ) 
{ 
 //difinicao de dados 
   double x = 0; // limite inferior 
   double y = 0; // limite superior 
   int z = 1; // repeticoes
   double w = 0; // numero
   int c = 0; // contador 
    

 //indentificacao
   IO_id ( "EXEMPLO0320 - v0.0" );
   
   do
   {
   //ler variaveis 
      if (x > y)
      {
         IO_printf ( "\n ERRO: O LIMITE INFERIOR DEVE SER MENOR QUE O SUPERIOR\n" );
      }
      if (z == 0)
      {
         IO_printf ( "\n ERRO: QUANTIDADE DE TESTES NAO PODE SER IGUAL A ZERO\n" );
      }
      
      if (x<0)
      {
         IO_printf ( "\n ERRO: LIMITE INFERIOR MENOR QUE ZERO\n" );
      }
      
      if(y>1)
      {
         IO_printf ( "\n ERRO: LIMITE SUPERIOR MAIOR QUE UM\n" );
      }
      
      IO_printf ( "\nObs.: o limiti inferior nao pode ser menor que zero e o superior nao pode ser maior que 1.\n" );     
      IO_printf ( "Entrar com o limite inferior:\n" );     
      scanf  ( "%lf", &x ); 
      IO_printf ( "Entrar com o limite superior:\n" );     
      scanf  ( "%lf", &y );
      IO_printf ( "Entrar com a quantidade de teste que voce quer:\n" );     
      scanf  ( "%d", &z );
   
   } while((x >= y)||(z == 0)||(x<0)||(y>1)); 

   
   do
   {  
      z = z - 1;
   
      IO_printf ( "Entrar com um numero: " );     
      scanf  ( "%lf", &w );     
       
      if ((x >= w) || (w >= y))
      {
         if ((w <= 1) && (0 <= w))
         {
            c = c + 1;
            IO_printf ( "(%0.9lf) tem sua parte fracionada fora do intervalo. [%d]\n", w, c );
         }
             
         if ((0 < w) && (w > 1))
         {
            IO_printf ( "(%0.9lf) nao esta' no intervalo [0:1]\n", w, x, y );
         }
      }
     
      if ((x <= w) && (w <= y))
      {
         IO_printf ("\n");
      }
   
     
   }while (z != 0);
   IO_printf ( "Voce colocou [%d] valores com parte fracionada fora do intervalo colocado.\n", c );
   
   IO_pause ("Apertar ENTER para continuar");
}






int main ( ) 
{  
 // definir dado     
   int x = 0; 
   char palavra [STR_SIZE]; 
   int tamanho = 0;
   char w;
 
 // repetir até desejar parar     
   do     
   {      
   // identificar         
      IO_id ( "EXEMPLO0318 - Programa - v0.0" ); 
   
   // ler do teclado         
      IO_println ( "Opcoes" );         
      IO_println ( "0 - parar" );         
      IO_println ( "1 -  Ler uma palavra do teclado e mostrar as letras maiusculas." ); 
      IO_println ( "2 -  Ler uma palavra do teclado, contar e mostrar apenas as letras maiusculas." );  
      IO_println ( "3 -  Ler uma palavra do teclado, contar e mostrar as letras maiusculas percorrendo do fim para o início da palavra." );
      IO_println ( "4 -  Ler uma cadeia de caracteres do teclado, contar e mostrar todos simbolos que forem letras, ou maiúsculas ou minusculas." );
      IO_println ( "5 -  Ler uma cadeia de caracteres do teclado, contar e mostrar todos os digitos, percorrendo do fim para o inicio da cadeia de caracteres.");      
      IO_println ( "6 -  Ler uma cadeia de caracteres do teclado, contar e mostrar tudo o que não for dígito e também não for letra.");
      IO_println ( "7 -  Ler valores e testar se sao multiplos de 3.");  
      IO_println ( "8 -  Ler valores e testar se sao multiplos de 5 e nao sao multiplos de 7.");  
      IO_println ( "9 -  Ler valores e testar se tem a parte inteira par.");          
      IO_println ( "10 -  Ler valores e testar se a parte fracionada esta fora do intervalo.");          
      IO_println ( "" ); 
   
      x = IO_readint ( "Entrar com uma opcao: " ); 
   
   // testar valor         
      switch ( x )         
      {           
         case 0:             
            Metodo00 ( );            
            break;           
      
         case 1:             
            Exemplo11( );            
            break;           
      
         case 2:             
            Exemplo12( );            
            break; 
         
         case 3:             
            Exemplo13( );            
            break; 
         
         case 4:             
            Exemplo14( );            
            break; 
         
         case 5:             
            Exemplo15( );            
            break; 
         
         case 6:             
            Exemplo16( );            
            break; 
         
         case 7:             
            Exemplo17( );            
            break; 
         
         case 8:             
            Exemplo18( );            
            break; 
         
         case 9:             
            Exemplo19( );            
            break; 
         
         case 10:             
            Exemplo20( );            
            break; 
         
            
         default:   
            IO_pause ( "ERRO: Valor invalido." );       
      } // fim escolher     
   }     while ( x != 0 ); 
 
 // encerrar     
   IO_pause ( "Apertar ENTER para terminar" );     
   return ( 0 ); 
} // fim main( )

/*
---------------------------------------------- documentacao complementar 
Versao  Resultado  Teste     Observar as saidas
0.1       (OK)      01.      *Apos colocarmos um valor, por enquanto inteiro, o programa nos mostra a subtracao do numero por um, ate o numero 1.
0.2       (OK)      01.      *Apos colocarmos um valor, por enquanto inteiro, o programa utiliza o valor, do numero, para saber quantas vezes repetir a exibicao do numero.
0.3       (OK)      01.      *Apos colocarmos um valor, por enquanto inteiro, o programa nos mostra uma certa contagem de um ate o numero colocado.
0.4       (OK)      01.      *Apos colocarmos um valor, por enquanto inteiro, o programa nos mostra uma certa contagem de um ate o numero colocado.
0.5       (OK)      01.      *Apos colocarmos um valor, por enquanto inteiro, o programa nos mostra a subtracao do numero por um, ate o numero 1.
0.6       (OK)      01.      *Apos colocarmos caracteres o programa nos mostra a posicao desses caracteres.
0.7       (OK)      01.      *Apos colocarmos caracteres o programa nos mostra a posicao desses caracteres.
0.8       (OK)      01.      *Apos colocarmos dois numeros, um referente ao limite inferior e o outro ao superior, o programa nos mostra uma contagem comecando do menor valor ate o maior. 
0.9       (OK)      01.      *Apos colocarmos tres valores, reais, sendo o primeiro um velor referente ao limite inferior, o segundo valor ao limite superior e o terceiro 'a "precisão" da variacao, vemos como resultado a "contagem regressiva" do limite superior ate o inferior com a variacao colocada.  
1.0       (OK)      01.      *Apos colocarmos tres valores, reais, sendo o primeiro um velor referente ao limite inferior, o segundo valor ao limite superior e o terceiro 'a "precisão" da variacao, vemos como resultado a "contagem regressiva" do limite superior ate o inferior com a variacao colocada. 

Exercicios: 
1.1       (OK)      01.      *Depois de colocarmos uma palavra o programa nos diz as letras da palavra que sao maiusculas.  
1.2       (OK)      01.      *Depois de colocarmos uma palavra o programa nos diz as letras da palavra que sao maiusculas, esse programa tambem conta as letras.  
1.3       (OK)      01.      *Depois de colocarmos uma palavra o programa nos diz as letras da palavra que sao maiusculas do final ate o inicio, esse programa tambem conta as letras.
1.4       (OK)      01.      *Depois de colocarmos uma palavra o programa nos diz as letras da palavra, categorizando cada uma como minuscula ou maiuscula, esse programa tambem conta as letras.
1.5       (OK)      01.      *Depois de colocarmos uma palavra o programa nos mostra todos os digitos que estao nessa palavra e as numera. 
1.6       (OK)      01.      *Depois de colocarmos uma serie de caracteres, o programa nos mostra somente aqueles que nao sao numeros e letras.
1.7       (OK)      01.      *Depois de colocarmos um valor o programa nos diz se o mesmo e' multiplo de 3.
1.8       (OK)      01.      *Depois de colocarmos um valor o programa nos diz se o mesmo e' multiplo de 5 e nao e' multiplo de 7.
1.9       (OK)      01.      *Depois de colocarmos um valor real o programa nos diz se a parte inteira dele e' par.
2.0       (OK)      01.      *Depois de colocarmos um valor real o programa nos diz se a parte fracionada esta' fora do intervalo.

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

Exercicios:    
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

---------------------------------------------- previsao de testes 

VERSAO: 0.1
a.)   0         Resultado: Nao ha' uma resposta do programa.
b.)   1         Resultado: E' mostrado o numero 1.
c.)   2         Resultado: Sao mostrados os numeros 1 e 2.
d.)   3         Resultado: Sao mostrados os valores 1, 2 e 3.
e.)   4         Resultado: Sao mostrados os valores 1, 2, 3 e 4.
f.)  -1         Resultado: Nao ha' uma resposta do programa.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.2
a.)   0         Resultado: Nao ha' uma resposta do programa.
b.)   1         Resultado: E' mostrado o numero 1.
c.)   5         Resultado: O numero 5 e' mostrado cinco vezes.
d.)  -5         Resultado: Nao ha' uma resposta do programa.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.3
a.)   0         Resultado: Nao ha' uma resposta do programa.
b.)   1         Resultado: E' mostrado o numero 1.
c.)   3         Resultado: Sao mostrados os numeros 1, 2 e 3.
d.)   5         Resultado: Sao mostrados os valores 1, 2, 3, 4 e 5.
e.)  -5         Resultado: Nao ha' uma resposta do programa.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.4
a.)   0         Resultado: Nao ha' uma resposta do programa.
b.)   1         Resultado: E' mostrado o numero 1.
c.)   3         Resultado: Sao mostrados os numeros 1, 2 e 3.
d.)   5         Resultado: Sao mostrados os valores 1, 2, 3, 4 e 5.
e.)  -5         Resultado: Nao ha' uma resposta do programa.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.5
a.)   0         Resultado: Nao ha' uma resposta do programa.
b.)   1         Resultado: E' mostrado o numero 1.
c.)   3         Resultado: Sao mostrados os numeros 3, 2 e 1.
d.)   5         Resultado: Sao mostrados os valores 5, 4, 3, 2 e 1.
e.)  -5         Resultado: Nao ha' uma resposta do programa.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.6
a.)  "a"          Resultado: A mensagem que aparece e' 0:[a]
b.) "abc"         Resultado: As mensagens que aparecem sao 0: [a], 1: [b] e 2: [c].
c.) "abc def"     Resultado: As mensagens que aparecem sao 0: [a], 1: [c] e 2: [c].
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.7
a.)  "a"          Resultado: A mensagem que aparece e' 0:[a]
b.) "abc"         Resultado: As mensagens que aparecem sao 0: [a], 1: [b] e 2: [c].
c.) "abc def"     Resultado: As mensagens que aparecem sao 0: [a], 1: [c] e 2: [c].
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.8
a.)   0 e 1         Resultado: Sao mostrados os seguintes valores 0 e 1.
b.)   1 e 5         Resultado: Sao mostrados os seguintes valores 0, 1, 2, 3, 4 e 5.
c.)   3 e 5         Resultado: Sao mostrados os seguintes valores 3, 4 e 5.
d.)  -5 e 5         Resultado: Sao mostrados os seguintes valores -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 0.9
a.)   0 e  1, passo  1      Resultado: Sao mostrados os seguintes valores 1.000000 e 0.000000.
b.)   1 e  5, passo  1      Resultado: Sao mostrados os seguintes valores 5.000000, 4.000000, 3.000000, 2.000000 e 1.000000.
c.)   1 e  5, passo  2      Resultado: Sao mostrados os seguintes valores 5.000000, 3.000000 e 1.000000.
d.)   3 e  5, passo  1      Resultado: Sao mostrados os seguintes valores 5.000000, 4.000000 e 3.000000.
e.)   3 e  5, passo  2      Resultado: Sao mostrados os seguintes valores 5.000000 e 3.000000.
f. )  -5 e  5, passo 1      Resultado: Sao mostrados os seguintes valores 5.000000, 4.000000, 3.000000, 2.000000, 1.000000, 0.000000, -1.000000, -2.000000, -3.000000, -4.000000, -5.000000.
g.)  -5 e  5, passo  2      Resultado: Sao mostrados os seguintes valores 5.000000, 3.000000, 1.000000, -1.000000, -3.000000, -5.000000.
h.)  -5 e  5, passo  5      Resultado: Sao mostrados os seguintes valores 5.000000, 0.000000, -5.000000.
i.)  -5 e  5, passo -1      Resultado: O programa nos mostra os valores crecendo sem parar, pois o vaor nunca vai ser igual ao limite inferior.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.0
a.)  [ 0.1 : 0.5 ] e passo =  0.1          Resultado: Os valores mostrados sao os seguintes 0.100000, 0.200000, 0.300000, 0.400000, 0.500000.
b.)  [ 0.1 : 0.5 ] e passo =  0.1          Resultado: Os valores mostrados sao os seguintes 0.100000, 0.200000, 0.300000, 0.400000, 0.500000.
c.)  [ 0.5 : 0.1 ] e passo =  0.1          Resultado: Nao ha' uma resposta do programa.
d.)  [ 0.1 : 0.5 ] e passo = -0.1          Resultado: Nao ha' uma resposta do programa.
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  


Exercicios: 
VERSAO: 1.1
a.)  EsmEralDa          Resultado: Aparece a seguinte mensagem "(E)(E)(D) sao letras minusculas.".
b.)  LaBiRiNtO          Resultado: Aparece a seguinte mensagem "(L)(B)(R)(N)(O) sao letras maiusculas.".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.2
a.)  EsmEralDa          Resultado: Aparece as seguintes mensagens "(E) : (1)", "(E) : (2)" e "(D) : (3)".
b.)  LaBiRiNtO          Resultado: Aparece as seguintes mensagens "(L) : (1)", "(B) : (2)", "(R) : (3)", "(N) : (4)" e "(O) : (5)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.3
a.)  EsmEralDa          Resultado: Aparece as seguintes mensagens "(D) : (1)", "(E) : (2)" e "(E) : (3)".
b.)  LaBiRiNtO          Resultado: Aparece as seguintes mensagens "(O) : (1)", "(N) : (2)", "(R) : (3)", "(B) : (4)" e "(L) : (5)".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.4
a.)  EsmEralDa          Resultado: Aparece as seguintes mensagens "(E) E' uma letra maiuscula. (1)", "(s) E' uma letra minuscula. (1)", "(m) E' uma letra minuscula. (2)", "(E) E' uma letra maiuscula. (2)", "(r) E' uma letra minuscula. (3)", "(a) E' uma letra minuscula. (4)", "(l) E' uma letra minuscula. (5)", "(D) E' uma letra maiuscula. (3)", "(a) E' uma letra minuscula. (6)", "(3) E' a guantidade total de letras maiusculas.", "(6) E' a guantidade total de letras minusculas." e "(9) E' a guantidade total de letras.".
b.)  PombO              Resultado: Aparece as seguintes mensagens "(P) E' uma letra maiuscula. (1)", "(o) E' uma letra minuscula. (1)", "(m) E' uma letra minuscula. (2)", "(b) E' uma letra minuscula. (3)", "(O) E' uma letra maiuscula. (2)", "(2) E' a guantidade total de letras maiusculas.", "(3) E' a guantidade total de letras minusculas." e "(5) E' a guantidade total de letras.".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.5
a.)  3sm3ral0a          Resultado: Aparece as seguintes mensagens (0): contagem => (1).", "(3): contagem => (2)." e "(3): contagem => (3).".
b.)  7omb0              Resultado: Aparece as seguintes mensagens "(0): contagem => (1)." e "(7): contagem => (2).".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.6
a.)  )3s.+*?al0a          Resultado: Aparece as seguintes mensagens "(?): contagem => (1).", "(*): contagem => (2).", "(+): contagem => (3).", "(.): contagem => (4)." e "()): contagem => (5).".
b.)  7om;:b0              Resultado: Aparece as seguintes mensagens "(:): contagem => (1)." e "(;): contagem => (2).".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.7
a.)  limites [1,9] repeticao(2): valores 3 e 18              Resultado: Aparece as seguintes mensagens "(3) e' multiplo de 3" e "(18) nao esta' no intervalo [1:9]".
b.)  limites [1,9] repeticao(2): valores 8 e 9               Resultado: Aparece as seguintes mensagens "(8) nao e' multiplo de 3" e "(9) e' multiplo de 3".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.8
a.)  limites [1,35] repeticao(2): valores 60 e 35              Resultado: Aparece as seguintes mensagens "(60) nao esta' no intervalo [1:35]" e "(35) e' multiplo de 5, mas e' multiplo de 7.".
b.)  limites [1,10] repeticao(2): valores 10 e 5               Resultado: Aparece as seguintes mensagens "(10) e' multiplo de 5 e nao e' multiplo de 7 [1]" e "(5) e' multiplo de 5 e nao e' multiplo de 7 [2]".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 1.9
a.)  limites [1.9, 10.8] repeticao(2): valores 1 e 10.8                  Resultado: Aparece as seguintes mensagens "(1.00000) nao esta' no intervalo [1.90000:10.80000]" e "(10.80000) tem sua parte inteira igual a par [1]".
b.)  limites [1, 5.625] repeticao(2): valores 2.689 e 4.36               Resultado: Aparece as seguintes mensagens "(2.68900) tem sua parte inteira igual a par. [1]" e "(4.36000) tem sua parte inteira igual a par. [2]".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

VERSAO: 2.0
a.)  limites [0.5555, 0.666] repeticao(2): valores 0.444 e 0.777           Resultado: Aparece as seguintes mensagens "(0.444000000) tem sua parte fracionada fora do intervalo. [1]" e "(0.777000000) tem sua parte fracionada fora do intervalo. [2]".
b.)  limites [0.5555, 0.666] repeticao(2): valores 6 e 1                   Resultado: Aparece as seguintes mensagens "(6.000000000) nao esta' no intervalo [0:1]" e "(1.000000000) tem sua parte fracionada fora do intervalo. [1]".
// Obs: Testei todos os valores acima e nao ocorreu erros na execucao dos mesmos.  

---------------------------------------------- historico  
 
Versao   Data     Modificacao   
0.1      30/03    esboco 
0.2      30/03    esboco 
0.3      30/03    esboco 
0.4      30/03    esboco 
0.5      30/03    esboco 
0.6      30/03    esboco 
0.7      30/03    esboco 
0.8      30/03    esboco 
0.9      30/03    esboco   
1.0      30/03    esboco   

Exercicios:
1.1      30/03    esboco   
1.2      30/03    esboco   
1.3      30/03    esboco  
1.4      30/03    esboco  
1.5      30/03    esboco  
1.6      30/03    esboco  
1.7      30/03    esboco  
1.8      30/03    esboco  
1.9      30/03    esboco
2.0      30/03    esboco
  
---------------------------------------------- testes 
 
 Versao   Teste                Identificacao de programa 
 0.1      01. ( OK )           Leitura e exibicao de inteiro. 
 0.2      01. ( OK )           Leitura e exibicao de inteiro. 
 0.3      01. ( OK )           Leitura e exibicao de inteiro. 
 0.4      01. ( OK )           Leitura e exibicao de inteiro. 
 0.5      01. ( OK )           Leitura e exibicao de inteiro. 
 0.6      01. ( OK )           Leitura e exibicao de caracteres. 
 0.7      01. ( OK )           Leitura e exibicao de caracteres. 
 0.8      01. ( OK )           Leitura e exibicao de inteiro. 
 0.9      01. ( OK )           Leitura e exibicao de reais.
 1.0      01. ( OK )           Leitura e exibicao de reais.
 
 Exercicios:
 1.1      01. ( OK )           Leitura e exibicao de caracteres. 
 1.2      01. ( OK )           Leitura e exibicao de caracteres. 
 1.3      01. ( OK )           Leitura e exibicao de caracteres. 
 1.4      01. ( OK )           Leitura e exibicao de caracteres. 
 1.5      01. ( OK )           Leitura e exibicao de caracteres e digitos. 
 1.6      01. ( OK )           Leitura e exibicao de caracteres. 
 1.7      01. ( OK )           Leitura e exibicao de numeros inteiros. 
 1.8      01. ( OK )           Leitura e exibicao de numeros inteiros. 
 1.9      01. ( OK )           Leitura e exibicao de numeros reais. 
 2.0      01. ( OK )           Leitura e exibicao de numeros reais. 

*/