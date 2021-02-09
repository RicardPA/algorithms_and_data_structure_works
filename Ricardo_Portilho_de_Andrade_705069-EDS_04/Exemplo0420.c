/*
 Exemplo0419 - v0.0. - 11 / 04 / 2020
 Author:Ricardo Portilho de Andrade 

*/
// dependencias
#include "io.h" // para definicoes proprias
/**
 Method00 - nao faz nada.
*/
void method00 ( void )
{
// nao faz nada
} // fim method00 ( )

//----------------------------------------//Funcoes Utilizadas\\----------------------------------------------------------------------------------------\\

/*
Testar se valores dados estao no parametro da quantidade (valores inteiros)
*/
bool ParametroQ ( int quantidade )
{
// definir dado local 
   bool result = true;
// testar condicoes
   if ( quantidade <= 0 )
   {
      result = false;
   }//fim se 
   return ( result );
}//fim ParametroIR

/*
Testar se valores dados estao no parametro do intervalo (valores reais)
*/
bool ParametroIR ( double superior, double inferior )
{
// definir dado local 
   bool result = true;
// testar condicoes
   if ( inferior > superior )
   {
      result = false;
   }//fim se 
   return ( result );
}//fim ParametroIR

/*
definir se o valor está no intervalo 
*/
bool DIntervalo (double x, double inferior, double superior )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( inferior < x && x < superior )
   {
      result = true;
   } // fim se
   return ( result );
} // fim belongsTo ( )

/*
definir se o valor está no intervalo 
*/
bool FIntervalo (double x, double inferior, double superior )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( inferior >= x || x >= superior )
   {
      result = true;
   } // fim se
   return ( result );
} // fim belongsTo ( )


/*
definir se o caractere e' uma letra minuscula  
*/
bool Minusculas ( char x )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( 'a' <= x && x <= 'z' )
   {
      result = true;
   } // fim se
   return ( result );
} 

/*
definir se o caractere e' um digito par 
*/
bool Par ( char x )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( '0' <= x && x <= '9' )
   {
    if ( x % 2 == 0 )
    {
      result = true;
    }
   } // fim se
   return ( result );
} // fim isDigit ( )

/*
definir se o caractere e' diferente de   
*/
bool NDigLetr ( char x )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( ! ( ( 'A' <= x && x <= 'Z' ) || ( 'a' <= x && x <= 'z' ) || ( '0' <= x && x <= '9' ) ) )
   {
      result = true;
   } // fim se
   return ( result );
} 

/*
definir se o caractere e' igual a
*/
bool DigLetr ( char x )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( ( ( 'A' <= x && x <= 'Z' ) || ( 'a' <= x && x <= 'z' ) || ( '0' <= x && x <= '9' ) ) )
   {
      result = true;
   } // fim se
   return ( result );
} 

/*
definir se o caractere e' uma letra maiuscula  
*/
bool Maiuscula ( char x )
{
// definir dado local
   bool result = false;
// testar a condicao
   if ( 'A' <= x && x <= 'Z' )
   {
      result = true;
   } // fim se
   return ( result );
} 

/*
Receber uma sequencia de caracteres 
*/
void SequenciaCMU ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;
//definir o tamanho 
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( Maiuscula ( simbolo ) )
      {
      // contar
         contador = contador + 1;
      } // fim se
   }
   IO_printf ( "\n%s%d\n", "Quantidade de Maiusculas = ", contador );
}

/*
Receber uma sequencia de caracteres 
*/
void SequenciaCMU2 ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int p = 0;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
//definir o tamanho 
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   IO_printf ( "[" );
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( Maiuscula ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ( " nao ha' letras maiusculas" );
   }
   
   if ( p > 0 )   
   {
      IO_printf ( " essas sao as letras maiusculas" );
   }

}

/*
Receber uma sequencia de caracteres 
*/
void SequenciaCMUEMN ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int p = 0;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
//definir o tamanho 
   tamanho = strlen ( palavra );
   IO_printf ( "\n[" );
