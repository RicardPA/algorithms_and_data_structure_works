/**
   IO_lib - v0.1 - __ / __ / _____
   Author: Ricardo Portilho de Andrade 

 */
// ---------------------- lista de dependencias

#include <stdio.h>     // para entradas e saida
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo

// ---------------------- definicoes uteis

#define  IO_printf        printf
#define  IO_scanf         scanf
#define  IO_fprintf       fprintf
#define  IO_fscanf        fscanf

// ---------------------- definicoes de constantes

const   bool FALSE        = false;  // definir constante
const   bool TRUE         = true ;  // definir constante

const   char EOS          = '\0';   // definir fim de cadeia de caracteres
const   char EOL          = '\n';   // definir mudanca de linha
const   char ENDL []      = "\n";   // definir mudanca de linha
const   char STR_EMPTY [] =  "" ;   // definir cadeia de caracteres vazia
const   int  STR_SIZE     =  80 ;   // definir tamanho padrao para caracteres

// ---------------------- definicoes de tipos

typedef char*   chars  ;            // definir cadeia  de caracteres
typedef int*    ints   ;            // definir arranjo de inteiros
typedef double* doubles;            // definir arranjo de reais
typedef bool*   bools  ;            // definir arranjo de logicos

// ---------------------- definicoes de variaveis globais

int IO_error = 0;                   // sem erros

// ---------------------- definicoes de funcoes e procedimentos

/**
    Metodo para limpar a saida de dados padrao.
 */
void IO_clrscr ( )
{
 // system ( "clear" ); // para Linux   - OBS; NAO RECOMENDADO !
   system ( "cls"   ); // para Windows - OBS; NAO RECOMENDADO !
} // end IO_flush ( )

/**
    Metodo para limpar a entrada de dados padrao.
 */
void IO_flush ( )
{
   fflush ( stdin ); // OBS; NAO RECOMENDADO !
} // end IO_flush ( )

/**
    Funcao para informar a versao dessa biblioteca.
    @return versao atual
 */
chars IO_version ( )
{
   chars x = "v.02";
   return ( x );
} // end IO_version ( )

/**
    Metodo para identificar o programa e a autoria.
    @param text - mensagem a ser exibida
 */
void IO_id ( chars text )
{
   printf ( "%s\n", text );
   printf ( "%s\n", "Autor: Ricardo Portilho de Andrade" );
   printf ( "\n" );          // mudar de linha
} // fim IO_id ( )

/**
    Funcao para ler valor inteiro do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
 */
int IO_readint ( chars text )
{
   int x = 0;
   IO_printf ( "%s", text );
   IO_flush  ( );
   IO_scanf  ( "%d", &x );
   return    ( x );
} // end IO_readint ( )

/**
    Funcao para ler valor real de precisao dupla do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
 */
double IO_readdouble ( chars text )
{
   double x = 0.0;
   IO_printf ( "%s", text );
   IO_flush  ( );
   IO_scanf  ( "%lf", &x );
   return    ( x );
} // end IO_readdouble ( )

/**
    Funcao para ler valor real de precisao simples do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
 */
int IO_readfloat ( chars text )
{
   float x = 0.0;
   IO_printf ( "%s", text );
   IO_flush  ( );
   IO_scanf  ( "%f", &x );
   return    ( x );
} // end IO_readfloat ( )

/**
    Funcao para ler valor logico do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
    OBS.:   Usar o valor 0 para falso e diferente de zero para verdadeiro
 */
bool IO_readbool ( chars text )
{
   int x = 0;
   IO_printf ( "%s", text );
   IO_flush  ( );
   IO_scanf  ( "%d", &x );
   return    ( x!=0 );
} // end IO_readbool ( )

/**
    Funcao para ler caractere do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
 */
char IO_readchar ( chars text )
{
   char x = '0';
   IO_printf ( "%s", text );
   do
   {
      IO_flush    ( );
      x = getchar ( );
   }
    while ( x == '\n' );
   return ( x );
} // end IO_readchar ( )

/**
    Funcao para ler caractere do teclado.
    @return valor lido
    @param  text - mensagem a ser exibida antes da leitura
 */
void IO_pause ( chars text )
{
   char x = '0';
   IO_printf ( "\n%s\n", text );
   do
   {
      IO_flush    ( );
      x = getchar ( );
   }
    while ( x != '\n' );
} // end IO_pause ( )

