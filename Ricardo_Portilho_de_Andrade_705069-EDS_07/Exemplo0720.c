/*
 Exemplo0720 - v0.0. - 19 / 04 / 2020
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
 IMPARES5 - Gravar em arquivo texto certa quantidade de valores impares multiplos de cinco.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void MultiplosCinco ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 1;
   int mult = 0;
   int c = 0;
// repetir para a quantidade de dados
   while (c < x)
   {
      mult = y * 5;
      if (mult % 2 != 0)
      {
      // gravar valor
         fprintf ( arquivo, "%d\n", mult );
      // mudar valor do contador    
         c = c + 1;
      } 
      y = y + 1;  
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim ( )

/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// Identificando as variaveis 
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar   
   MultiplosCinco ( "IMPARES5.TXT", x );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )
//____________________________________________________________________________________________________________________

/**
 IMPARES5 - Gravar em arquivo texto certa quantidade de valores pares multiplos de cinco.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void MultiplosCincoD ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = x * 2;
   int mult = 0;
   int c = 0;
// repetir para a quantidade de dados
   while (c < x)
   {
      // fazer multiplo
      mult = y * 5;
      // gravar valor
      fprintf ( arquivo, "%d\n", mult );
      // mudar valor do contador    
      c = c + 1;
      y = y - 2;  
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim ( )
/**
 Method02 - Mostrar certa quantidade de valores.
*/
void method02 ( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar   
   MultiplosCincoD ( "IMPARES5D.TXT", x );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
//____________________________________________________________________________________________________________________

/**
 POW4 - Gravar em arquivo texto certa quantidade de valores da equaçao exponencial de base 4.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void POW4 ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
   int Pow = 0;
// repetir para a quantidade de dados
   while (y < x)
   {
      // fazer multiplo
      Pow = pow( 4, y);
      // gravar valor
      fprintf ( arquivo, "%d\n", Pow );
      // mudar valor do contador    
      y = y + 1;  
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim ( )
/**
 Method03 - Mostrar certa quantidade de valores.
*/
void method03 ( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar   
   POW4 ( "POW4.TXT", x );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
//____________________________________________________________________________________________________________________

/**
 FRACOES3 - Gravar em arquivo texto certa quantidade de valores em forma de fracoes com denominador mutiplo de 3.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void FRACOES3 ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = x - 1;
   double Pow = 0;
// repetir para a quantidade de dados
   while (y > 0)
   {
      // fazer multiplo
      Pow = pow( 3, -y);
      // gravar valor
      fprintf ( arquivo, "%lf\n", Pow );
      // mudar valor do contador    
      y = y - 1;  
   } // fim repetir
   fprintf ( arquivo, "%d\n", 1 );
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim ( )
/**
 Method04 - Mostrar certa quantidade de valores.
*/
void method04 ( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar   
   FRACOES3 ( "FRACOES.TXT", x );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )
//____________________________________________________________________________________________________________________

/**
 FRACOESX - Gravar em arquivo texto certa quantidade de valores em forma de fracoes com denominador x.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void FRACOESX ( chars fileName, int c, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 1;
   double Pow = 1;
// colocar o primeiro valor    
   fprintf ( arquivo, "%lf\n", Pow );
// repetir para a quantidade de dados
   while (y < c)
   {
      // fazer multiplo
      Pow = pow( x, -y);
      // gravar valor
      fprintf ( arquivo, "%lf\n", Pow );
      // mudar valor do contador    
      y = y + 1;  
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim ( )

/**
 Method05 - Mostrar certa quantidade de valores.
*/
void method05 ( )
{
// definir dados
   int x = 1;
   int y = 0;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
      IO_printf("Coloque um valor referente ao denominador: ");
      IO_scanf("%d", &y);
   }while( x == 0 );
// executar o metodo auxiliar   
   FRACOESX ( "FRACOESX.TXT", x, y );   
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )
//____________________________________________________________________________________________________________________

/**
 Somar - Somar os valores de outro arquivo.
 @param fileOut - nome do arquivo de saida (destino)
 @param fileIn - nome do arquivo de entrada (origem )
 @param x - Quantidade de valores. 
*/
void Somar ( chars fileOut, chars fileIn, int x )
{
// definir dados
   FILE* saida = fopen ( fileOut, "wt" );
   FILE* entrada = fopen ( fileIn , "rt" );
   int contador = 0;
   double soma = 0;
   double z = 0;
// repetir enquanto houver dados
   while ( ! feof ( entrada ) && contador < x )
   {
   // tentar ler
      fscanf ( entrada, "%lf", &z );
   // contar linha lida
      contador = contador + 1;
   // somar
      soma = soma + z;    
   } // fim repetir
// gravar no destino,
   fprintf ( saida, "Soma = %lf\n", soma); 
   fprintf ( saida, "Quantidade = %d", contador );  
   if (contador < x)
   {   
   // informar que o total de linhas pedidas e' maior do que as disponiveis 
      IO_printf ( "ERRO: Desculpe, mas a quantidade de valores disponivel e' menor que a pedida.\n ");   
   // informar total de linhas copiadas   
      IO_printf ( "Values read = %d\n", contador );   
   }
   else
   {
   // informar total de linhas copiadas
      IO_printf ( "Values read = %d\n", contador );
   }
// fechar arquivos
   fclose ( saida );
   fclose ( entrada );
} // fim copyText ( )
/**
 Method06.
*/
void method06( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar
   Somar ( "RESULTADO06.TXT", "FRACOESX.TXT", x );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
//____________________________________________________________________________________________________________________

/**
 Method07.
*/
void method07( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar
   Somar ( "RESULTADO07.TXT", "FRACOES.TXT", x );
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
//Valores do arquivo fibonacci
   FILE* arquivo = fopen ( "RESULTADO08.TXT", "wt" );  
   int impar = 0; // ajuda na verificacao do valor
// int soma = 0; // soma dos pares
   do
   {
      posicao = posicao + 1;
      impar = Method08a ( posicao - 1 );
      if ( impar % 2 != 0 || impar == 1 )
      {
         fprintf (arquivo, "%d\n", impar);
         controle = controle + 1;
      //   soma = soma + impar;
      } 
   }while ( x > controle );
   fprintf (arquivo, "Qantidade = %d\n", x);
// IO_printf("Soma = %d", soma);
   fclose ( arquivo );
}

/**
 Method08.
*/
void method08( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
//Obter valores do usuario
   do 
   {
      if (x == 0)
      {
         IO_printf("\nERRO:Quantidade deve ser maior que zero.\n");
      }
      IO_printf("Coloque um valor referente a quantidade: ");
      IO_scanf("%d", &x);
   }while( x == 0 );
// executar o metodo auxiliar
   Method08aRei ( x, 0, 1 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )

//____________________________________________________________________________________________________________________
int LetraM (chars linha )
{
   int tamanho = 0;
   int x = 0;
   int b = 0;
 // repetir para cada letra     
   tamanho = strlen ( linha );
 //Teste usado para saber somente sobre as letras maiusculas 
   for( x  = 0; x < tamanho; x = x + 1 )
   {
      //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (linha [x]);
      //mostrar as letras maiusculas 
      if('a' <= w && w <= 'z' )
      {
         b = b + 1;              
      }  
   } 
   return (b);  
}

void QM ( chars fileName )
{
// definir dados
   //arquivos 
   FILE* arquivoB = fopen ( "RESULTADO09.TXT", "wt" );
   FILE* arquivo = fopen ( fileName, "rt" );
   // String
   chars linha = IO_new_chars ( STR_SIZE );
   // Inteiros
   int tamanho = 0;
   int x = 0;
   int soma = 0;
// tentar ler a primeira
   strcpy ( linha, IO_fread ( arquivo ) ); 
// repetir enquanto houver dados
   while ( ! feof (arquivo) != 0)
   { 
   // repetir para cada palavra  
      x  = LetraM(linha);
      fprintf (arquivoB, "String = %s |=| Quantidade de minusculas = %d\n", linha,x);
      strcpy ( linha, IO_fread ( arquivo ) );  
      soma = soma + x; 
   } 
   fprintf (arquivoB, "Quantidade total de letras minusculas = %d", soma);
 // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
   fclose ( arquivoB );
} // fim searchdWord ( )

/**
 Method09.
*/
void method09( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
// executar o metodo auxiliar
   QM ( "RESULTADO09T.TXT");
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
//_______________________________________________________________________________________________________________________________________________
int Numeros (chars linha )
{
   int tamanho = 0;
   int x = 0;
   int b = 0;
 // repetir para cada letra     
   tamanho = strlen ( linha );
 //Teste usado para saber somente sobre as letras maiusculas 
   for( x  = 0; x < tamanho; x = x + 1 )
   {
      //Fazer 'w' ser a letra representada na posicao 'x'
      char w = (linha [x]);
      //mostrar as letras maiusculas 
      if( '1' <= w && w <= '9' )
      {
         b = b + 1;              
      }  
   } 
   return (b);  
}

void QD ( chars fileName )
{
// definir dados
   //arquivos 
   FILE* arquivoB = fopen ( "RESULTADO10.TXT", "wt" );
   FILE* arquivo = fopen ( fileName, "rt" );
   // String
   chars linha = IO_new_chars ( STR_SIZE );
   // Inteiros
   int tamanho = 0;
   int x = 0;
   int soma = 0;
// tentar ler a primeira
   strcpy ( linha, IO_fread ( arquivo ) ); 
// repetir enquanto houver dados
   while ( ! feof (arquivo) != 0)
   { 
   // repetir para cada palavra  
      x  = Numeros(linha);
      fprintf (arquivoB, "String = %s |=| Quantidade de numeros = %d\n", linha,x);
      strcpy ( linha, IO_fread ( arquivo ) );  
      soma = soma + x; 
   } 
   fprintf (arquivoB, "Quantidade total de numeros = %d", soma);
 // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
   fclose ( arquivoB );
} // fim searchdWord ( )

/**
 Method10.
*/
void method10( )
{
// definir dados
   int x = 1;
// identificar
   IO_id ( "EXEMPLO0720 - Method01 - v0.0" );
// executar o metodo auxiliar
   QD ( "RESULTADO10T.TXT");
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )



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
      IO_id ( "EXEMPLO0720 - Programa - v0.0" );
   
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Gravar certa quantidade de valores impares multiplos de 5." );
      IO_println ( " 2 - Gravar certa quantidade de valores pares multiplos de 5. " );
      IO_println ( " 3 - Gravar uma certa quantidade de valores da sequencia 1, 4, 16, 64, 256, ..." );
      IO_println ( " 4 - Gravar fracoes com denominador divisivel por tres." );
      IO_println ( " 5 - Gravar valor de fracoes com denominado configuravel" );
      IO_println ( " 6 - Gravar a soma dos valores obtidos pela opcao 5." );
      IO_println ( " 7 - Gravar a soma dos valores obtidos pela opcao 4." );
      IO_println ( " 8 - Gravar certa quantidade de valores impares da sequencia fibonacci." );
      IO_println ( " 9 - Ler um arquivo e gravar a quantidade de letras minusculas." );
      IO_println ( "10 - Ler um arquivo e gravar a quantidade de numeros." );
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
0.1       (OK)      01.      * O programa escreve em um documento txt os numeros de 1 a 10.
0.2       (OK)      01.      * O programa le de um documento txt valores inteiros.
0.3       (OK)      01.      * O programa escreve valores reais em um documento txt. 
0.4       (OK)      01.      * O programa le valores reais em um documento txt.
0.5       (OK)      01.      * O programa le uma sequncia de caracteres de tamanho indeterminado e a coloca em um documento txt. 
0.6       (OK)      01.      * O programa le um arquivo com quantidade indeterminada de sequencia de caracteres.
0.7       (OK)      01.      * O programa copia o conteudo de um arquivo txt.
0.8       (OK)      01.      * O programa faz uma "anexagem" de conteudo no arquivo txt. 
0.9       (OK)      01.      * O programa le um arquivo com quantidade indeterminada de sequencia de caracteres.
1.0       (OK)      01.      * O programa procura palavras. 

Exercicios
1.1       (OK)      01.      * O programa grava uma certa quantidade de valores impares multiplos de cinco.
1.2       (OK)      01.      * O programa grava multiplos de cinco pares de forma decrecente.
1.3       (OK)      01.      * O programa mostra certa quantidade de valores obtidos pela equaçao exponecial de base 4.
1.4       (OK)      01.      * O programa grava certa quantidade de fracoes com denominador multiplo de tres.
1.5       (OK)      01.      * O programa grava certa quantidade de fracoes com denominadores configuraveis.  
1.6       (OK)      01.      * O programa pega os valores do programa anterior e os soma.
1.7       (OK)      01.      * O programa pega os valores do programa 4 e os soma.
1.8       (OK)      01.      * O programa grava uma certa quantidade de valores de fibonacci impares em um arquivo.
1.9       (OK)      01.      * O programa grava a quantidade de letras minusculas presentes em um arquivo txt. 
2.0       (OK)      01.      * o programa grava a quantidade de numeros presentes em uma string de arquivo txt.

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
*EXEMPLO0701                                                                       |------------------|
a.) 10 -> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }------------------------------------->(OK)
                                                                                   |
*EXEMPLO0702                                                                       |
a.) NULL -> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }----------------------------------->(OK)
                                                                                   |