// Ver se ha' letras mausculas
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( Maiuscula ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ("%s%d", " nao ha' letras maiusculas\nQuantidade de maiusculas = ", p );
   }
   
   if ( p > 0 )   
   {
      IO_printf ("%s%d", " essas sao as letras maiusculas\nQuantidade de maiusculas = ", p);
   }
   
   //repeticao de definicao 
   posicao = 0;
   p = 0;
   IO_printf ( "\n[" );
 // Ver se ha' letras minusculas
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( Minusculas ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ( "%s%d", " nao ha' letras minusculas\nQuantidade de minusculas = ", p );
   }
   
   if ( p > 0 )   
   {
      IO_printf ("%s%d"," essas sao as letras minusculas\nQuantidade de minusculas = ", p );
   }

}

/*
Receber uma sequencia de caracteres e testar se e' um digito par
*/
void SequenciaD ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int p = 0;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
//definir o tamanho 
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   IO_printf ( "\n[" );
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( Par ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ( " %s%d ", " nao ha' digitos pares\nQuantidade de digitos pares = \n", p );
   }
   
   if ( p > 0 )   
   {
      IO_printf ( " %s%d ", " esses sao os digitos pares\nQuantidade de digitos pares = ", p );
   }

}

/*
Receber uma sequencia de caracteres e testar se e' um caractere nao alfanumerico 
*/
void SequenciaS ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int p = 0;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
//definir o tamanho 
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   IO_printf ( "\n[" );
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( NDigLetr  ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ( " %s%d ", " nao ha' simbolos nao alfanumericos\nQuantidade de simbolos nao alfanumericos = ", p );
   }
   
   if ( p > 0 )   
   {
      IO_printf ( " %s%d ", " esses sao os simbolos nao alfanumericos\nQuantidade de simbolos nao alfanumericos = ", p );
   }
}

void Alfanumericos ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int p = 0;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
//definir o tamanho 
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   IO_printf ( "\n[" );
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( DigLetr  ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ( " %s%d ", " nao ha' simbolos alfanumericos\nQuantidade de simbolos alfanumericos = ", p );
   }
   
   if ( p > 0 )   
   {
      IO_printf ( " %s%d ", " esses sao os simbolos alfanumericos\nQuantidade de simbolos alfanumericos = ", p );
   }
}

void SomaAlfanumericos ( chars y )
{
   chars palavra = IO_new_chars ( STR_SIZE );
   palavra = y;
   int p = 0;
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
//definir o tamanho 
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   IO_printf ( "\n[" );
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( DigLetr  ( simbolo ) )
      {
      // mostrar
         IO_printf ( " %c ", simbolo );
         p = p + 1;
      } // fim se
   }
   IO_printf ( "]" );
   if ( p == 0 )   
   {
      IO_printf ( " %s%d ", " nao ha' simbolos alfanumericos\nQuantidade de simbolos alfanumericos = ", p );
   }
   
   if ( p > 0 )   
   {
      IO_printf ( " %s%d ", " esses sao os simbolos alfanumericos\nQuantidade de simbolos alfanumericos = ", p );
   }
}


// Fim das funcoes-------------------------------------------------------------------------------------------------------------

