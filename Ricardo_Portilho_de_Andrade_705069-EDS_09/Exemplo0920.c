/*
 Exemplo0911 - v0.0. - 19 / 04 / 2020
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
 printDouMatrix - Mostrar arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void printDouMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores na matriz
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
      // mostrar valor
         IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // printDouMatrix ( )

/**
 readDouMatrixP - Ler arranjo bidimensional com valores reais positivos.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void readDouMatrixP ( int lines, int columns, double matrix[][columns] )
{
// definir dados locais
   int x = 0; // linha da matriz
   int y = 0; // coluna da matriz 
   double z = -1; // valor da regiao
   chars text = IO_new_chars ( STR_SIZE );
// ler e guardar valores em arranjo
   for ( x=0; x < lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
      // ler valor
         while ( z < 0 ){
            strcpy ( text, STR_EMPTY );
            z = IO_readdouble ( IO_concat (
               IO_concat ( IO_concat ( text, IO_toString_d ( x ) ), ", " ),
               IO_concat ( IO_concat ( text, IO_toString_d ( y ) ), " : " ) ) );
            if ( z < 0 ){
               printf("ERRO: Valor nao pode ser menor que zero\n");
            }      
         }
      // guardar valor
         matrix [ x ][ y ] = z;
         z = -1; // para entrar na repeticao 
      } // fim repetir
   } // fim repetir
} // readDouMatrixP ( )


/**
 Method01 - Ler uma matriz real e testar se valores são negativos.
*/
void method01 (void)
{
// definir dados
   int lines = 0; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method01 - v0.0" );
// ler dados
   while ( lines <= 0 || columns <= 0 ){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ( lines <= 0 || columns <= 0 )
      {
         IO_println ( "\nERRO: Valor invalido." );
      }
   }
   if ( lines <= 0 || columns <= 0 )
   {
      IO_println ( "\nERRO: Valor invalido." );
   }
   else
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrixP ( lines, columns, matrix );
   // mostrar dados
      IO_printf ( "\n" );
      printDouMatrix ( lines, columns, matrix );
   // gravar dados
      IO_printf ( "\n" );
   } // fim se
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

//____________________________________________________________________________________________________________________
/**
 fprintDouMatrix - Gravar arranjo bidimensional com valores reais.
 @param fileName - nome do arquivo
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void fprintDouMatrix ( chars fileName, int lines, int columns, double matrix[][columns] )
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "wt" );
   int x = 0;
   int y = 0;
// gravar quantidade de dados
   IO_fprintf ( arquivo, "%d\n", lines );
   IO_fprintf ( arquivo, "%d\n", columns );
// gravar valores no arquivo
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
      // gravar valor
         IO_fprintf ( arquivo, "%lf\n", matrix [ x ][ y ] );
      } // fim repetir
   } // fim repetir
// fechar arquivo
   fclose ( arquivo );
} // fprintDouMatrix ( )

/**
 freadMatrixRows - Ler tamanho (linhas) da matriz com valores reais.
 @return quantidade de linhas da matriz
 @param fileName - nome do arquivo
*/
int freadMatrixRows ( chars fileName )
{
// definir dados locais
   int n = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
   ints array = NULL;
// ler a quantidade de dados
   IO_fscanf ( arquivo, "%d", &n );
   if ( n <= 0 )
   {
      IO_println ( "ERRO: Valor invalido." );
      n = 0;
   } // fim se
// retornar dado lido
   return ( n );
} // freadMatrixRows ( )
/**
 freadMatrixColumns - Ler tamanho (colunas) da matriz com valores reais.
 @return quantidade de colunas da matriz
 @param fileName - nome do arquivo
*/
int freadMatrixColumns ( chars fileName )
{
// definir dados locais
   int n = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
   IO_fscanf ( arquivo, "%d", &n );
   IO_fscanf ( arquivo, "%d", &n );
   if ( n <= 0 )
   {
      IO_println ( "ERRO: Valor invalido." );
      n = 0;
   } // fim se
// retornar dado lido
   return ( n );
} // freadMatrixColumns ( )