*EXEMPLO0703                                                                       |
a.) 10 -> {10, 0.10, 0.20, 0.30, 0.40, 0.50, 0.60, 0.70, 0.80, 0.90, 1.0 }----->(OK)
                                                                                   |
*EXEMPLO0704                                                                       |
a.) NULL -> { 0.10, 0.20, 0.30, 0.40, 0.50, 0.60, 0.70, 0.80, 0.90, 1.0 }------>(OK)
                                                                                   |
*EXEMPLO0705                                                                       |
a.) Ola Mundo! |   |Ola Mundo! |                                                   |
   |PARAR      |-> |Parar      |----------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0706                                                                       |
a.) NULL -> {Ola Mundo! }------------------------------------------------------>(OK)
                                                                                   |
*EXEMPLO0707                                                                       |
a.) Ola Mundo!|    |Ola Mundo! |                                                   |
   |PARAR     |  ->|           |----------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0708                                                                       |
             |Ola Mundo! |                                                         |
a.)|1     |  |1          |                                                         |
   |2     |  |2          |                                                         |
   |3     |  |3          |                                                         | 
   |PARAR |->|PARAR      |----------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0709                                                                       |
a.) Ola Mundo! |  |Ola      |                                                      |
   |1          |  |Mundo!   |                                                      |
   |2          |  |1        |                                                      |
   |3          |  |2        |                                                      |
   |PARAR      |->|3        |-------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0710                                                                       |
