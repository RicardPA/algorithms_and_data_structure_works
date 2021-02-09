/*
 Exemplo1001 - v0.0. - 19 / 04 / 2020
 Author: Ricardo Portilho de Andrade 
*/

// dependencias
#include "io.h" // para definicoes proprias
// ----------------------------------------------- definicoes globais

/**
 Method00 - nao faz nada.
*/
void method00 (void){
// nao faz nada
} // fim method00 ( )

//____________________________________________________________________________________________________________________

/*
 ArrayRandom - criar arranjo com valores aleatorios
 @param I - Limite inicial
 @param F - Limite final 
 @param Q - Quantidade 
*/
int_Array ArrayRandom ( chars fileName, int I, int F, int Q)
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "wt"); //arquivo para gravar 
   int aleatory = 0; // numero aleatorio
   int c = 0; // controle
   chars text = IO_new_chars ( STR_SIZE );
   static int_Array array;
// ler a quantidade de dados
   do
   {
      array.length = Q;
      fprintf(arquivo, "%d\n", Q); 
   }
   while ( array.length <= 0 );
// reservar espaco para armazenar
   array.data = IO_new_ints ( array.length );
// testar se ha' espaco
   if ( array.data == NULL )
   {
      array.length = 0; // nao ha' espaco
   }
   else
   {
   // Armazenar valores sorteados 
      for ( array.ix = 0; array.ix < array.length; array.ix = array.ix + 1 )
      {
               // gerar numero aleatorio
         aleatory = I + rand() / (RAND_MAX / (F - I + 1) + 1);  
               // armazenar
         array.data [ array.ix ] =  aleatory;
               // colocar/ gravar no arquivo
         fprintf(arquivo, "%d\n", aleatory); 
      } // fim repetir
   } // fim se
// retornar arranjo
   printIntArray( array ); // mostrar arranjo para o usuario
   fclose(arquivo); // fechar arquivo
   return ( array ); // retornar o arranjo criado caso seja necessario
}

/**
 Method01.
*/
void method01 (void){
// definir valores 
   int I = 0; // limite inicial
   int F = 0; // limite final 
   int Q = 0; // quantidade de valores
   int erro = 0;// verificador de erros
// identificar
   IO_id ( "EXEMPLO1020 - Method01 - v0.0" );
// valores referentes ao limite 
   while ( Q <= 0 ||  F <= I  )
   {
      if ( F <= I && erro > 0 ) // teste de possivel erro
      {
         IO_printf("-------|ERRO: O valor do limite superior nao pode menor ou igual ao limite inferior.|----------\n");// falar para o usuario
      }
      if ( Q <= 0 && erro > 0 ) // teste de possivel erro
      {
         IO_printf("-------|ERRO: A quantidade nao pode menor ou igual a zero.|----------\n");// falar para o usuario
      }
      IO_printf("Coloque o valor referente ao limite inferior: ");// falar para o usuario
      IO_scanf("%d", &I);
      IO_printf("Coloque o valor referente ao limite superior: ");// falar para o usuario
      IO_scanf("%d", &F);
      IO_printf("\nColoque o valor referente a quantidade de valores aleatorios: ");// falar para o usuario
      IO_scanf("%d", &Q);   
      erro = erro + 1; // verificar se houve erro
   } 
   // Metodo auxiliar
   ArrayRandom ( "Dados.txt",I, F, Q);  // criar arranjo aleatorio 
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

//____________________________________________________________________________________________________________________

/**
 fscanintArray - Ler arranjo com valores inteiros de um arquivo.
 @return arranjo com valores lidos
*/
int_Array fscanintArray ( chars fileName )
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "rt" );
   static int_Array array;
// ler a quantidade de dados
   do
   {
      fscanf(arquivo, "%d", &array.length );
   }
   while ( array.length <= 0 );
// reservar espaco para armazenar
   array.data = IO_new_ints ( array.length );
// testar se ha' espaco
   if ( array.data == NULL )
   {
      array.length = 0; // nao ha' espaco
   }
   else
   {
   // ler e guardar valores em arranjo
      for ( array.ix = 0; array.ix < array.length; array.ix = array.ix + 1 )
      {
      // ler valor do arquivo 
         fscanf(arquivo, "%d", &array.data [ array.ix ]);
      } // fim repetir
   } // fim se
   fclose ( arquivo );   