/**
    Funcao para reservar espaco para guardar cadeia de caracteres.
    @return area reservada, se houver; NULL, caso contrario
    @param size - quantidade de dados
 */
chars IO_new_chars ( int size )
{
   return ( (chars) malloc ( (size+1)*sizeof(char) ) );
} // fim IO_new_chars ( )

/**
    Funcao para reservar espaco para guardar inteiros.
    @return area reservada, se houver; NULL, caso contrario
    @param size - quantidade de dados
 */
ints IO_new_ints ( int size )
{
   return ( (ints) malloc ( (size)*sizeof(int) ) );
} // fim IO_new_ints ( )

/**
    Funcao para reservar espaco para guardar reais.
    @return area reservada, se houver; NULL, caso contrario
    @param size - quantidade de dados
 */
doubles IO_new_doubles ( int size )
{
   return ( (doubles) malloc ( (size)*sizeof(double) ) );
} // fim IO_new_doubles ( )

/**
    Funcao para reservar espaco para guardar logicos.
    @return area reservada, se houver; NULL, caso contrario
    @param size - quantidade de dados
 */
bools IO_new_bools ( int size )
{
   return ( (bools) malloc ( (size)*sizeof(bool) ) );
} // fim IO_new_bools ( )

/**
    Funcao para concatenar cadeias de caracteres.
    @return cadeia com o resultado
    @param text1 - primeira cadeia
    @param text2 - segunda  cadeia
 */
chars IO_concat ( chars text1, chars text2 )
{                               // reservar area
   chars buffer = IO_new_chars ( strlen(text1)+strlen(text2)+1 );
   strcpy ( buffer, text1 );
   strcat ( buffer, text2 );
   return ( buffer );
} // fim IO_concat ( )

/**
    Funcao para converter valor logico para caracteres.
    @return cadeia com o resultado
    @param x     - valor logico
 */
chars IO_toString_b ( bool x )
{                               // reservar area
   chars buffer = IO_new_chars ( STR_SIZE+1 );
                                // variante do printf( )
   sprintf ( buffer, "%d", x );
   return  ( buffer );
} // fim IO_toString_b ( )

/**
    Funcao para converter caractere para caracteres.
    @return cadeia com o resultado
    @param x     - caractere
 */
chars IO_toString_c ( char x )
{                             // variante do printf( )
   chars buffer = IO_new_chars ( STR_SIZE+1 );
   sprintf ( buffer, "%c", x );
   return  ( buffer );
} // fim IO_toString_c ( )

/**
    Funcao para converter inteiro para caracteres.
    @return cadeia com o resultado
    @param x     - valor inteiro
 */
chars IO_toString_d ( int x )
{                             // variante do printf( )
   chars buffer = IO_new_chars ( STR_SIZE+1 );
   sprintf ( buffer, "%d", x );
   return  ( buffer );
} // fim IO_toString_d ( )

/**
    Funcaoo para converter real para caracteres.
    @return cadeia com o resultado
    @param x     - valor real
 */
chars IO_toString_f ( double x )
{                             // variante do printf( )
   chars buffer = IO_new_chars ( STR_SIZE+1 );
   sprintf ( buffer, "%lf", x );
   return  ( buffer );
} // fim IO_toString_f ( )

/**
    Metodo para mostrar uma linha com certo texto.
    @param text1 - primeira cadeia
 */
void IO_print ( chars text1 )
{
   printf ( "%s", text1 );
} // fim IO_print ( )

/**
    Metodo para mostrar uma linha com certo texto
    e mudar de linha.
    @param text1 - primeira cadeia
 */
void IO_println ( chars text1 )
{
   printf ( "%s\n", text1 );
} // fim IO_println ( )

/**
    Metodo para gravar uma linha em arquivo texto.
    @param filePtr - referencia para arquivo aberto
    @param text1 - cadeia de caracteres a ser gravada
 */
void IO_fprint ( FILE* filePtr, chars text1 )
{
   fprintf ( filePtr, "%s", text1 );
} // fim IO_fprint ( )

/**
    Metodo para gravar uma linha em arquivo texto
    e mudar de linha.
    @param filePtr - referencia para arquivo aberto
    @param text1 - cadeia de caracteres a ser gravada
 */