a.)|Ola Mundo!  |                                                                  |
   |1           |                                                                  |
   |2           |                                                                  |
   |3 pqr       |                                                                  |
   |PARAR       |                                                                  |
   |pqs         |->|Procurar ("pqr") = 1;  Procurar("pqs") = 1 |--------------->(OK)
                                                                                   |
-----------------------------------------------------------------------------------|                                                                                                                                                                                                                                                                                                                                                                                                                                   
Exercicios                                                                         |
                                                                                   |
*EXEMPLO0711                                                                       |
a.) 5 -> {5, 15, 25, 35, 45}--------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0712                                                                       |
a.) 5 -> {50, 40, 30, 20, 10}-------------------------------------------------->(OK)
                                                                                   |
*EXEMPLO0713                                                                       |
a.) 8 -> { 1, 4, 64, 256, 1024, 4096, 16384}----------------------------------->(OK)
                                                                                   |                                                                                    |                                                                                   |
*EXEMPLO0714                                                                       |
a.) 5 -> { 1/81, 1/27, 1/9, 1/3, 1 }------------------------------------------->(OK)
                                                                                   |                                                                                    |                                                                                   |
*EXEMPLO0715                                                                       |
a.) 5 -> { 1, 0.2, 0.04, 0.008, 0.0016 }--------------------------------------->(OK)
                                                                                   |                                                                                    |                                                                                   |
