/*
 Exemplo0820 - v0.0. - 15 / 05 / 2020
 Author: Ricardo Portilho de Andrade 
*/
// dependencias
#include "io.h" // para definicoes proprias

//----------------------------------------------------------------------------------------------------------------

/**
 Method00 - nao faz nada.
*/
void method00 (void)
{
// nao faz nada
} // fim method00 ( )
//____________________________________________________|Principais Funcoes|________________________________________________________________
/*
 NumbersArrayFile - Descobrir quantidade de numeros de um arranjo
 @param fileName - Nume do arquivo que sera lido
*/
int NumbersArrayFile (chars fileName)
{
 FILE* arquivo = fopen(fileName, "rt"); 
 int x = 0; 
 fscanf(arquivo, "%d", &x); //quantidade de valores de um arranjo
 fclose(arquivo);
 // IO_printf("Teste: quantidade = %d\n", x);
 return (x);
}

/*
 ArmazenadorA - Retornar array obtido
 @param fileName - nome do arquivo que sera lido  
*/
int * ArmazenadorA (chars fileName)
{
 // definir dados 
 FILE* arquivo = fopen(fileName, "rt");// abrir arquivo
 int x = 0; // valor da posicao
 int p = 0; // posicionador  
 int q = 0; // quantidade de valores que serao lidos 
 fscanf(arquivo, "%d", &q); // obter quantidade 
 static int a ['q']; // fazer um arranjo com quantidade desejada 
 for (p = 0; p < q; p = p + 1)
 {
  fscanf(arquivo, "%d", &x); // obter valor da posicao
  a[p] = x; // gravar valor na posicao 
 }
 fclose(arquivo);
 return (a);
}
//____________________________________________________________________________________________________________________
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 (void)
{
// definir dados
   int n = 1; // quantidade 
   int x = 1; // valor a ser colocado 
   int y = 0; // controle / posicionador 
// identificar
   IO_id ( "EXEMPLO0820 - Method01 - v0.0" );   
// colocar o tamanho do arranjo 
   do
   {
      if ( n <= 0 )
      {
         IO_printf("-------|ERRO: valor nao pode menor ou igual a zero.|----------\n");// falar para o usuario
      }
      IO_printf("Coloque o valor referente ao tamanho do arranjo: ");
      IO_scanf("%d", &n);
   }while( n <= 0 );// repetir caso (n) seja igual a zero
   // utilizar valor lido   
   int array [ n ]; // criar arranjo com o tamanho
   for (y = 0; y < n; y = y + 1)
   {
      do
      {
         // interacao com o usuario
         if ( x % 2 == 0) // testar se valor e' par 
         {
            IO_printf("-------|ERRO: valor nao pode ser par.|----------\n"); // falar para o usuario
         }
         if ( x <= 0) // testar se valor e' menor ou igual a zero
         {
            IO_printf("-------|ERRO: valor nao pode menor ou igual a zero.|----------\n");// falar para o usuario
         }
         // interacao com usuario
         IO_printf("%d : ", y); // mostrar para o usuario
         IO_scanf("%d", &x); // pedir para o usuario
         // teste para gravar
         if ( x % 2 != 0 && x > 0 ) // conferir se valor e' adequado
         {
            array [ y ] = x; // gravar valor
         }
      }while( x <= 0 || x % 2 == 0 ); // repetir caso valor nao seja adequado
   }
   MIntArray ( n, array); // metodo da bibloteca
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )
//____________________________________________________________________________________________________________________
/*
 lerArrayIP - Ler valores inteiros impares e positivos de um arranjo
 @param fileName - Nome do arquivo que sera lido
*/
void lerArrayIP ( chars fileName )
{
 // definir dados 
   int x = 0; // posicao do arranjo 
   int y = 0; // valor da posicao  
   FILE* arquivo = fopen ( fileName, "rt" ); // abrir arquivo
   int n = 0; // tamanho do arranjo
 // pegartamanho e fazer um arranjo
   fscanf( arquivo, "%d", &n ); // ler valor referente a quantidade 
   int array [n]; // arranjo com tamanho pre determinado 
 // pegar valores e mostrar
   while ( ! feof ( arquivo ) && x < n ) // repeticao
   {
      fscanf(arquivo, "%d", &y); //ler valor da posicao
      if (y > 0 && y % 2 != 0) // teste
      {
         array [x] = y; // colocar valor em um arranjo
         x = x + 1; // passar para o proximo
      }
   }
   fclose ( arquivo ); // fechar arquivo 
   MIntArray( n, array); // mostrar para o usuario
}