// Method01 - Ler valores reais e intervalo -------------------------------------------------------------------------------------
void method01 ( void )
{
//definir valores
   double x = 0.0;
   double inferior = 0.0;
   double superior = 0.0;
   int contador = 0;
   int Dcontador = 0;
   int Fcontador = 0;
   int controle = 1;
   int quantidade = 0; 
// identificar
   IO_id ( "EXEMPLO0411 - Method01 - v0.0" );
   
// Fazer ate que os parametros sejam aceitos
   do
   {
   // falar para o usuario qual parametro esta sendo colocado de forma errada
      if ( contador > 0 )
      {
         if ( ParametroQ ( quantidade ) == false)
         {
            IO_printf ("\nERRO: O valor referente a quantidade nao pode ser menor ou igual a zero\n\n");
         }
      }
   
      if ( contador > 0 )
      {
         if ( ParametroIR ( superior, inferior ) == false)
         {
            IO_printf ("\nERRO: O valor referente ao limite superior nao pode ser menor que o inferior\n\n");
         }
      }
   
   // ler do teclado
      inferior   = IO_readdouble ( "Entrar com o limite inferior: " );
      superior   = IO_readdouble ( "Entrar com o limite superior: " );
      quantidade = IO_readint ( "Entrar com uma quantidade: " );
   
   // Saber quantas vezes as entradas estao se repetindo
      contador = contador + 1;
   
   } while (  false == ( ParametroQ ( quantidade ) && ParametroIR ( superior, inferior ) ) );  // parametros 
 
 
// repetir para a quantidade de vezes informada
   controle = 1;
   while ( controle <= quantidade )
   {
   // ler valor do teclado
      x = IO_readdouble ( IO_concat (
         IO_concat ( "", IO_toString_d ( controle ) ),
         ": " ) );
   // testar e contar quntos valores estao dentro do intervalo
      if ( DIntervalo  ( x, inferior, superior ) )
      {
         Dcontador = Dcontador + 1;
      } // fim se
      
   // testar e contar quntos valores estao fora do intervalo
      if ( FIntervalo  ( x, inferior, superior ) )
      {
         Fcontador = Fcontador + 1;
      } // fim se  
       
   // passar ao proximo valor
      controle = controle + 1;
   } // fim repetir
   
// mostrar a quantidade de valores positivos
   IO_printf ( "%s%d\n", "Valores dentro do intervalo = ", Dcontador );
   IO_printf ( "%s%d\n", "Valores fora do intervalo = ", Fcontador );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

//Fim Method01 ----------------------------------------------------------------------------------------------------------------------------

// Method02 - Ler uma sequencia de caracteres e falar quantidade de letras maiusculas -------------------------------------------------------------------------------------
void method02 ( void )
{
// definir dado
   chars palavra = IO_new_chars ( STR_SIZE );
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;
// identificar
   IO_id ( "EXEMPLO0412 - Method02 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com uma palavra: " );
// determinar a quantidade de simbolos na palavra
   tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
   {
   // isolar um simbolo por vez
      simbolo = palavra [ posicao ];
   // testar e contar se caractere e' letra minuscula
      if ( Maiuscula ( simbolo ) )
      {
      // contar
         contador = contador + 1;
      } // fim se
   } // fim repetir
// mostrar a quantidade de minusculas
   IO_printf ( "\n%s%d\n", "Quantidade de Maiusculas = ", contador );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

//Fim Method02 ----------------------------------------------------------------------------------------------------------------------------

//Method03 ----------------------------------------------------------------------------------------------------------------------------
void method03 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0413 - Method03 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com uma palavra: " );
// mandar variaveis para o void

   SequenciaCMU ( palavra );
   
// mostrar a quantidade de minusculas
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )


//Fim Method03 ----------------------------------------------------------------------------------------------------------------------------

//Method04 ----------------------------------------------------------------------------------------------------------------------------
void method04 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0414 - Method04 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com uma palavra: " );
// mandar variaveis para o void

   SequenciaCMU2 ( palavra );
   
// mostrar a quantidade de minusculas
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )

//Fim Method04 ----------------------------------------------------------------------------------------------------------------------------

//Method05 ----------------------------------------------------------------------------------------------------------------------------
void method05 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0415 - Method05 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com uma palavra: " );
// mandar variaveis para o void

   SequenciaCMUEMN ( palavra );
   
// mostrar a quantidade de minusculas
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )

//Fim Method05 ----------------------------------------------------------------------------------------------------------------------------