// retornar arranjo
   return ( array );
} // fscanintArray ( )

/*
 procurar - procura um valor especifico no arranjo
 @param array - arranjo no qual o numero pode ser encontrado 
*/
void procurar( int_Array array, int n ){
// definir dados 
   int p = 0; // valor da posicao
   // procurar dados 
   for ( array.ix = 0; array.ix < array.length; array.ix = array.ix + 1 )
   {
      // ler valor do arquivo 
      p = array.data [ array.ix ];
      if (p == n ){
         printf("Valor (%d) encontrado na posicao (%d)\n", p, array.ix);
      }
   } // fim repetir
}

/**
 Method02.
*/
void method02 (void){
// definir dados
   int_Array array;
   int n = 0; // valor que o usuario que encontrar 
// identificar
   IO_id ( "EXEMPLO1010 - Method02 - v0.0" );
// perguntar para o usuario   
   while ( n <= 0 ){
      printf("Coloque o valor que voce quer encontrar: ");
      scanf("%d", &n);
   // printf("\n");
   }
// ler dados
   array = fscanintArray ("Dados.txt");
// Verificar se dados sao encontrados 
   // IO_printf ( "\n" );
   procurar ( array, n );
// printIntArray ( array ); // teste para verificar os velores 
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
//____________________________________________________________________________________________________________________

/**
 fprintIntArray - Gravar arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param array - grupo de valores inteiros
*/
void compArray ( int_Array array1, int_Array array2 )
{
   if(array1.length == array2.length){
      printf("Os arranjos tem o mesmo tamanho\n");
      for ( array1.ix = 0; array1.ix < array1.length; array1.ix = array1.ix + 1 )
      {
      // verificar valores diferentes
         if ( array1.data [ array1.ix ] != array2.data [ array1.ix ] ){
            printf("Os valores da posicao (%d) sao diferentes [(%d)><(%d)]\n", array1.ix, array1.data [ array1.ix ], array2.data [ array1.ix ]);
         }
      } // fim repetir
   }
   else{
      printf("Os arranjos tem tamanho diferente\n");
   }
} // compArray ( )

/**
 Method03.
*/
void method03 (void){
// definir dados
   int_Array array1;
   int_Array array2;
// identificar
   IO_id ( "EXEMPLO0803 - Method03 - v0.0" );
// gravar dados no arranjo 
   array1 = fscanintArray ("Dados1.txt");
   array2 = fscanintArray ("Dados2.txt");
// Verificar se arranjos sao iguais
   compArray( array1, array2);
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

//____________________________________________________________________________________________________________________
/*
 Somar - Soma dois arranjos com valores inteiros 
 @param - arranjos a serem somados 
 @return - retornar a matriz soma 
*/
int_Array Somar( int_Array array1, int_Array array2 ){
// definir array a ser retornado 
   static int_Array soma;
   int k = 2; // constante 
// colocar a mesma quantidade de espaco
   do
   {
      soma.length = array1.length;
   }
   while ( soma.length <= 0 );
// reservar espaco para armazenar
   soma.data = IO_new_ints ( soma.length );
// testar se ha' espaco
   if ( soma.data == NULL )
   {
      soma.length = 0; // nao ha' espaco
   }
   else
   {
   // ler e guardar valores em arranjo
      for ( array1.ix = 0; array1.ix < array1.length; array1.ix = array1.ix + 1 )
      {
      // ler valor do arquivo 
         soma.data [ array1.ix ] = array1.data [ array1.ix ] + (array2.data [ array1.ix ] * k);
      } // fim repetir
   } // fim se  
// retornar arranjo
   return ( soma );

}

/**
 Method04.
*/
void method04 (void){
// definir dados
   int_Array array1;
   int_Array array2;
   int_Array soma;      
// identificar
   IO_id ( "EXEMPLO1010 - Method04 - v0.0" );
// pegar os dois arranjos 
   array1 = fscanintArray ("Dados1.txt");
   array2 = fscanintArray ("Dados2.txt");
// somar
   if ( array1.length == array2.length ){
      soma = Somar( array1, array2 );   
   }
   else{
      printf("A soma nao pode ser feita, pois os arranjos tem tamanho diferente");
   }
// mostrar dados
   IO_printf ( "\n" );
   printIntArray ( soma );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )

//____________________________________________________________________________________________________________________

/**
 ArranjoOrden - verificar se arranjo esta ordenado em foma crescente 
 @return result - resultado da verificacao
*/
bool ArranjoOrden ( int_Array array )
{
   bool result = true;
   int uV = 0; // ultimo valor lido 
   for ( array.ix = 0; array.ix < array.length; array.ix = array.ix + 1 )
   {
      if ( uV > array.data [ array.ix ] ){
         result = false;
      }
      uV = array.data [ array.ix ]; 
   } // fim repetir
   return (result);
} 
/**
 Method05.
*/
void method05 (void){
// definir dados
   int_Array array1; // arranjo sem tamanho definido
// identificar
   IO_id ( "EXEMPLO1010 - Method05 - v0.0" );
// pegar os dois arranjos 
   array1 = fscanintArray ("Dados1.txt");
// ver se array esta na ordem crescente 
   if  (ArranjoOrden(array1)){
      printf("O arranjo esta na ordem crescente");
   }
   else{
      printf("O arranjo nao esta na ordem crescente");
   }
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )
//____________________________________________________________________________________________________________________
/*
  transpM - Transpoem a matriz 
  @param - Matriz que sera transposta 
  @return - Matriz transposta 
*/
ref_int_Matrix transpM( ref_int_Matrix matrix ){
// reservar espaco para armazenar valores
   ref_int_Matrix matrix2 = new_int_Matrix ( matrix->columns, matrix->lines );
// testar se ha' dados
   if ( matrix2 -> data == NULL )
   {
   // nao ha' espaco
      matrix2->lines = 0;
      matrix2->columns = 0;
      matrix2->ix = 0;
      matrix2->iy = 0;
   }
   else
   {
   // gravar quantidade de dados
      matrix2->lines = matrix->columns;
      matrix2->columns = matrix->lines;
   // gravar valores no arquivo
      for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
      {
         for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
         {
            matrix2->data [ matrix->iy ][ matrix->ix ] = matrix->data [ matrix->ix ][ matrix->iy ];
         } // fim repetir
      } // fim repetir
   }
   return (matrix2);
}


/**
 Method06.
*/
void method06 (void){
// definir dados 
   ref_int_Matrix matrix = freadintMatrix("MATRIX1.TXT");
   ref_int_Matrix matrix2 = NULL;
// identificar
   IO_id ( "EXEMPLO1010 - Method06 - v0.0" );
// executar o metodo auxiliar
// transpor a matriz
   matrix2 = transpM( matrix );
   printf("Matriz Normal\n");
   printIntMatrix ( matrix );  
   printf("Matriz Transposta\n");
   printIntMatrix ( matrix2 );   
// reciclar espaco
   free_int_Matrix ( matrix );
   free_int_Matrix ( matrix2 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
//____________________________________________________________________________________________________________________
/*
  zeroMatrix - verificar se matriz e' composta somente por valores nulos 
  @param - matriz que sera' testada 
  @return - valor booleano que respondera  
*/
bool zaroMatrix (ref_int_Matrix matrix){
// definir dados 
   bool result = false;
   int c = 0; // contador 
   for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
   {
      for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
      {
         if (matrix->data [ matrix->ix ][ matrix->iy ] == 0){
            c = c + 1;
         }
      } // fim repetir
   } // fim repetir
   if ( c == (matrix->lines * matrix->columns)){
      result = true;
   }
   return (result);
}

/**
 Method07.
*/
void method07 (void){
// definir dados 
   ref_int_Matrix matrix = freadintMatrix("MATRIX1.TXT");
// identificar
   IO_id ( "EXEMPLO1010 - Method06 - v0.0" );
// executar o metodo auxiliar
// transpor a matriz
   if  (zaroMatrix(matrix)){
      printf("A matrix e' composta somente de zero\n");
   }
   else{
      printf("A matrix nao e' composta somente de zero\n");
   }
// reciclar espaco
   free_int_Matrix ( matrix );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )

//____________________________________________________________________________________________________________________
/*
  compMatrix - verificar se matrize sao diferentes 
  @param - matrizes que serao testadas 
  @return - valor booleano que respondera  
*/
bool compMatrix( ref_int_Matrix matrix, ref_int_Matrix matrix2){
// definir dados 
   bool result = true;
   if ( matrix->lines * matrix->columns != matrix2->lines * matrix2->columns ){
      result = false;
   }
   return (result);
}

/**
 Method08.
*/
void method08 (void){
// definir dados 
   ref_int_Matrix matrix = freadintMatrix("MATRIX1.TXT");
   ref_int_Matrix matrix2 = freadintMatrix("MATRIX2.TXT");
// identificar
   IO_id ( "EXEMPLO1010 - Method06 - v0.0" );
// executar o metodo auxiliar
// comparar matrizes 
   if (compMatrix(matrix, matrix2)){
      printf("As matrizes tem o mesmo tamanho");
   }
   else{
      printf("As matrizes nao tem o mesmo tamanho");
   }
// reciclar espaco
   free_int_Matrix ( matrix );
   free_int_Matrix ( matrix2 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )
//____________________________________________________________________________________________________________________
/*
 SomarMat - Soma duas matrizes com o mesmo tamanho 
 @param - duas matrizes que serao testadas 
 @return - soma das matrizes colocadas
*/
ref_int_Matrix SomarMat(ref_int_Matrix matrix, ref_int_Matrix matrix2){
// reservar espaco para armazenar valores
   ref_int_Matrix soma = new_int_Matrix ( matrix->lines, matrix->columns );
// testar se ha' dados
   if ( soma == NULL || !(compMatrix(matrix, matrix2)))
   {
   // nao ha' espaco
      matrix2->lines = 0;
      matrix2->columns = 0;
      matrix2->ix = 0;
      matrix2->iy = 0;
   }
   else
   {
   // gravar quantidade de dados
      soma->lines = matrix->lines;
      soma->columns = matrix->columns;
   // gravar valores no arquivo
      for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
      {
         for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
         {
            soma->data [ matrix->ix ][ matrix->iy ] = 
               matrix2->data [ matrix->ix ][ matrix->iy ] + 
               matrix->data [ matrix->ix ][ matrix->iy ];
         } // fim repetir
      } // fim repetir
   }
   return (soma);
}

/**
 Method09.
*/
void method09 (void){
// definir dados 
   ref_int_Matrix matrix = freadintMatrix("MATRIX1.TXT");
   ref_int_Matrix matrix2 = freadintMatrix("MATRIX2.TXT"); 
// identificar
   IO_id ( "EXEMPLO1010 - Method06 - v0.0" );
// executar o metodo auxiliar
// comparar matrizes 
   if (compMatrix(matrix, matrix2)){
      ref_int_Matrix soma = SomarMat(matrix, matrix2);
      // mostrar a soma 
      printIntMatrix ( soma );
      free_int_Matrix ( soma ); 
   }
   else{
      printf("ERRO: As matrizes nao tem o mesmo tamanho");
   }   
// reciclar espaco
   free_int_Matrix ( matrix );
   free_int_Matrix ( matrix2 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )

//_______________________________________________________________________________________________________________________________________________
/*
  MultMatrix - multiplicar duas matrizes 
  @param - duas matrizes diferentes 
  @return - resultado da multiplicacao  
*/
ref_int_Matrix MultMat(ref_int_Matrix matrix, ref_int_Matrix matrix2){
// reservar espaco para armazenar valores
   ref_int_Matrix mult = new_int_Matrix ( matrix->lines, matrix2->columns );
   int soma = 0;
   int z    = 0;
   int x    = 0;
   int y    = 0;
  /*
   printIntMatrix ( matrix );
   printf("\n--------------------------------------------------------\n"); 
   printIntMatrix ( matrix2 ); 
   printf("\n--------------------------------------------------------\n"); 
 */
// testar se ha' dados
   if ( mult -> data == NULL && 
      ( matrix -> lines == matrix2 -> columns ) )
   {
   // nao ha' espaco
      mult = NULL;
   }
   else
   {
   // gravar quantidade de dados
      mult->lines = matrix->lines;
      mult->columns = matrix2->columns;
   // gravar valores no arquivo
      for ( x = 0; x < mult -> lines; x = x + 1 )
      {
         // para cada coluna
         for ( y = 0; y < mult -> columns; y = y + 1 )
         {
             // calcular um elemento (soma de produtos)
            soma = 0;
            for ( z = 0; z < matrix -> columns; z = z + 1 )
            {
               soma = 
                  soma + 
                  (matrix->data [ x ][ z ] * 
                  matrix2->data [ z ][ y ]);
            } // end for
             // guardar o resultado   
            mult -> data [ x ][ y ] = soma;
         } // end for
      } // end for
   }
   return (mult);
}

/**
 Method10.
*/
void method10 (void){
// definir dados 
   ref_int_Matrix matrix = freadintMatrix("MATRIX3.TXT");
   ref_int_Matrix matrix2 = freadintMatrix("MATRIX4.TXT");
   ref_int_Matrix mult = NULL;
// identificar
   IO_id ( "EXEMPLO1010 - Method06 - v0.0" );
// executar o metodo auxilares
// comparar matrizes 
   if (matrix->columns == matrix2->lines){
      mult = MultMat(matrix, matrix2);
      // mostrar a soma 
      // printIntMatrix ( matrix ); // para teste 
      // printIntMatrix ( matrix2 ); // para teste 
      printIntMatrix ( mult ); 
   }
   else{
      printf("ERRO: As matrizes nao tem o mesmo tamanho");
   }   
// reciclar espaco
   free_int_Matrix ( matrix );
   free_int_Matrix ( matrix2 );
   free_int_Matrix ( mult );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )



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
      IO_println ( " 1 - Criar arranjo com valores aleatorios " );
      IO_println ( " 2 - Procurar um valor em um arranjo" );
      IO_println ( " 3 - Comparar dois arranjos" );
      IO_println ( " 4 - Somar dois arranjos" );
      IO_println ( " 5 - Diser de arranjo esta em ordem crescente" );
      IO_println ( " 6 - Transpor uma matriz" );
      IO_println ( " 7 - Dizer se uma matriz so comtem valores nulos " );
      IO_println ( " 8 - Dizer se duas matrizes sao iguais" );
      IO_println ( " 9 - Somar duas matrizes" );
      IO_println ( "10 - Multiplicar duas matrizes" );
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
0.1       (OK)      01.      * O programa cria um arranjo com cinco posicoes e o mostra para o usuario.
0.2       (OK)      01.      * O programa cria um arranjo com os dados colocados pelo usuario.
0.3       (OK)      01.      * O programa cria um arquivo com os dados de um arranjo criado pelo usuario.  
0.4       (OK)      01.      * O programa le um arquivo com dados de um arranjo e mostra o arranjo para o usuario.
0.5       (OK)      01.      * O programa le um arquivo com dados de um arranjo e cria um arranjo que é a copia desse arranjo que esta no arquivo.
0.6       (OK)      01.      * O programa mostra uma matriz predefinida. 
0.7       (OK)      01.      * O programa cria uma matriz com as dimensoes e dados colocados pelo usuario.
0.8       (OK)      01.      * O programa grava uma matriz que é criada pelo usuario.
0.9       (OK)      01.      * O programa le uma matriz de uma arquivo.
1.0       (OK)      01.      * O programa faz uma copia de matriz com valores inteiros.
Exercicios
1.1       (OK)      01.      * Criar arranjo com valores aleatorios 
1.2       (OK)      01.      * Procurar um valor em um arranjo 
1.3       (OK)      01.      * Comparar dois arranjos 
1.4       (OK)      01.      * Somar dois arranjos 
1.5       (OK)      01.      * Diser de arranjo esta em ordem crescente 
1.6       (OK)      01.      * Transpor uma matriz 
1.7       (OK)      01.      * Dizer se uma matriz so comtem valores nulos 
1.8       (OK)      01.      * Dizer se duas matrizes sao iguais 
1.9       (OK)      01.      * Somar duas matrizes 
2.0       (OK)      01.      * Multiplica duas matrizes

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

----------------------------------------------|PREVISÃO DE TESTES|-----------------|------------------|
EXEMPLOS                                                                           |Validacao de teste| 
*EXEMPLO1001                                                                       |------------------|
a.) 5 -> { 1, 2, 3, 4, 5 }----------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO1002                                                                       |
a.) 5 -> [ 5, 4, 3, 2, 1 ] -> { 5, 4, 3, 2, 1}--------------------------------->(OK)
                                                                                   |
*EXEMPLO1003                                                                       |
a.) 5 -> [ 2, 4, 6, 8, 10] -> |File| -> { 5, 2, 4, 6, 8, 10 }------------------>(OK)
                                                                                   |
*EXEMPLO1004                                                                       |
a.) |File| -> [ 5, 2, 4, 6, 8, 10 ] -> [ 2, 4, 6, 8, 10]----------------------->(OK)
                                                                                   |
*EXEMPLO1005                                                                       |
a.) |Original| -> [ 2, 4, 6, 8, 10 ] -> |Copia| -> { 2, 4, 6, 8, 10 }---------->(OK)
                                                                                   |
*EXEMPLO1006                                                                       |
a.) 3x3 -> | 1 2 3 |----------------------------------------------------------->(OK)
           | 3 4 5 |                                                               |
           | 6 7 8 |                                                               | 
                                                                                   |