/**
 Method02.
*/
void method02 (void)
{ 
// identificar
   IO_id ( "EXEMPLO0820 - Method02 - v0.0" );
// metodo auxiliar
   lerArrayIP ("ValoresArray2.txt");  
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
//____________________________________________________________________________________________________________________
/*
 ArrayRandom - criar arranjo com valores aleatorios
 @param I - Limite inicial
 @param F - Limite final 
 @param Q - Quantidade 
*/
void ArrayRandom ( chars fileName, int I, int F, int Q)
{  // definir dados 
   FILE* arquivo = fopen ( fileName, "wt"); //arquivo para gravar 
   int array [Q]; // criar arranjo com a quantidade desejada 
   int aleatory = 0; // numero aleatorio
   int c = 0; // controle
   // colocar quantidade no arquivo
   fprintf(arquivo, "%d\n", Q);
   // funcao 
   while ( Q > c ) // inicio da repeticao
   {
      aleatory = I + rand() / (RAND_MAX / (F - I + 1) + 1); // gerar numero aleatorio 
      // colocar/gravar no array
      array[c] = aleatory;
      // colocar/ gravar no arquivo
      fprintf(arquivo, "%d\n", aleatory); 
      // controlar
      c = c + 1; // passar para o proximo
   }
   MIntArray(Q, array); // mostrar arranjo para o usuario
   fclose(arquivo); // fechar arquivo
}


/**
 Method03.
*/
void method03 (void)
{
// definir valores 
   int I = 0; // limite inicial
   int F = 1; // limite final 
   int Q = 1; // quantidade de valores
// identificar
   IO_id ( "EXEMPLO0820 - Method03 - v0.0" );
// valores referentes ao limite 
   do // fazer
   {
      if ( F <= I ) // teste de possivel erro
      {
         IO_printf("-------|ERRO: O valor do limite superior nao pode menor ou igual ao limite inferior.|----------\n");// falar para o usuario
      }
      if ( Q <= 0 ) // teste de possivel erro
      {
         IO_printf("-------|ERRO: A quantidade nao pode menor ou igual a zero.|----------\n");// falar para o usuario
      }
      IO_printf("Coloque o valor referente ao limite inferior: ");// falar para o usuario
      IO_scanf("%d", &I);
      IO_printf("Coloque o valor referente ao limite superior: ");// falar para o usuario
      IO_scanf("%d", &F);
      IO_printf("\nColoque o valor referente a quantidade de valores aleatorios: ");// falar para o usuario
      IO_scanf("%d", &Q);   
   } while ( Q <= 0 ||  F <= I  ); // repetir caso houver erro
   // Metodo auxiliar
   ArrayRandom ( "Dados.txt",I, F, Q);  // criar arranjo aleatorio 
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
//____________________________________________________________________________________________________________________
/*
 lerArrayI - Ler um arranjo de um arquivo
 @param fileName - arquivo que sera lido
*/
void lerArrayI ( chars fileName )
{
 // definir dados 
   int x = 0; // posicao do arranjo 
   int y = 0; // valor da posicao  
   FILE* arquivo = fopen ( fileName, "rt" ); // abrir arquivo
   int n = 0; // tamanho do arranjo
 // pegartamanho e fazer um arranjo
   fscanf( arquivo, "%d", &n );
   int array [n]; // arranjo com tamanho pre determinado 
 // pegar valores e mostrar
   while ( ! feof ( arquivo ) && x < n ) // repeticao
   {
      fscanf(arquivo, "%d", &y); // ler valor da posicao
      array [x] = y; // gravar valor da posicao
      x = x + 1; // passar para o proximo
   }
   fclose ( arquivo ); // fechar arquivo
   MIntArray( n, array); // mostrar arranjo para o usuario
}
/*
 SearchL - pesquisar qual o maior valor 
 @param array[] - arranjo
 @param q - quantidade de dados do arranjo
*/
int SearchL (int array[], int q)
{
// definir dados 
   int x = 0; // valor da posicao
   int m = 0; // maior valor 
   int c = 0; // controle
// fucao
   m = array[c];
   while ( c < q ) // repeticao
   {
      x = array[c];
      if ( m < x ) // teste de maior valor 
      {
         m = x; // gravar maior valor 
      }
      c = c + 1; // passar para o proximo valor  
   } 
   return (m); // retornar maior valor 
}

/**
 Method04.
*/
void method04 (void)
{
// maior valor
   int m = 0; // maior valor
   int *array =  ArmazenadorA ("Dados.txt");// obter arranjo
   int q = NumbersArrayFile ("Dados.txt"); // quantidade de dados 
// identificar
   IO_id ( "EXEMPLO0820 - Method04 - v0.0" );
// ler arranjo e mostrar o maior valor
   MIntArray( q, array);// mostrar arranjo para o usuario
   m = SearchL (array, q);  // obter maior valor 
   IO_printf("%s %d","Maior valor do arranjo =", m); // dizer qual o maior valor 
   Separador(); // melhorar leitura
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )
//____________________________________________________________________________________________________________________
/*
 SearchS - pesquisar qual e' o menor valor
 @param array[] - arranjo
 @param q - quantidade de dados do arranjo
*/
int SearchS (int array[], int q)
{
// definir dados 
   int x = 0; // valor da posicao
   int m = 0; // menor valor
   int c = 0; // controle
// fucao
   m = array[c]; // utilizar o primeiro valor como base
   while ( c < q ) // repeticao
   {
      x = array[c];
      if ( m > x ) // testar se e' menor 
      {
         m = x; // gravar menor 
      }
      c = c + 1;  // passar para o proximo
   }
   return (m); // retornar menor 
}
/**
 Method05.
*/
void method05 (void)
{
// definir dados 
   int s = 0; // menor valor  
   int *array =  ArmazenadorA ("Dados.txt");// obter arranjo
   int q = NumbersArrayFile ("Dados.txt"); // quantidade de dados 
// identificar
   IO_id ( "EXEMPLO0820 - Method05 - v0.0" );
// ler arranjo e mostrar o maior valor
   MIntArray( q, array);// mostrar arranjo para o usuario
   s = SearchS (array, q); // pesquisar qual e' o menor valor do arranjo  
   IO_printf("%s %d","Menor valor do arranjo =", s); // falar qual e' o menor valor do arranjo
   Separador(); // melhorar leitura
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )
//____________________________________________________________________________________________________________________

/*
 SeachM - Obter a media dos valores de um arranjo
 @param array[] - arranjo
 @param q - quantidade de dados do arranjo
*/
int SearchM (int array[], int q)
{
 // definir dados 
   int c = 0; // controle 
   int soma = 0; // soma dos conteudos 
   int x = 0; // valor da posicao
   int media = 0; // media 
   while (c < q) // repeticao
   {
      x = array[c];
      soma = soma + x; // somar valores
      c = c + 1; // passar para o proximo
   }// fim ad repeticao
   media = ( soma / q ); // fazer a media
   return (media); // retornar media 
}

/*
SearchMQ - Pesquisar valores acima e abaixo da media e separalos 
@param fileName - array
@param m - media ja obtida 
*/
void SearchMQ (int array[], int m, int q)
{
 // definir dados 
   FILE* arquivo2 = fopen ("MenoresM", "wt"); // abrir segundo arquivo
   FILE* arquivo3 = fopen ("MaioresM", "wt"); // abrir  terceiro arquivo
   int c = 0; // controle 
   int x = 0; // valor da posicao
   while ( c < q) // repeticao
   {
      x = array[c];
      if ( x < m )
      {
         fprintf(arquivo2, "%d\n", x); // colocar caso o valor seja inferior a media 
      }
      else
      {
         fprintf(arquivo3, "%d\n", x); // colocar caso o valor seja igual ou superior a media
      }
     c = c + 1; 
   }//  fim repeticao
   fclose (arquivo2); // fechar segundo arquivo
   fclose (arquivo3); // fecha terceiro arquivo
}

/**
 Method06.
*/
void method06 (void)
{
// difinir dados 
   int m = 0; // retorno da media 
   int *array =  ArmazenadorA ("Dados.txt");// obter arranjo
   int q = NumbersArrayFile ("Dados.txt"); // quantidade de dados 
// identificar
   IO_id ( "EXEMPLO0820 - Method06 - v0.0" );
// metodos auxiliares 
   IO_printf("Media: "); // pedir media
   m = SearchM(array, q);  // odter media 
   IO_printf("%d\n", m);  // dizer media 
   SearchMQ(array, m, q); // teste de valores acima e abaixo 
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
//____________________________________________________________________________________________________________________
/*
Orden - ver se arranjo e' ordenado
@param q - quantidade de itens no arranjo
@param array2 - arranjo obtido antes do metodo auxiliar
*/
void Orden(int q, int array2 [])
{
 // definir dados 
 int c = 0; // controle 
 int x = 0; // valor da posicao
 int y = 0; // valor da posicao menos 1
 x = array2 [c]; // comecar com um valor para o teste 
 while ( c < q && x > y ) // teste de ordenacao
 {
  y = x; // gravar valor anterior para o teste 
  c = c + 1; // passar para o proximo valor 
  x = array2 [c]; // colocar o proximo valor no teste 
 }
 if ( c < q ) // se nao for ordenado
 {
  IO_printf("O arranjo nao e' ordenado\n "); // falar que nao e' ordenado
 }
 else // caso seja ordanado
 {
  IO_printf("O arranjo e' ordenado\n "); // falar que e' ordenado
 }
}

/**
 Method07.
*/
void method07 (void)
{
// definir dados 
   int q = 1; // quantidade
   int c = 0; // controle 
   int x = 0; // valor para ser colocado no arranjo
   // identificar
   IO_id ( "EXEMPLO0820 - Method07 - v0.0" ); 
   do // fazer 
   {
      if (q <= 0) // teste de posivel erro
      {
         IO_printf("-------|ERRO: valor nao pode menor ou igual a zero.|----------"); // avisar para o usuatio
      }
      IO_printf("Colocar o valor referente ao tamanho do arranjo: "); // pedir tamanho
      IO_scanf("%d", &q); // obter tamanho
   } while (q <= 0); // repetir caso seja igual ao erro
   int array2 [q]; // definir arranjo
   for (c = 0; c < q; c = c + 1 ) // repeticao 'linear'
   {
    IO_printf("%d : ", c); // pedir valor
    IO_scanf("%d", &x); // obter valor
    array2 [c] = x; // colocar valor no arranjo
   }
   Orden(q, array2); // mandar arranjo para o metodo
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )
//____________________________________________________________________________________________________________________


/*
 SearchNumber - Procurar um numero
 @param x - Numero que o usuario que encontrar
 @param y - Quantidade de dados do arranjo
*/
void SearchNumber( int array [], int x, int y)
{
  
 MIntArray(y, array);
 int c = 0; // controle 
 int j = 0; // valor da posicao 
 int v = 0; // verificar se o valor foi encontrado
 for (c = 0; c < y; c = c + 1) // repeticao
 {
  j = array[c]; // vaor da posicao
  if ( j == x ) // teste 
  {
   IO_printf("%s \n %d: %d\n","|Valor encontrado|", c, j); // falar que numero foi encontrado
   v = v + 1;
  }
 }
 if  (v == 0)
 {
  IO_printf("|O valor [%d] nao foi encontrado no arranjo|", x);
 } 
}

/**
 Method08.
*/
void method08 (void)
{
// definir dados 
   int *array = ArmazenadorA ("Dados.txt"); // obter arranjo 
   //MIntArray(10, array); // mostrar arranjo para o usuario
   int x = 0; // valor escolhido pelo usuario
   int y = NumbersArrayFile ("Dados.txt"); // quantidade de valores do arranjo
// identificar
   IO_id ( "EXEMPLO0820 - Method08 - v0.0" );
// adquirir valores do usuario
   IO_printf("Coloque o valor que voce deseja encontrar: ");
   IO_scanf("%d", &x);   
// metodo auxiliar
   SearchNumber( array, x, y);   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )
//____________________________________________________________________________________________________________________

/*
 SearchNumber2 - Procurar um numero
 @param x - Numero que o usuario que encontrar
 @param y - Quantidade de dados do arranjo
*/
void SearchNumber2( int array [], int x, int y)
{
  
 MIntArray(y, array);
 int c = 0; // controle 
 int j = 0; // valor da posicao 
 int v = 0; // verificar se o valor foi encontrado
 for (c = 0; c < y; c = c + 1) // repeticao
 {
  j = array[c]; // vaor da posicao
  if ( j == x ) // teste 
  {
   IO_printf("%s \n Posicao (%d): Valor (%d)\n","|Valor encontrado|", c, j); // falar que numero foi encontrado
   v = v + 1;
  }
 }
 if  (v == 0)
 {
  IO_printf("|O valor [%d] nao foi encontrado no arranjo|", x);
 } 
}
/**
 Method09.
*/
void method09 (void)
{
// definir dados 
   int *array = ArmazenadorA ("Dados.txt"); // obter arranjo 
   //MIntArray(10, array); // mostrar arranjo para o usuario
   int x = 0; // valor escolhido pelo usuario
   int y = NumbersArrayFile ("Dados.txt"); // quantidade de valores do arranjo
// identificar
   IO_id ( "EXEMPLO0820 - Method08 - v0.0" );
// adquirir valores do usuario
   IO_printf("Coloque o valor que voce deseja encontrar: ");
   IO_scanf("%d", &x);   
// metodo auxiliar
   SearchNumber2( array, x, y);   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
//_______________________________________________________________________________________________________________________________________________

/*
 SearchNumber3 - Procurar um numero
 @param x - Numero que o usuario que encontrar
 @param y - Quantidade de dados do arranjo
*/
void SearchNumber3( int array [], int x, int y)
{
 MIntArray(y, array);
 int c = 0; // controle 
 int j = 0; // valor da posicao 
 int v = 0; // verificar se o valor foi encontrado
 for (c = 0; c < y; c = c + 1) // repeticao
 {
  j = array[c]; // vaor da posicao
  if ( j == x ) // teste 
  {
   IO_printf("%s \n Posicao (%d): Valor (%d)\n","|Valor encontrado|", c, j); // falar que numero foi encontrado
   v = v + 1;
  }
 }
 if  (v == 0)
 {
  IO_printf("|O valor [%d] nao foi encontrado no arranjo|", x);
 } 
 else
 {
  IO_printf("Quantidade de vezes que esse valor foi ancontrado: %d\n", v);
 }
}

/**
 Method10.
*/
void method10 (void)
{
// definir dados 
   int *array = ArmazenadorA ("Dados.txt"); // obter arranjo 
   //MIntArray(10, array); // mostrar arranjo para o usuario
   int x = 0; // valor escolhido pelo usuario
   int y = NumbersArrayFile ("Dados.txt"); // quantidade de valores do arranjo
// identificar
   IO_id ( "EXEMPLO0820 - Method08 - v0.0" );
// adquirir valores do usuario
   IO_printf("Coloque o valor que voce deseja encontrar: ");
   IO_scanf("%d", &x);   
// metodo auxiliar
   SearchNumber3( array, x, y);   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )
//_______________________________________________________________________________________________________________________________________________


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
      IO_id ( "EXEMPLO0820 - Programa - v0.0" );
   
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Fazer um arranjo, com numeros positivos impares." );
      IO_println ( " 2 - Ler valores de um arquivo e montar um arranjo com eles." );
      IO_println ( " 3 - Gerar valores aleatorios e criar arranjo com eles." );
      IO_println ( " 4 - Mostrar qual e' o maior valor de um arranjo." );
      IO_println ( " 5 - Mostrar qual e' o menor valor de um arranjo." );
      IO_println ( " 6 - Calcular a media e gravar valores miores e menores saparadamente." );
      IO_println ( " 7 - O programa nos diz se o arranjo e' ordenado." );
      IO_println ( " 8 - Encontrar um valor no arranjo." );
      IO_println ( " 9 - Encontrar um valor no arranjo e sua posicao." );
      IO_println ( "10 - Encontrar um valor no arranjo, sua posicao e a quantidade de vezes que ele foi encontrado." );
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
0.1       (OK)      01.      * O programa nos mostra um arranjo.
0.2       (OK)      01.      * O programa "anota" um arranjo e depois o mostra.
0.3       (OK)      01.      * O programa escrave o arranjo, colocado pelo usuario, em um arquivo. 
0.4       (OK)      01.      * O programa le os arranjos armazenados no arquivo da versao anterior.
0.5       (OK)      01.      * O programa copia o arranjo presente no arquivo.
0.6       (OK)      01.      * O programa soma do valores do arranjo.
0.7       (OK)      01.      * O programa mostra os arranjos e falar, por meio do sistema bolleano, se todos os digitos sao iguais a zero.
0.8       (OK)      01.      * O programa nos mostrar os valores do arranjo com sinal trocado.
0.9       (OK)      01.      * O programa verifica se todos os valores, dos arranjos predeterminados, sao iguais.
1.0       (OK)      01.      * O programa procura por numeros em um arranjo.
Exercicios
1.1       (OK)      01.      * O programa monta um arranjo com valores que o usuario escolheu.
1.2       (OK)      01.      * O programa le valores de um arquivo e monta um arranjo com eles.
1.3       (OK)      01.      * O programa gera valores aleatorios e cria um arranjo com eles.
1.4       (OK)      01.      * O programa procura pelo maior valor do arranjo.
1.5       (OK)      01.      * O programa procura pelo menor valor do arranjo.
1.6       (OK)      01.      * O programa calcula a media e grava os valores acima e abaixo da media separadamente.
1.7       (OK)      01.      * O programa nos fala se o arranjo e' ordenado 
1.8       (OK)      01.      * O programa procura por um numero no arranjo.
1.9       (OK)      01.      * O programa procura por um numero no arranjo e diz a posicao do valor encontrado.
2.0       (OK)      01.      * O programa procura por um numero no arranjo, diz a posicao do valor encontrado e a quantidade desse valor no arranjo.

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
*EXEMPLO0801                                                                       |------------------|
a.) 5 -> {1, 2, 3, 4, 5}------------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0802                                                                       |
a.) 5 -> {1, 2, 3, 4, 5}------------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0803                                                                       |
a.) 5 -> {1, 2, 3, 4, 5}------------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0804                                                                       |
a.) 5 -> {1, 2, 3, 4, 5}------------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0805                                                                       |
a.) Copia -> {1, 2, 3, 4, 5}--------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0806                                                                       |
a.) Soma -> {Soma = 15}-------------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0807                                                                       |
a.) Zero? -> {arry1 = 1/true, arry2 = 0/false, arry3 = 0 false}---------------->(OK)
                                                                                   |