//Method06 ----------------------------------------------------------------------------------------------------------------------------
void method06 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0416 - Method06 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com uma palavra: " );
// mandar variaveis para o void

   SequenciaCMUEMN ( palavra );
   
// mostrar a quantidade de minusculas
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )

//Fim Method06 ----------------------------------------------------------------------------------------------------------------------------

//Method07\\----------------------------------------------------------------------------------------------------------------------------
void method07 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0417 - Method07 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com um conjunto de caractere: " );
// mandar variaveis para o void

   SequenciaD ( palavra );
   
// mostrar a quantidade de minusculas
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}
//Fim Method07 ----------------------------------------------------------------------------------------------------------------------------

//Method08\\----------------------------------------------------------------------------------------------------------------------------
void method08 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0418 - Method08 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com um conjunto de caractere: " );
// mandar variaveis para o void

   SequenciaS ( palavra );
 
   IO_pause ( "Apertar ENTER para continuar" );
}

//Fim Method07 ----------------------------------------------------------------------------------------------------------------------------


//Method09\\----------------------------------------------------------------------------------------------------------------------------
void method09 ( void )
{
// definir dado
   chars palavra;
// identificar
   IO_id ( "EXEMPLO0419 - Method09 - v0.0" );
// ler do teclado
   palavra = IO_readstring ( "Entrar com um conjunto de caractere: " );
// mandar variaveis para o void
   
   Alfanumericos ( palavra );
   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )

//Fim Method09 ----------------------------------------------------------------------------------------------------------------------------


//Method10\\----------------------------------------------------------------------------------------------------------------------------
void method10 ( void )
{
// definir dado
   chars palavra2 = IO_new_chars ( STR_SIZE );
   strcpy ( palavra2, STR_EMPTY ); // vazio
   chars palavra;
   int quantidade = 0;
// identificar
   IO_id ( "EXEMPLO0420 - Method10 - v0.0" );
// ler do teclado
   do
   {
   quantidade = IO_readint ( "Entrar com uma qantidade: " );
   } while ( false == ( ParametroQ ( quantidade )));
//formar um conjunto maior    
   do
   {
    quantidade = quantidade - 1;
    // ler do teclado
    palavra = IO_readstring ( "\n\nEntrar com um conjunto de caractere: " );
    palavra2 = IO_concat ( palavra, palavra2);
    SomaAlfanumericos ( palavra );
   } while ( quantidade > 0 );
   
// mandar variaveis para o void
   
   IO_printf ( "\n\nTodos os simbolos alfanumericos mostrados estao abaixo junto a quantidade total:\n" );
   SomaAlfanumericos (palavra2);
   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )

//Fim Method10 ----------------------------------------------------------------------------------------------------------------------------

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main ( )
{
// definir dado
   int x = 0;
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO0418 - Programa - v0.0" );
   
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Ler um intervalo e falar se os valores estao dentro ou fora dele" );
      IO_println ( " 2 - Ler uma sequencia de caracteres e falar quantas letras, dessa sequancia, sao maiusculas");
      IO_println ( " 3 - Ler uma sequencia de caracteres e falar quantas letras, dessa sequancia, sao maiusculas " );
      IO_println ( " 4 - Ler uma sequencia de caracteres e falar quais letras, dessa sequancia, sao maiusculas " );
      IO_println ( " 5 - Ler uma sequencia de caracteres e falar quais letras, dessa sequancia, sao maiusculas e minusculas " );
      IO_println ( " 6 - Ler uma sequencia de caracteres e falar quais letras, dessa sequancia, sao maiusculas e minusculas" );
      IO_println ( " 7 - Ler uma seguencia de caracteres e falar quantos digitos pares estao nela" );
      IO_println ( " 8 - Ler uma sequencia de caracteres e falar quais sao os simbolos não alfanumericos e a quantitade deles" );
      IO_println ( " 9 - Ler uma sequencia de caracteres e mostrar todos os simbolos alfanumericos " );
      IO_println ( "10 - Ler uma quantidade de sequencias de caracteres e mostrar a soma dos simbolos alfanumericos apresentados" );
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
            IO_pause ( "ERRO: Valor invalido." );
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
0.1       (OK)      01.      *Depois de escolhermos a opçao 1 o programa pede para colocarmos um valor referente a quantidade, logo depois o programa nos pede valores quantidade vezes.
0.2       (OK)      01.      *Depois de escolhermos a opçao 2 o programa pede para colocarmos um valor referente a quantidade, logo depois o programa nos pede valores quantidade vezes, depois ele nos fala quantos valores, dos colocados, sao positivos. 
0.3       (OK)      01.      *Depois de escolhermos a opçao 3 o programa pede para colocarmos um valor referente a quantidade, logo depois o programa nos pede valores quantidade vezes, depois ele nos fala quantos valores, dos colocados, sao positivos e estão no intervalo (0,100). 
0.4       (OK)      01.      *Depois de escolhermos a opçao 4 o programa pede para colocarmos um valor referente a quantidade, logo depois o programa nos pede valores quantidade vezes, depois ele nos fala quantos valores, dos colocados, sao positivos, pares e estão no intervalo (0,100). 
0.5       (OK)      01.      *Depois de escolhermos a opçao 5 o programa pede para colocarmos um valor referente a quantidade, logo depois o programa nos pede valores quantidade vezes, depois ele nos fala quantos valores, dos colocados, sao positivos, pares e estão no intervalo (0,100). 
0.6       (OK)      01.      *Depois de escolhermos a opçao 6 o programa pede para colocarmos uma palavra, logo depois ele nos diz quantas letras minusculas a palavra tem.
0.7       (OK)      01.      *Depois de escolhermos a opçao 7 o programa pede para colocarmos uma palavra, logo depois ele nos diz quantas letras maiusculas a palavra tem.
0.8       (OK)      01.      *Depois de escolhermos a opçao 8 o programa pede para colocarmos uma palavra, logo depois ele nos diz quantas letras minusculas a palavra tem.(Obs: Esse programa tem diferenças na resposta, se comparada com a opçao 6)
0.9       (OK)      01.      *Depois de escolhermos a opçao 9 o programa pede para colocarmos caracteres, logo depois o programa nos diz quantros digitos tem esse conjunto de caracteres.  
1.0       (OK)      01.      *Depois de escolhermos a opçao 10 o programa pede para colocarmos caracteres, logo depois o programa nos diz quantros digitos tem esse conjunto de caracteres.(Obs: Esse programa tem diferenças na resposta, se comparada com a opçao 9) 

Exercicios
1.1       (OK)      01.      *Depois de escolhermos a opçao 1 o programa pede para colocarmos um valores referentes ao intervalo e a quantidade, logo depois o programa nos pede valores quantidade vezes, depois ele nos fala quantos valores, dos colocados, que estao detro e os que estao fora do intervalo colocado. 
1.2       (OK)      01.      *Depois de escolhermos a opçao 2 o programa pede para colocarmos uma palavra, logo depois ele nos diz quantas letras maiusculas a palavra tem.
1.3       (OK)      01.      *Depois de escolhermos a opçao 3 o programa pede para colocarmos uma palavra, logo depois ele nos diz quantas letras maiusculas a palavra tem.
1.4       (OK)      01.      *Depois de escolhermos a opçao 4 o programa pede para colocarmos uma palavra, logo depois ele nos diz quais sao as letras maiusculas da palavra.
1.5       (OK)      01.      *Depois de escolhermos a opçao 5 o programa pede para colocarmos uma palavra, logo depois ele nos diz quais sao as letras maiusculas, minusculas e a quantidade de cade uma.
1.6       (OK)      01.      *Depois de escolhermos a opçao 6 o programa pede para colocarmos uma palavra, logo depois ele nos diz quais sao as letras maiusculas, minusculas e a quantidade de cade uma.
1.7       (OK)      01.      *Depois de escolhermos a opçao 7 o programa pede para colocarmos um conjunto de caractere, logo depois ele nos diz quantos digitos pares esse conjunto tem.
1.8       (OK)      01.      *Depois de escolhermos a opçao 8 o programa pede para colocarmos um conjunto de caractere, logo depois ele nos diz quantos simbolos não alfanuméricos esse conjunto tem.
1.9       (OK)      01.      *Depois de escolhermos a opçao 9 o programa pede para colocarmos um conjunto de caractere, logo depois ele nos diz quantos e quais simbolos alfanuméricos esse conjunto tem.
2.0       (OK)      01.      *Depois de escolhermos a opçao 10 o programa pede para colocarmos uma quantidade de conjuntos de caractere, logo depois ele nos diz quantos e quais simbolos alfanuméricos esses conjuntos de caracteres tem.


---------------------------------------------- notas / observacoes / comentarios
Versao  Teste    Comentarios
0.1     01.     *Nao houve problemas na compilacao do programa.
0.2     01.     *Nao houve problemas na compilacao do programa.
0.3     01.     *Nao houve problemas na compilacao do programa.
0.4     01.     *Nao houve problemas na compilacao do programa.
0.5     01.     *Nao houve problemas na compilacao do programa.
0.6     01.     *Houve problemas pequenos na compilacao do programa, mas foram resolvidos sem problemas.
0.7     01.     *Houve problemas pequenos na compilacao do programa, mas foram resolvidos sem problemas.
0.8     01.     *Houve problemas pequenos na compilacao do programa, mas foram resolvidos sem problemas.
0.9     01.     *Houve problemas pequenos na compilacao do programa, mas foram resolvidos sem problemas.
1.0     01.     *Houve problemas pequenos na compilacao do programa, mas foram resolvidos sem problemas.

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

---------------------------------------------- previsao de testes
Exemplo0401
a.) -1                            Resultado: O programa nao responde.
b.) 0                             Resultado: O programa nao responde. 
c.) 5 e { 1, 2, 3, 4, 5 }         Resultado: O programa "recebe" todos os valores.