void IO_fprintln ( FILE* filePtr, chars text1 )
{
   fprintf ( filePtr, "%s\n", text1 );
} // fim IO_fprintln ( )

/**
    Funcao para ler uma palavra de arquivo.
    @return palavra lida
    @param arquivo - referencia para arquivo aberto
 */
chars IO_fread ( FILE* filePtr )
{
   chars buffer = IO_new_chars ( STR_SIZE+1 );

   fscanf ( filePtr, "%s", buffer ); // ler uma linha
   return ( buffer );
} // fim IO_fread ( )

/**
    Funcao para ler uma linha inteira.
    @return linha lida
    @param filePtr - referencia para arquivo aberto
 */
chars IO_freadln ( FILE* filePtr )
{
   chars buffer = IO_new_chars ( STR_SIZE+1 );

   fgets  ( buffer, STR_SIZE, filePtr ); // ler uma linha
   buffer [ strlen (buffer)-1 ] = EOS;   // reposicionar o fim de linha
   return ( buffer );
} // fim IO_freadln ( )

/**
    Funcao para ler cadeia de caracteres.
    @return cadeia de caracteres
    @param text1 - mensagem a ser exibida antes da leitura
 */
chars IO_readstring ( chars text1 )
{
   chars buffer = IO_new_chars ( STR_SIZE+1 );

   printf ( "%s", text1 );
   fflush ( stdin );           // limpar a entrada de dados
   scanf  ( "%s", buffer );    // ler cadeia de caracteres

   return ( buffer );
} // fim IO_readString ( )

/**
    Funcao para ler uma linha inteira.
    @return linha lida
    @param text1 - mensagem a ser exibida antes da leitura
 */
chars IO_readln ( chars text1 )
{
   printf ( "%s", text1 );
   fflush ( stdin );
   return ( IO_freadln ( stdin ) );
} // fim IO_readln ( )



//_______________________________________________________________________|Arranjos e Matrizes|_________________________________________________________________________________________________

/**
 Definicao de tipo arranjo com inteiros
 baseado em estrutura
*/
typedef struct s_int_Array
{
   int length;
   ints data ;
   int ix ;
}
int_Array;

//__________________________________________________________________________________

/**
 Definicao de referencia para arranjo com inteiros
 baseado em estrutura
*/
typedef int_Array* ref_int_Array;

/**
 new_int_Array - Reservar espaco para arranjo com inteiros
 @return referencia para arranjo com inteiros
 @param n - quantidade de datos
*/
ref_int_Array new_int_Array ( int n )
{
// reserva de espaco
   ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));
// estabelecer valores padroes
   if ( tmpArray == NULL )
   {
      IO_printf ( "\nERRO: Falta espaco.\n" );
   }
   else
   {
      tmpArray -> length = 0;
      tmpArray -> data = NULL;
      tmpArray -> ix = -1;
      if ( n>0 )
      {
      // guardar a quantidade de dados
         tmpArray -> length = n;
      // reservar espaco para os dados
         tmpArray -> data = (ints) malloc (n * sizeof(int));
      // definir indicador do primeiro elemento
         tmpArray -> ix = 0;
      } // fim se
   } // fim se
// retornar referencia para espaco reservado
   return ( tmpArray );
} // fim

//__________________________________________________________________________________

/*
 free_int_Array - Dispensar espaco para arranjo com inteiros
 @param tmpArray - referencia para grupo de valores inteiros
*/
void free_int_Array ( ref_int_Array tmpArray )
{
// testar se ha' dados
   if ( tmpArray != NULL )
   {
      free ( tmpArray->data );
      free ( tmpArray );
   } // fim se
} // fim free_int_Array ( )