*EXEMPLO0808                                                                       |
a.) "Soma" -> {-1, -2, -3, -4, -5}--------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0809                                                                       |
a.) Iguais -> {Iguais = 1, Iguais = 0 }---------------------------------------->(OK)
                                                                                   |
*EXEMPLO0810                                                                       |
a.) Procurar por (x) -> { (1) = 1, (3) = 1, (5) = 1, (-1) = 0 }---------------->(OK)
                                                                                   |
-----------------------------------------------------------------------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                         |
                                                                                   |
*EXEMPLO0811                                                                       |
a.) 5 -> { 1, 3, 5, 7, 9}------------------------------------------------------>(OK)
b.) 10 -> { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19}--------------------------------->(OK)
                                                                                   |
*EXEMPLO0812                                                                       |
a.) 5 -> { 1, 3, 5, 7, 9}------------------------------------------------------>(OK)
b.) 10 -> { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19}--------------------------------->(OK) 
(OBS.: O arquivo utilizado nesse programa e' o |ValoresArray2.txt|).               |       
                                                                                   |
*EXEMPLO0813                                                                       |
a.) [1, 10] 5 -> { 1, 1, 4, 2, 2}---------------------------------------------->(OK)
b.) [1, 50] 10 -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}----------------------->(OK)
                                                                                   |