/**
 freadDouMatrix - Ler arranjo bidimensional com valores reais.
 @param fileName - nome do arquivo
 @param lines - quantidade de valores
 @param columns - quantidade de valores
 @param matrix - grupo de valores inteiros
*/
void freadDouMatrix ( chars fileName, int lines, int columns, double matrix[ ][columns] )
{
// definir dados locais
   int x = 0;
   int y = 0;
   double z = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
   IO_fscanf ( arquivo, "%d", &x );
   IO_fscanf ( arquivo, "%d", &y );
   if ( lines <= 0 || lines > x ||
   columns <= 0 || columns > y )
   {
      IO_println ( "ERRO: Valor invalido." );
   }
   else
   {
   // ler e guardar valores em arranjo
      x = 0;
      while ( ! feof ( arquivo ) && x < lines )
      {
         y = 0;
         while ( ! feof ( arquivo ) && y < columns )
         {
         // ler valor
            IO_fscanf ( arquivo, "%lf", &z );
         // guardar valor
            matrix [ x ][ y ] = z;
         // passar ao proximo
            y = y+1;
         } // fim repetir
      // passar ao proximo
         x = x+1;
      } // fim repetir
   } // fim se
} // freadIntMatrix ( )


/**
 readDouMatrix - Ler arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void readDouMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dados locais
   int x = 0; // linha da matriz
   int y = 0; // coluna da matriz 
   double z = 0; // valor da regiao
   chars text = IO_new_chars ( STR_SIZE );
// ler e guardar valores em arranjo
   for ( x=0; x < lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
      // ler valor
         strcpy ( text, STR_EMPTY );
         z = IO_readdouble ( IO_concat (
               IO_concat ( IO_concat ( text, IO_toString_d ( x ) ), ", " ),
               IO_concat ( IO_concat ( text, IO_toString_d ( y ) ), " : " ) ) );   
      // guardar valor
         matrix [ x ][ y ] = z;
      } // fim repetir
   } // fim repetir
} // readDouMatrix  ( )

/**
 Method02.
*/
void method02 (void)
{
// definir dados
   int lines = 0; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
   int Alines = 0; // linha arquivo
   int Acolumns = 0; // coluna arquivo
// identificar
   IO_id ( "EXEMPLO0920 - Method02 - v0.0" );
// ler dados
   while ( lines <= 0 || columns <= 0 ){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ( lines <= 0 || columns <= 0 )
      {
         IO_println ( "\nERRO: Valor invalido." );
      }
   }
   if ( lines <= 0 || columns <= 0 )
   {
      IO_println ( "\nERRO: Valor invalido." );
   }
   else
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
      double copy [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // gravar dados em arquivo   
      fprintDouMatrix ( "MatrixDouble.TXT", lines, columns, matrix);
   // ler linhas da matriz   
      Alines = freadMatrixRows ( "MatrixDouble.TXT" );
   // ler colunas da matriz    
      Acolumns = freadMatrixColumns ( "MatrixDouble.TXT" );
   // ler o arquivo com a matriz 
      freadDouMatrix ( "MatrixDouble.TXT", Alines, Acolumns, copy );   
   // mostrar dados
      IO_printf ( "\n" );
      printDouMatrix ( lines, columns, copy );
   // gravar dados
      IO_printf ( "\n" );
   } // fim se
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
//____________________________________________________________________________________________________________________
/**
 printDiagPMatrix - Mostrar a diagonal principal de um arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void printDiagPMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores da diagonal principal na matriz
   IO_printf ( "Diagonal principal\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x == y ){
         // mostrar valor da diagonal 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // printDiagPMatrix ( )


/**
 Method03.
*/
void method03 (void)
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method03 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      printDiagPMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );  
} // fim method03 ( )
//____________________________________________________________________________________________________________________
/**
 printDiagSMatrix - Mostrar a diagonal secundaria de um arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void printDiagSMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Diagonal secundaria\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x + y == lines - 1){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // printDiagSMatrix ( )

/**
 Method04.
*/
void method04 (void)
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method04 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      printDiagSMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ()
//____________________________________________________________________________________________________________________
/**
 ValAbaxDPMatrix - Mostrar os valores abaixo da diagonal principal de um arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void ValAbaxDPMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Valores abaixo da diagonal principal\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x > y ){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // ValAbaxDPMatrix ( )


/**
 Method05.
*/
void method05 (void)
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method05 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      ValAbaxDPMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )

//____________________________________________________________________________________________________________________
/**
 ValAcimDPMatrix - Mostrar os valores acima da diagonal principal de um arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void ValAcimDPMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Valores acima da diagonal principal\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x < y ){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // ValAcimDPMatrix ( )

/**
 Method06.
*/
void method06 (void)
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method06 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      ValAcimDPMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
//____________________________________________________________________________________________________________________
/**
 ValAbaxDSMatrix - Mostrar os valores abaixo da diagonal secundaria de um arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void ValAbaxDSMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Valores abaixo da diagonal secundaria\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x + y > lines - 1 ){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // ValAbaxDSMatrix ( )

/**
 Method07.
*/
void method07 (void){
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method07 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      ValAbaxDSMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )
//____________________________________________________________________________________________________________________
/**
 ValAcimDSMatrix - Mostrar os valores acima da diagonal secundaria de um arranjo bidimensional com valores reais.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void ValAcimDSMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Valores acima da diagonal secundaria\n");;
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x + y < lines - 1 ){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
} // ValAcimDSMatrix ( )

/**
 Method08.
*/
void method08 ( )
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method08 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      ValAcimDSMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
//_______________________________________________________________________________________________________________________________________________
/**
 NValAbaixDPMatrix - Verificar se todos os valores abaixo da diagonal principal sao nulos  e mostrar os valores abaixo da diagonal principal.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void NValAbaixDPMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
   int c = 0; // contar quantos valores tem abaixo da diagonal principal
   int cN = 0; // contar quantos sao nulos 
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Valores abaixo da diagonal principal\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x > y ){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
            c = c + 1;
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x > y && matrix [ x ][ y ] == 0){
         // mostrar valor da diagonal secundaria   
            cN = cN + 1;
         }     
      } // fim repetir
   } // fim repetir
 if ( cN == c ){
  printf("Todos os valores abaixo da diagonal principal sao nulos.\n");
 }  
 else{
  printf("Os valores, abaixo da diagonal principal, nao sao, todos, nulos.");
 }  
} // NValAbaixDPMatrix ( )

/**
 Method09.
*/
void method09 ( )
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method08 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      NValAbaixDPMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
//_____________________________________________________________________________________________________________________________________________
/**
 NValAcimDPMatrix - Verificar se todos os valores acima da diagonal principal sao nulos  e mostrar os valores abaixo da diagonal principal.
 @param lines - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void NValAcimDPMatrix ( int lines, int columns, double matrix[][columns] )
{
// definir dado local
   int x = 0;
   int y = 0;
   int c = 0; // contar quantos valores tem abaixo da diagonal principal
   int cN = 0; // contar quantos sao nulos 
// mostrar valores da diagonal secundaria na matriz
   IO_printf ( "Valores acima da diagonal principal\n");
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x < y ){
         // mostrar valor da diagonal secundaria 
            IO_printf ( "%0.2lf\t", matrix [ x ][ y ] );
            c = c + 1;
         }   
         else{
            IO_printf ( "____\t");
         }  
      } // fim repetir
      IO_printf ( "\n" );
   } // fim repetir
   for ( x=0; x<lines; x=x+1 )
   {
      for ( y=0; y<columns; y=y+1 )
      {
         if ( x < y && matrix [ x ][ y ] == 0){
         // mostrar valor da diagonal secundaria   
            cN = cN + 1;
         }     
      } // fim repetir
   } // fim repetir
 if ( cN == c ){
  printf("Todos os valores acima da diagonal principal sao nulos.\n");
 }  
 else{
  printf("Os valores, acima da diagonal principal, nao sao, todos, nulos.");
 }  
} // NValAcimDPMatrix ( )

/**
 Method10.
*/
void method10 ( )
{
// definir dados
   int lines = 1; // linha colocada pelo usuario
   int columns = 0; // coluna colocada pelo usuario
// identificar
   IO_id ( "EXEMPLO0920 - Method08 - v0.0" );
// ler dados
   while ((( lines != columns ) || (columns <= 0))){
      lines = IO_readint ( "\nlines = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ((( lines != columns ) || (columns <= 0)))
      {
         IO_println ( "---------|ERRO: Valor invalido.|-------" );
      }
   }
   if ( lines == columns && columns > 0 )
   {
   // reservar espaco
      double matrix [ lines ][ columns ];
   // ler dados
      readDouMatrix ( lines, columns, matrix );
   // mostrar matriz   
      printDouMatrix ( lines, columns, matrix );   
   // mostrar diagonal principal    
      NValAcimDPMatrix ( lines, columns, matrix);
   } // fim se
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )
//_________________________________________________________________________________________________________________________________________

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main (void)
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO0701 - Programa - v0.0" );
   
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Criar uma matriz real." );
      IO_println ( " 2 - Criar uma matriz real e gravar em um arquivo." );
      IO_println ( " 3 - Mostrar somente os valores na diagonal principal." );
      IO_println ( " 4 - Mostrar somente os valores na diagonal secundária. " );
      IO_println ( " 5 - Mostrar somente os valores abaixo da diagonal principal." );
      IO_println ( " 6 - Mostrar somente os valores acima da diagonal principal." );
      IO_println ( " 7 - Mostrar somente os valores abaixo da diagonal secundaria." );
      IO_println ( " 8 - Mostrar somente os valores acima da diagonal secundaria." );
      IO_println ( " 9 - Testar se nao sao todos nulos os valores abaixo da diagonal principal." );
      IO_println ( "10 - Testar se nao sao todos nulos os valores acima da diagonal principal." );
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
0.1       (OK)      01.      * O programa mostra uma matriz.
0.2       (OK)      01.      * O programa cria uma matriz 2x2 com valores colocados pelo usuario.
0.3       (OK)      01.      * O programa cria uma matriz com a dimensao e o valor escolhido e grava o mesmo em um arquivo.
0.4       (OK)      01.      * O programa le um arquivo com uma matriz.
0.5       (OK)      01.      * Copia a matriz lida de um arquivo.
0.6       (OK)      01.      * Transpoe valores em matriz.
0.7       (OK)      01.      * Testar se e' matriz identidade.
0.8       (OK)      01.      * Testar se matrizes sao iguais.
0.9       (OK)      01.      * Subtrai os valores de uma matriz.
1.0       (OK)      01.      * 
Exercicios
1.1       (OK)      01.      * Criar uma matriz real.
1.2       (OK)      01.      * Criar uma matriz real e gravar em um arquivo.
1.3       (OK)      01.      * Mostrar somente os valores na diagonal principal.
1.4       (OK)      01.      * Mostrar somente os valores na diagonal secundária. 
1.5       (OK)      01.      * Mostrar somente os valores abaixo da diagonal principal.
1.6       (OK)      01.      * Mostrar somente os valores acima da diagonal principal.
1.7       (OK)      01.      * Mostrar somente os valores abaixo da diagonal secundária.
1.8       (OK)      01.      * Mostrar somente os valores acima da diagonal secundária.
1.9       (OK)      01.      * Testar se não são todos nulos os valores abaixo da diagonal principal.
2.0       (OK)      01.      * Testar se não são todos nulos os valores acima da diagonal principal.

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

---------------------------------------------- previsao de testes------------------|------------------|
Exemplos                                                                           |Validacao de teste| 
*EXEMPLO0901                                                                       |------------------|
a.) 1 -> | 1  2  3 |----------------------------------------------------------->(OK)
         | 4  5  6 |                                                               |
         | 7  8  9 |                                                               |
                                                                                   |