/**
 Definicao de tipo arranjo bidimensional com inteiros baseado em estrutura
*/
typedef
struct s_int_Matrix
{
   int lines ;
   int columns;
   ints* data ;
   int ix, iy ;
}
int_Matrix;
/**
 Definicao de referencia para arranjo bidimensional com inteiros baseado em estrutura
*/
typedef int_Matrix* ref_int_Matrix;
/**
 new_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
 @return referencia para arranjo com inteiros
 @param lines - quantidade de dados
 @param columns - quantidade de dados
*/
ref_int_Matrix new_int_Matrix ( int lines, int columns )
{
// reserva de espaco
   ref_int_Matrix tmpMatrix = (ref_int_Matrix) malloc (sizeof(int_Matrix));
// estabelecer valores padroes
   if ( tmpMatrix != NULL )
   {
      tmpMatrix -> lines = 0;
      tmpMatrix -> columns = 0;
      tmpMatrix -> data = NULL;
   // reservar espaco
      if ( lines>0 && columns>0 )
      {
         tmpMatrix -> lines = lines;
         tmpMatrix -> columns = columns;
         tmpMatrix -> data = malloc (lines * sizeof(ints));
         for ( tmpMatrix -> ix = 0;
         tmpMatrix -> ix < tmpMatrix -> lines;
         tmpMatrix -> ix = tmpMatrix -> ix + 1 )
         {
            tmpMatrix -> data [ tmpMatrix->ix ] = (ints) malloc (columns * sizeof(int));
         } // fim repetir
      } // fim se
      tmpMatrix -> ix = 0;
      tmpMatrix -> iy = 0;
   } // fim se
   return ( tmpMatrix );
} // fim new_int_Matrix ( )
/**
 free_int_Matrix - Dispensar espaco para arranjo com inteiros
 @param tmpMatrix - referencia para grupo de valores inteiros
*/
void free_int_Matrix ( ref_int_Matrix tmpMatrix )
{
// testar se ha' dados
   if ( tmpMatrix != NULL )
   {
      for ( tmpMatrix->ix=0;
      tmpMatrix -> ix < tmpMatrix -> lines;
      tmpMatrix -> ix = tmpMatrix -> ix + 1 )
      {
         free ( tmpMatrix -> data [ tmpMatrix -> ix ] );
      } // fim repetir
      free ( tmpMatrix -> data );
      free ( tmpMatrix );
   } // fim se
} // fim free_int_Matrix ( )

//__________________________________________________________________________________

/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param array - grupo de valores inteiros
*/
void printIntArray ( int_Array array )
{
// mostrar valores no arranjo
   for ( array.ix = 0; array.ix < array.length; array.ix = array.ix + 1 )
   {
   // mostrar valor
      printf ( "%2d: %d\n", array.ix, array.data [ array.ix ] );
   } // fim repetir
} // printIntArray ( )

//__________________________________________________________________________________

/**
 printIntMatrix - Mostrar matrix com valores inteiros.
 @param array - grupo de valores inteiros
*/
void printIntMatrix ( ref_int_Matrix matrix )
{
// mostrar valores na matriz
   for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
   {
      for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
      {
      // mostrar valor
         printf ( "%3d\t", matrix->data [ matrix->ix ][ matrix->iy ] );
      } // fim repetir
      printf ( "\n" );
   } // fim repetir
} // printIntArray ( )

//__________________________________________________________________________________

/**
 IO_readintMatrix - Ler arranjo bidimensional com valores inteiros.
 @return referencia para o grupo de valores inteiros
*/
ref_int_Matrix IO_readintMatrix ( )
{
// definir dados locais
   int lines = 0;
   int columns = 0;
   int z = 0;
   chars text = IO_new_chars ( STR_SIZE );
// ler a quantidade de dados
   do
   { lines = IO_readint ( "\nlines = " ); }
   while ( lines <= 0 );
   do
   { columns = IO_readint ( "\ncolumns = " ); }
   while ( columns <= 0 );
// reservar espaco para armazenar valores
   ref_int_Matrix matrix = new_int_Matrix ( lines, columns );
// testar se ha' espaco
   if ( matrix->data == NULL )
   {
   // nao ha' espaco
      matrix->lines = 0;
      matrix->columns = 0;
      matrix->ix = 0;
      matrix->iy = 0;
   }
   else
   {
   // ler e guardar valores na matriz
      for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
      {
         for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
         {
         // ler e guardar valor
            strcpy ( text, STR_EMPTY );
            matrix->data [ matrix->ix ][ matrix->iy ]
               = IO_readint ( IO_concat (
               IO_concat ( IO_concat ( text, IO_toString_d ( matrix->ix ) ), ", " ),
               IO_concat ( IO_concat ( text, IO_toString_d ( matrix->iy ) ), " : " ) ) );
         } // fim repetir
         printf ( "\n" );
      } // fim repetir
   } // fim se
// retornar dados lidos
   return ( matrix );
} // IO_readintMatrix ( )