*EXEMPLO0814                                                                       |
a.) Dados.txt -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}-> {50}----------------->(OK)
                                                                                   |
*EXEMPLO0815                                                                       |
a.) Dados.txt -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}-> {1}------------------>(OK)
                                                                                   |
*EXEMPLO0816                                                                       |
a.) Dados.txt -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}-> {1}------------------>(OK)
  | Media = 21                              )                                      |
  | MaioresM.txt -> {50, 23, 27, 29, 31, 31})                                      |
  | MenoresM.txt -> {6, 1, 1, 19}           )                                      | 
                                                                                   |
*EXEMPLO0817                                                                       |
a.)  5 -> { 1, 2, 3, 4, 5}----[O arranjo e' ordenado]-------------------------->(OK)
b.) 10 -> { 1, 2, 3, 4, 5, 7, 6, 8, 9, 10}--[O arranjo nao e' ordenado]-------->(OK)
                                                                                   |
*EXEMPLO0818                                                                       |
a.) Dados.txt -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}-> {1}------------------>(OK)
  | Valor procirado = 1                              )                             |
  | |Valor encontrado| 3: 1, |Valor encontrado| 4: 1.)                             |
  | Valor procirado = 60                             )                             |
  | |O valor [60] nao foi encontrado no arranjo|     )                             | 
                                                                                   |