*EXEMPLO0902                                                                       |
a.) 1, 2, 3, e 4 -> | 1  2 |--------------------------------------------------->(OK)
                    | 3  4 |                                                       |
                                                                                   |
*EXEMPLO0903                                                                       |
a.) 2x2 -> {1, 2, 3 e 4 }------------| 1  2 |---------------------------------->(OK)
                                     | 3  4 |                                      |
                                                                                   |
*EXEMPLO0904                                                                       |
a.) MATRIX1.TXT -> | 1  2 |---------------------------------------------------->(OK)
                   | 3  4 |                                                        | 
                                                                                   |
*EXEMPLO0905                                                                       |
a.) MATRIX1.TXT -> |Original|------>| Copia |---------------------------------->(OK)
                   | 1    2 |       | 1   2 |                                      |
                   | 3    4 |       | 3   4 |                                      |
                                                                                   |
*EXEMPLO0906                                                                       |
a.)| Matrix1 | ->| Matrix2 |---| Matrix3 |->| Matrix4 |------------------------>(OK)
   | 1     0 |   | 1     0 |   | 1  2  3 |  |  1   4  |                            |
   | 0     1 |   | 0     1 |   | 4  5  6 |  |  2   5  |                            |
                                            |  3   6  |                            | 
                                                                                   |
*EXEMPLO0907                                                                       |
a.)      | Matrix1      |-| Matrix2             |-|  Matrix3     |------------->(OK)
         |  0   0       | | 1  2  3             | |   1	  0     |                 |
         |  0   0       | | 4  5  6             | |   0    1     |                 |
         |(matrix1) = 0 | |ERRO: Valor invalido.| |(matrix3) = 1 |                 |
                          |(matrix2) = 1        |                                  |
                                                                                   |