Exemplo0402
a.) -1                            Resultado: O programa nao responde.
b.) 0                             Resultado: O programa nao responde. 
c.) 5 e { 1, 2, 3, 4, 5 }         Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos = 5".

Exemplo0403
a.) 5 e { 100, 1, 3, 4, 101 }     Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos menores que 100 = 3".
b.) 0                             Resultado: O programa entrega essa mensagem "Positivos menores que 100 = 0". 
c.) 5 e { -1, 2, 3, 4, 5 }        Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos menores que 100 = 4".

Exemplo0404
a.) 5 e { 100, 1, 3, 4, 101 }     Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos menores que 100 e pares = 1".
b.) 0                             Resultado: O programa entrega essa mensagem "Positivos menores que 100 e pares = 0". 
c.) 5 e { -1, 2, 3, 4, 5 }        Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos menores que 100 e pares = 2".

Exemplo0405
a.) 5 e { 100, 1, 3, 4, 101 }     Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos menores que 100 e pares = 1".
b.) 0                             Resultado: O programa entrega essa mensagem "Positivos menores que 100 e pares = 0". 
c.) 5 e { -1, 2, 3, 4, 5 }        Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Positivos menores que 100 e pares = 2".

Exemplo0406
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Minusculas = 4".
b.) 0                             Resultado: O programa entrega essa mensagem "Minusculas = 0". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Minusculas = 4".

Exemplo0407
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Maiusculas = 4".
b.) 0                             Resultado: O programa entrega essa mensagem "Minusculas = 0". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Maiusculas = 4".

Exemplo0408
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Minusculas = 4 [eerr]".
b.) 0                             Resultado: O programa entrega essa mensagem "Minusculas = 0 []". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Minusculas = 4 [mmmy]".