//_______________________________________________________________________________________________

/**
 fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros.
 @param fileName - nome do arquivo
 @param matrix - grupo de valores inteiros
*/
void fprintIntMatrix ( chars fileName, ref_int_Matrix matrix )
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "wt" );
// testar se ha' dados
   if ( matrix == NULL )
   {
      printf ( "\nERRO: Nao ha' dados." );
   }
   else
   {
   // gravar quantidade de dados
      fprintf ( arquivo, "%d\n", matrix->lines );
      fprintf ( arquivo, "%d\n", matrix->columns );
   // gravar valores no arquivo
      for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
      {
         for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
         {
         // gravar valor
            fprintf ( arquivo, "%d\n", matrix->data [ matrix->ix ][ matrix->iy ] );
         } // fim repetir
      } // fim repetir
   // fechar arquivo
      fclose ( arquivo );
   } // fim se
} // fprintIntMatrix ( )

/**
 freadintMatrix - Ler arranjo bidimensional com valores inteiros.
 @return referencia para o grupo de valores inteiros
 @param fileName - nome do arquivo
*/
ref_int_Matrix freadintMatrix ( chars fileName )
{
// definir dados locais
   ref_int_Matrix matrix = NULL;
   int lines = 0;
   int columns = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
   fscanf ( arquivo, "%d", &lines );
   fscanf ( arquivo, "%d", &columns );
   if ( lines <= 0 || columns <= 0 )
   {
      IO_printf ( "\nERRO: Valor invalido.\n" );
   }
   else
   {
   // reservar espaco para armazenar
      matrix = new_int_Matrix ( lines, columns );
   // testar se ha' espaco
      if ( matrix->data == NULL )
      {
      // nao ha' espaco
         matrix->lines = 0;
         matrix->columns = 0;
         matrix->ix = 0;
         matrix->iy = 0;
      }
      else
      {
      // ler e guardar valores na matriz
         matrix->ix = 0;
         while ( ! feof ( arquivo ) && matrix->ix < matrix->lines )
         {
            matrix->iy = 0;
            while ( ! feof ( arquivo ) && matrix->iy < matrix->columns )
            {
            // guardar valor
               fscanf ( arquivo, "%d", &(matrix->data [ matrix->ix ][ matrix->iy ]) );
            // passar ao proximo
               matrix->iy = matrix->iy+1;
            } // fim repetir
         // passar ao proximo
            matrix->ix = matrix->ix+1;
         } // fim repetir
         matrix->ix = 0;
         matrix->iy = 0;
      } // fim se
   } // fim se
   fclose ( arquivo );
// retornar matriz lida
   return ( matrix );
} // fim freadintMatrix ( )

/**
 copyIntMatrix - Copiar matriz com valores inteiros.
 @return referencia para o grupo de valores inteiros
*/
ref_int_Matrix copyIntMatrix ( ref_int_Matrix matrix )
{
// definir dados locais
   ref_int_Matrix copy = NULL;
   if ( matrix == NULL || matrix->data == NULL )
   {
      IO_printf ( "\nERRO: Faltam dados.\n" );
   }
   else
   {
      if ( matrix->lines <= 0 || matrix->columns <= 0 )
      {
         IO_printf ( "\nERRO: Valor invalido.\n" );
      }
      else
      {
      // reservar espaco
         copy = new_int_Matrix ( matrix->lines, matrix->columns );
      // testar se ha' espaco e dados
         if ( copy == NULL || copy->data == NULL )
         {
            printf ( "\nERRO: Falta espaco." );
         }
         else
         {
         // copiar valores
            for ( copy->ix = 0; copy->ix < copy->lines; copy->ix = copy->ix + 1 )
            {
               for ( copy->iy = 0; copy->iy < copy->columns; copy->iy = copy->iy + 1 )
               {
               // copiar valor
                  copy->data [ copy->ix ][ copy->iy ]
                     = matrix->data [ copy->ix ][ copy->iy ];
               } // fim repetir
            } // fim repetir
         } // fim se
      } // fim se
   } // fim se

// retornar copia
   return ( copy );
} // copyIntMatrix ( )