*EXEMPLO0908                                                                       |
a.)      | Matrix1      |-| Matrix2              |----------------------------->(OK)
         |  0   0       | | 1  2                 |                                 |
         |  0   0       | | 4  5                 |                                 |
                          |(matrix1, matrix2) = 0|                                 |
                                                                                   |
                                                                                   |                                                                                   |
*EXEMPLO0909                                                                       |
a.)      | Matrix1      |- + -| Matrix2           |-|  Matrix3     |----------->(OK)
         |  1   2       |     | 1 *(-2)  0 *(-2)  | |  -1	 2     |               |
         |  3   4       |     | 0 *(-2)  1 *(-2)  | |   3    2     |               |
                                                                                   |                                                                                   |
*EXEMPLO0910                                                                       |
a.)      | Matrix1 |- * -| Matrix2 |-|  Matrix3    |--------------------------->(OK)
         |  1   2  |     | 1   0   | |   1   2     |                               |
         |  3   4  |     | 0   1   | |   3   4     |                               |
                                                                                   |                                                                                   |
___________________________________________________________________________________|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                         |
                                                                                   |
*EXEMPLO0911                                                                       |
a.) 3x3 -> { 1, 2, 3, 4, 5, 6, 7, 8, 9}--|  Matriz |--------------------------->(OK)
                                         | 1  2  3 |                               |
                                         | 4  5  6 |                               |
                                         | 7  8  9 |                               |
                                                                                   |
*EXEMPLO0912                                                                       |                                                                                   |
a.) 3x3 -> { 1, 2, 3, 4, 5, 6, 7, 8, 9}-(MatrixDouble.TXT)-|  Matriz |--------->(OK)
                                                           | 1  2  3 |             |
                                                           | 4  5  6 |             |
                                                           | 7  8  9 |             |                                                                                   |
*EXEMPLO0913                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |--------------------------------------->(OK)
            | 1  2  3 |    | 1   _   _ |                                           |  
            | 4  5  6 |    | _   5   _ |                                           |
            | 7  8  9 |    | _    _  6 |                                           |
                                                                                   |
*EXEMPLO0914                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |--------------------------------------->(OK)
            | 1  2  3 |    | _   _   3 |                                           |  
            | 4  5  6 |    | _   5   _ |                                           |
            | 7  8  9 |    | 7    _  _ |                                           |
                                                                                   |
*EXEMPLO0915                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |--------------------------------------->(OK)
            | 1  2  3 |    | _   _   _ |                                           |  
            | 4  5  6 |    | 4   _   _ |                                           |
            | 7  8  9 |    | 7   8   _ |                                           |
                                                                                   |
*EXEMPLO0916                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |--------------------------------------->(OK)
            | 1  2  3 |    | _   2   3 |                                           |  
            | 4  5  6 |    | _   _   6 |                                           |
            | 7  8  9 |    | _   _   _ |                                           |
                                                                                   |
*EXEMPLO0917                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |--------------------------------------->(OK)
            | 1  2  3 |    | _   _   _ |                                           |  
            | 4  5  6 |    | _   _   6 |                                           |
            | 7  8  9 |    | _   8   9 |                                           |
                                                                                   |
*EXEMPLO0918                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |--------------------------------------->(OK)
            | 1  2  3 |    | 1   2   _ |                                           |  
            | 4  5  6 |    | 4   _   _ |                                           |
            | 7  8  9 |    | _   _   _ |                                           |
                                                                                   |
*EXEMPLO0919                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |-(Os valores, abaixo da diagonal           |
            | 1  2  3 |    | _   _   _ |  principal, nao sao, todos, nulos.)--->(OK)
            | 4  5  6 |    | 4   _   _ |                                           |  
            | 7  8  9 |    | 7   8   _ |                                           |
                                                                                   |
*EXEMPLO0920                                                                       |
a.) 3x3 --->|  Matriz |--->| DiagonalP |-(Os valores, acima da diagonal            |
            | 1  2  3 |    | _   2   3 |  principal, nao sao, todos, nulos.)--->(OK)
            | 4  5  6 |    | _   _   6 |                                           |  
            | 7  8  9 |    | _   _   _ |                                           |
                                                                                   |                                                                                   |
                                                                                   |                                                                                   |                                                                                   |                                                                                   |                                                                                   |                                                                                   |                                                                                   |
___________________________________________________________________________________|                                                                                   
*/