Exemplo0409
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Algarismos = 2".
b.) 0                             Resultado: O programa entrega essa mensagem "Algarismos = 1". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Algarismos = 0".

Exemplo0410
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Algarismos = 2 [11]".
b.) 0                             Resultado: O programa entrega essa mensagem "Algarismos = 1 [0]". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Algarismos = 0 []".

Exercicios
Exemplo0411
a.) limite (1, 10), quantidade [5] e valores { 100, 1, 3, 4, 101 }     Resultado: O programa "recebe" todos os valores e entrega essas mensagens "Valores dentro do intervalo = 2"  e "Valores fora do intervalo = 3".
b.) limite (8, 0), quantidade [0] e valores { 4.5, 1.1, 3.225, 6, 10}  Resultado: O programa entrega essas mensagens "ERRO: O valor referente a quantidade nao pode ser menor ou igual a zero" e "ERRO: O valor referente ao limite superior nao pode ser menor que o inferior". 
c.) limite (1, 10), quantidade [5] e valores { 4.5, 1.1, 3.225, 6, 10} Resultado: O programa "recebe" todos os valores e entrega essa mensagem " Valores dentro do intervalo = 4" e "Valores fora do intervalo = 1".

Exemplo0412
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Quantidade de Maiusculas = 4".
b.) 0                             Resultado: O programa entrega essa mensagem "Quantidade de Maiusculas = 0". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Quantidade de Mausculas = 3".

Exemplo0413
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Quantidade de Maiusculas = 4".
b.) 0                             Resultado: O programa entrega essa mensagem "Quantidade de Maiusculas = 0". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "Quantidade de Mausculas = 3".

Exemplo0414
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essa mensagem "[ E  E  R  R ] essas sao as letras maiusculas".
b.) 0                             Resultado: O programa entrega essa mensagem "[] nao ha' letras maiusculas". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem " [ M  J  F ] essas sao as letras maiusculas ".

Exemplo0415
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ E  E  R  R ] essas sao as letras maiusculas", "Quantidade de maiusculas = 4", "[ e  e  r  r ] essas sao as letras minusculas" e "Quantidade de minusculas = 4".
b.) 0                             Resultado: O programa entrega essas mensagens "[] nao ha' letras maiusculas", "Quantidade de maiusculas = 0", "[] nao ha' letras minusculas"  e "Quantidade de minusculas = 0". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ M  J  F ] essas sao as letras maiuscula", "Quantidade de maiusculas = 3, "[ m  m  m  y ] essas sao as letras minusculas" e "Quantidade de minusculas = 4".

Exemplo0416
a.) EEee11RRrr                    Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ E  E  R  R ] essas sao as letras maiusculas", "Quantidade de maiusculas = 4", "[ e  e  r  r ] essas sao as letras minusculas" e "Quantidade de minusculas = 4".
b.) 0                             Resultado: O programa entrega essas mensagens "[] nao ha' letras maiusculas", "Quantidade de maiusculas = 0", "[] nao ha' letras minusculas"  e "Quantidade de minusculas = 0". 
c.) MJFmmmy                       Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ M  J  F ] essas sao as letras maiuscula", "Quantidade de maiusculas = 3, "[ m  m  m  y ] essas sao as letras minusculas" e "Quantidade de minusculas = 4".

Exemplo0417
a.) E2ee11RR88                    Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ 2  8  8 ]  esses sao os digitos pares", "Quantidade de digitos pares = 3".
b.) 0                             Resultado: O programa entrega essas mensagens "[ 0 ]  essas sao os digitos pares"  e "Quantidade de digitos pares = 1". 
c.) M5F5m6y                       Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ 6 ]  esses sao os digitos pares" e "Quantidade de digitos pares = 1".