*EXEMPLO1007                                                                       |
a.) 2x3 -> | 1 2 3 |----------------------------------------------------------->(OK)
           | 4 5 6 |                                                               |
                                                                                   |
*EXEMPLO1008                                                                       |
a.) 2x3 -> { 7, 8, 9, 4, 5, 6 } -> |File| -> [ 7, 8, 9, 4, 5, 6 ]-------------->(OK)
                                                                                   |
*EXEMPLO1009                                                                       |
a.) |File| -> [ 7, 8, 9, 4, 5, 6 ] -> | 7 8 9 |-------------------------------->(OK)
                                      | 4 5 6 |                                    |
*EXEMPLO1010                                                                       |
a.) |Original| -> | 7 8 9 | -> |Copia| -> | 7 8 9 |---------------------------->(OK)
                  | 4 5 6 |               | 4 5 6 |                                |
                                                                                   |
-|Exercício|-----------------------------------------------------------------------|
                                                                                   |
*EXEMPLO1011                                                                       |
a.) (0,60) -> 5 -> | 0, 34, 11, 49, 35 |--------------------------------------->(OK)
                                                                                   |
*EXEMPLO1012                                                                       |
a.) 11 -> [ 0, 34, 11, 49, 35 ] -> |Valor (11) encontrado na posicao (2)|------>(OK)
                                                                                   |