*EXEMPLO0716                                                                       |
a.) 2 -> { 1.2 }--------------------------------------------------------------->(OK)
b.) 3 -> { 1.24 }-------------------------------------------------------------->(OK)                                                                                   |                                                                                    |                                                                                   |
c.) 4 -> { 1.248 }------------------------------------------------------------->(OK)                                                                                   |                                                                                    |                                                                                   |                                                                                   |
                                                                                   |
*EXEMPLO0717                                                                       |
a.) 2 -> { 0.049383 }---------------------------------------------------------->(OK)
b.) 3 -> { 0.160494 }---------------------------------------------------------->(OK)                                                                                   |                                                                                    |                                                                                   |
c.) 4 -> { 0.493827 }---------------------------------------------------------->(OK)                                                                                   |                                                                                    |                                                                                   |                                                                                   |
                                                                                   |                                                                                    |                                                                                   |
*EXEMPLO0718                                                                       |
a.) 5 -> { 1, 1, 3, 5, 13 }---------------------------------------------------->(OK)
                                                                                   |                                                                                    |                                                                                   |
*EXEMPLO0719                                                                       |
a.)Ola Mundo!            |-> {Quantidade total de letras minusculas = 53}------>(OK)
  |Esse e' um teste      |                                                         |                
  |para ver se o programa|                                                         |                       
  |esta funcionando bem. |                                                         |                     
                                                                                   |                                                                                    |                                                                                   |