Exemplo0418
a.) *2e´´11R]88                   Resultado: O programa "recebe" todos os valores e entrega essa mensagem "[ *  ´  ´  ] ]  esses sao os simbolos nao alfanumericos".
b.) 0                             Resultado: O programa entrega essa mensagem "[]  nao ha' simbolos nao alfanumericos". 
c.) M/Fm~6y                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "[ /  ~ ]  esses sao os simbolos nao alfanumericos".

Exemplo0419
a.) *2e´´11R]88                   Resultado: O programa "recebe" todos os valores e entrega essa mensagem "[ 2  e  1  1  R  8  8 ]  esses sao os simbolos alfanumericos".
b.) 0                             Resultado: O programa entrega essa mensagem "[ 0 ]  esses sao os simbolos alfanumericos". 
c.) M/Fm~6y                       Resultado: O programa "recebe" todos os valores e entrega essa mensagem "[ M  F  m  6  y ]  esses sao os simbolos alfanumericos".

Exemplo0419
a.) *2e´´11R]88, M/Fm~6y e 0      Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ 0  M  F  m  6  y  2  e  1  1  R  8  8 ]  esses sao os simbolos alfanumerico" e "Quantidade de simbolos alfanumericos = 13".
b.) 0ayfgj e jf543/*-+            Resultado: O programa entrega essas mensagens "[ j  f  5  4  3  0  a  y  f  g  j ]  esses sao os simbolos alfanumericos" e "Quantidade de simbolos alfanumericos = 11". 
c.) M/Fm~6y e jyf687/*-+.         Resultado: O programa "recebe" todos os valores e entrega essas mensagens "[ j  y  f  6  8  7  M  F  m  6  y ]  esses sao os simbolos alfanumericos" e "Quantidade de simbolos alfanumericos = 11 ".


---------------------------------------------- historico
Versao Data Modificacao
 0.1    /   esboco
---------------------------------------------- testes
Versao   Teste  Identificacao de programa
 0.1 01. ( OK ) Ler numeros inteiros.
 0.2 01. ( OK ) Ler numeros inteiros e falar quantos são positivos.
 0.3 01. ( OK ) Ler um valor e falar se ele pertence ao intervalo (0,100) 
 0.4 01. ( OK ) Ler um valor e falar se ele e' par e pertence ao intervalo (0,100)
 0.5 01. ( OK ) Ler um valor e falar se ele e' par e pertence ao intervalo (0,100)
 0.6 01. ( OK ) Ler uma palavra e falar quantas letras minusculas ela tem
 0.7 01. ( OK ) Ler uma palavra e falar quantas letras maiusculas ela tem
 0.8 01. ( OK ) Ler uma palavra e falar quantas letras minusculas ela tem
 0.9 01. ( OK ) Ler uma palavra e falar quantos algarismos ela tem
 1.0 01. ( OK ) Ler uma palavra e falar quantos algarismos ela tem

Exercicios
 1.1 01. ( OK ) Ler um intervalo e falar se os valores estao dentro ou fora dele 
 1.2 01. ( OK ) Ler uma sequencia de caracteres e falar quantas letras maiusculas ela tem
 1.3 01. ( OK ) Ler uma sequencia de caracteres e falar quantas letras maiusculas ela tem
 1.4 01. ( OK ) Ler uma sequencia de caracteres e falar quais sao as letras maiusculas dela
 1.5 01. ( OK ) Ler uma sequencia de caracteres e falar a quantidade de minusculas e maiusculas
 1.6 01. ( OK ) Ler uma sequencia de caracteres e falar a quantidade de minusculas e maiusculas
 1.7 01. ( OK ) Ler uma sequencia de caracteres e falar a quantidade de digitos pares
 1.8 01. ( OK ) Ler uma sequencia de caracteres e falar a quantidade de simbolos nao alfanumericos
 1.9 01. ( OK ) Ler uma sequencia de caracteres e falar a quantidade de simbolos alfanumericos
 2.0 01. ( OK ) Ler uma quantidade de sequencias de caracteres e mostrar a soma dos simbolos alfanumericos apresentados

*/