*EXEMPLO1013                                                                       |
a.) "Dados1.txt" && "Dados2.txt" -> |Os arranjos tem o mesmo tamanho|---------->(OK)
                                                                                   |
*EXEMPLO1014                                                                       |
a.) "Dados1.txt" + "Dados2.txt" -> | 50, 103, 51, 179, 159 |------------------->(OK)
                                                                                   |
*EXEMPLO1015                                                                       |
a.) "Dados1.txt" -> |O arranjo nao esta na ordem crescente|-------------------->(OK)
                                                                                   |
*EXEMPLO1016                                                                       |
a.) "MATRIX1.TXT" -> | 7 8 9 | -> | 7 4 |-------------------------------------->(OK)
                     | 4 5 6 |    | 4 5 |                                          |
                                  | 9 6 |                                          |
                                                                                   |
*EXEMPLO1017                                                                       |
a.) "MATRIX1.TXT" -> |A matrix nao e' composta somente de zero|---------------->(OK)
                                                                                   |
*EXEMPLO1018                                                                       |
a.) "MATRIX1.TXT" && "MATRIX2.TXT" -> |As matrizes tem o mesmo tamanho|-------->(OK)
                                                                                   |
*EXEMPLO1019                                                                       |
a.) "MATRIX1.TXT" + "MATRIX2.TXT" -> | 10 10 10 | ----------------------------->(OK)
                                     | 10 10 10 |                                  |
                                                                                   |
*EXEMPLO1020                                                                       |
a.) "MATRIX1.TXT" + "MATRIX2.TXT" -> | 28 28 | -------------------------------->(OK)
                                     | 49 68 |                                     |
                                                                                   |                                                                                   |
                                                                                   |                                                                                   
___________________________________________________________________________________|                                                                                   
*/