*EXEMPLO0819                                                                       |
a.) Dados.txt -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}-> {1}------------------>(OK)
  | Valor procirado = 1                              )                             |
  | |Valor encontrado| Posicao (1):  Valor (23)|     )                             |
  | Valor procirado = 60                             )                             |
  | |O valor [60] nao foi encontrado no arranjo|     )                             | 
                                                                                   |
*EXEMPLO0820                                                                       |
a.) Dados.txt -> { 50, 23, 6, 1, 1, 19, 27, 29, 31, 31}-> {1}------------------>(OK)
  | Valor procirado = 1                              )                             |
  | |Valor encontrado| Posicao (1):  Valor (23)|, 1. )                             |
  | Valor procirado = 60                             )                             |
  | |O valor [60] nao foi encontrado no arranjo|     )                             | 
                                                                                   |                                                                                    |                                                                                                                                                                                                                                                       
___________________________________________________________________________________|                                                                                   
---------------------------------------------- historico
Versao Data Modificacao
 0.1    /   esboco
---------------------------------------------- testes
Versao   Teste  Identificacao de programa
 0.1 01. ( OK ) . Mostrar arranjo.
 0.2 01. ( OK ) . Pegar e mostrar um arranjo.
 0.3 01. ( OK ) . Anotar arranjo em um arquivo txt. 
 0.4 01. ( OK ) . Ler arranjo armazenado.
 0.5 01. ( OK ) . Copiar arranjo. 
 0.6 01. ( OK ) . Somar valores do arranjo.
 0.7 01. ( OK ) . Falar se o arranjo tem valor igual a nulo.
 0.8 01. ( OK ) . Mostrar os valores com sinal trocado.
 0.9 01. ( OK ) . Mostrar se os valores são iguais.
 1.0 01. ( OK ) . Procurar por valores.

Exercicios
 1.1 01. ( OK ) . Montar um arranjo.
 1.2 01. ( OK ) . Montar um arranjo com dados de arquivo.
 1.3 01. ( OK ) . Montar um arranjo com dados aleatorios
 1.4 01. ( OK ) . Mostra o maior valor do arranjo.
 1.5 01. ( OK ) . Mostra o menor valor do arranjo.
 1.6 01. ( OK ) . Calcular media.
 1.7 01. ( OK ) . Verificar arranjo.
 1.8 01. ( OK ) . Procurar um numero.
 1.9 01. ( OK ) . Procurar um numero.
 2.0 01. ( OK ) . Procurar um numero.

*/