*EXEMPLO0720                                                                       |
a.)354dfsfss3 |-> {Quantidade total de numeros = 15}--------------------------->(OK)
  |4f3sdfs24d |                                                                    |                
  |f2s4f2sdfs |                                                                    |                       
  |2d4fsdf5s4 |                                                                    |                     
                                                                                   |                                                                                   |
                                                                                   |                                                                                   |
___________________________________________________________________________________|                                                                                   
---------------------------------------------- historico
Versao Data Modificacao
 0.1    /   esboco
---------------------------------------------- testes
Versao   Teste  Identificacao de programa
 0.1 01. ( OK ) . Escrever em arquivo txt.
 0.2 01. ( OK ) . Le um arquivo txt. 
 0.3 01. ( OK ) . Escrever em arquivo txt.
 0.4 01. ( OK ) . Ler um arquivo txt.
 0.5 01. ( OK ) . Escrever uma sequencia de caracteres em um documento txt.
 0.6 01. ( OK ) . Ler aquivo txt com sequencia de caracteres.
 0.7 01. ( OK ) . Copiar conteudo de um arquivo txt.
 0.8 01. ( OK ) . Anexar conteudo.
 0.9 01. ( OK ) . Le uma quantidade indeterminada de arquivo.
 1.0 01. ( OK ) . Procurar palavras.

Exercicios
 1.1 01. ( OK ) . Escrever em arquivo txt.
 1.2 01. ( OK ) . Escrever em arquivo txt. 
 1.3 01. ( OK ) . Escrever em arquivo txt.
 1.4 01. ( OK ) . Escrever em arquivo txt.
 1.5 01. ( OK ) . Escrever em arquivo txt.
 1.6 01. ( OK ) . Le e escreve em arquivo txt.
 1.7 01. ( OK ) . Le e escreve em arquivo txt.
 1.8 01. ( OK ) . Escrever em arquivo txt.
 1.9 01. ( OK ) . Le e escreve em arquivo txt.
 2.0 01. ( OK ) . Le e escreve em arquivo txt.
*/