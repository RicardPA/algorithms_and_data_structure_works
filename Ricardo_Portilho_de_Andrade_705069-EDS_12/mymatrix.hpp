/*
 mymatrix.hpp - v0.0. - 13 / 06 / 2020
 Author: Ricardo Portilho de Andrade 
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
template <typename T>

class Matrix
{
private: // area reservada
   int lines;
   int columns;
   T **data;

public: // area aberta
   //---------------------
   Matrix(int lines, int columns)
   {
      // definir valores iniciais
      this->lines = lines;
      this->columns = columns;
      // reservar area
      data = new T *[lines];
      for (int x = 0; x < lines; x = x + 1)
      {
         data[x] = new T[columns];
      } // end for
   }    // end constructor
   //---------------------
   ~Matrix()
   {
      if (data != NULL)
      {
         for (int x = 0; x < lines; x = x + 1)
         {
            delete (data[x]);
         } // end for
         delete (data);
      } // end if
   }    // end destructor ( )
   //---------------------
   void set(int line, int column, T value)
   {
      if (line < 0 || line >= lines ||
          column < 0 || column >= columns)
      {
         cout << "\nERROR: Invalid position.\n";
      }
      else
      {
         data[line][column] = value;
      } // end if
   }    // end set ( )
   //---------------------
   T get(int line, int column)
   {
      T value = 0; // value has type dependency
      if (line < 0 || line >= lines ||
          column < 0 || column >= columns)
      {
         cout << "\nERROR: Invalid position.\n";
      }
      else
      {
         value = data[line][column];
      } // end if
   }
   //---------------------
   void print()
   {
      cout << endl;
      for (int x = 0; x < lines; x = x + 1)
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            cout << data[x][y] << "\t";
         } // end for
         cout << endl;
      } // end for
      cout << endl;
   } // end print ( )
   //---------------------
   void read()
   {
      cout << endl;
      for (int x = 0; x < lines; x = x + 1)
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            cout << setw(2) << x << ", "
                 << setw(2) << y << " : ";
            cin >> data[x][y];
         } // end for
      }    // end for
      cout << endl;
   } // end read ( )
   //---------------------
   void fprint(string fileName)
   {
      ofstream afile;
      afile.open(fileName);
      afile << lines << endl;
      afile << columns << endl;
      for (int x = 0; x < lines; x = x + 1)
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            afile << data[x][y] << endl;
         } // end for
      }    // end for
      afile.close();
   } // end fprint ( )
   //---------------------
   void fread(string fileName)
   {
      ifstream afile;
      int m = 0;
      int n = 0;
      afile.open(fileName);
      afile >> m;
      afile >> n;
      if (m <= 0 || n <= 0)
      {
         cout << "\nERROR: Invalid dimensions for matrix.\n"
              << endl;
      }
      else
      {
         // guardar a quantidade de dados
         lines = m;
         columns = n;
         // reservar area
         data = new T *[lines];
         for (int x = 0; x < lines; x = x + 1)
         {
            data[x] = new T[columns];
         } // end for
         // ler dados
         for (int x = 0; x < lines; x = x + 1)
         {
            for (int y = 0; y < columns; y = y + 1)
            {
               afile >> data[x][y];
            } // end for
         }    // end for
      }       // end if
      afile.close();
   } // end fread ( )
   //---------------------
   Matrix &operator=(const Matrix<T> other)
   {
      if (other.lines == 0 || other.columns == 0)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         this->lines = other.lines;
         this->columns = other.columns;
         this->data = new T *[lines];
         for (int x = 0; x < lines; x = x + 1)
         {
            this->data[x] = new T[columns];
         } // end for
         for (int x = 0; x < this->lines; x = x + 1)
         {
            for (int y = 0; y < this->columns; y = y + 1)
            {
               data[x][y] = other.data[x][y];
            } // end for
         }    // end for
      }       // end if
      return (*this);
   } // end operator= ( )
   //---------------------
   bool isZeros()
   {
      bool result = true;
      int x = 0;
      int y = 0;
      while (x < lines && result)
      {
         y = 0;
         while (y < columns && result)
         {
            result = result && (data[x][y] == 0);
            y = y + 1;
         } // end for
         x = x + 1;
      } // end while
      return (result);
   } // end isZeros ( )
   //---------------------
   bool operator!=(const Matrix<T> other)
   {
      bool result = false;
      int x = 0;
      int y = 0;
      if (other.lines == 0 || lines != other.lines ||
          other.columns == 0 || columns != other.columns)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         x = 0;
         while (x < lines && !result)
         {
            y = 0;
            while (y < columns && !result)
            {
               result = (data[x][y] != other.data[x][y]);
               y = y + 1;
            } // end for
            x = x + 1;
         } // end for
      }    // end if
      return (result);
   } // end operator!= ( )
   //---------------------
   Matrix &operator-(const Matrix<T> other)
   {
      static Matrix<T> result(1, 1);
      int x = 0;
      int y = 0;
      result = other;
      if (other.lines == 0 || lines != other.lines ||
          other.columns == 0 || columns != other.columns)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         for (int x = 0; x < result.lines; x = x + 1)
         {
            for (int y = 0; y < result.columns; y = y + 1)
            {
               result.data[x][y] = data[x][y] - other.data[x][y];
            } // end for
         }    // end for
      }       // end if
      return (result);
   } // end operator- ( )
   //---------------------
   Matrix &operator*(const Matrix<T> other)
   {
      static Matrix<T> result(1, 1);
      int x = 0;
      int y = 0;
      int z = 0;
      int sum = 0;
      if (lines <= 0 || columns == 0 ||
          other.lines <= 0 || other.columns == 0 ||
          columns != other.lines)
      {
         cout << endl
              << "ERROR: Invalid data." << endl;
         result.data[0][0] = 0;
      }
      else
      {
         result.lines = lines;
         result.columns = other.columns;
         result.data = new T *[result.lines];
         for (int x = 0; x < result.lines; x = x + 1)
         {
            result.data[x] = new T[result.columns];
         } // end for
         for (x = 0; x < result.lines; x = x + 1)
         {
            for (y = 0; y < result.columns; y = y + 1)
            {
               sum = 0;
               for (z = 0; z < columns; z = z + 1)
               {
                  sum = sum + data[x][z] * other.data[z][y];
               } // end for
               result.data[x][y] = sum;
            } // end for
         }    // end for
      }       // end if
      return (result);
   } // end operator* ( )
     //---------------------
   const int getLines()
   {
      return (lines);
   } // end getLines ( )
   const int getColumns()
   {
      return (columns);
   } // end getColumns ( )
     //-------------|Atividades|--------
   void random(int I, int F, string fileName)
   {
      // definir dados
      int aleatory = 0;
      // teste
      if (columns <= 0 || lines <= 0)
      {
         cout << "ERRO: Dimensoes não aceitas" << endl;
      } // end if
      else
      {
         cout << endl;
         ofstream afile; // output file
         afile.open(fileName);
         afile << lines << endl;
         afile << columns << endl;
         for (int x = 0; x < lines; x = x + 1)
         {
            for (int y = 0; y < columns; y = y + 1)
            {
               aleatory = I + rand() / (RAND_MAX / (F - I + 1) + 1);
               data[x][y] = aleatory;
               afile << data[x][y] << endl;
            } // end for
         }    // end for
         afile.close();
         cout << endl;
      } // end if
   }    // end random ( )
   //---------------------------------------
   void escal(int C)
   {
      if (columns <= 0 || lines <= 0)
      {
         cout << "ERRO: Dimensoes não aceitas" << endl;
      }
      else
      {
         for (int x = 0; x < lines; x = x + 1)
         {
            for (int y = 0; y < columns; y = y + 1)
            {
               data[x][y] = (data[x][y] * C);
            } // end for
         }    // end for
      }       // end if
   }          // end escal()
   //---------------------------------------
   bool identidad(void)
   {
      bool result = true;
      if (columns <= 0 || lines <= 0)
      {
         cout << "ERRO: Dimensoes não aceitas" << endl;
      } // end if
      else
      {
         if (columns != lines)
         {
            result = false;
            return (result);
         } // end if
         else
         {
            for (int x = 0; x < lines; x = x + 1)
            {
               for (int y = 0; y < columns; y = y + 1)
               {
                  if ((x == y && data[x][y] != 1) ||
                      (x != y && data[x][y] != 0))
                  {
                     result = false;
                  } // end if
               }    // end for
            }       // end for
            return (result);
         } // end if
      }    // end result()
   }
   //---------------------------------------
   bool operator==(const Matrix<T> other)
   {
      if (other.data == NULL || data == NULL)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         if (lines != other.lines && columns != other.columns)
         {
            return (false);
         } // end if
         else
         {
            for (int x = 0; x < this->lines; x = x + 1)
            {
               for (int y = 0; y < this->columns; y = y + 1)
               {
                  if (data[x][y] != other.data[x][y])
                  {
                     return (false);
                  }
               } // end for
            }    // end for
         }       // end if
      }          // end if
   }             // end operator== ( )
   //---------------------------------------
   Matrix &operator+(const Matrix<T> other)
   {
      static Matrix<T> result(1, 1);
      int x = 0;
      int y = 0;
      result = other;
      if (other.lines == 0 || lines != other.lines ||
          other.columns == 0 || columns != other.columns)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         for (int x = 0; x < result.lines; x = x + 1)
         {
            for (int y = 0; y < result.columns; y = y + 1)
            {
               result.data[x][y] = data[x][y] + result.data[x][y];
            } // end for
         }    // end for
      }       // end if
      //cout << "teste2" << endl;
      //result.print();
      return (result);
   } // end operator+ ( )
   //------------------------------------------------------------
   void addRows(int l1, int l2, int K)
   {
      if (columns <= 0 || lines <= 0 
         || lines - 1 < l1 || lines - 1 < l2)
      {
         cout << "ERRO: Dimensao nao permitida" << endl;
      }
      else
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            data[l1][y] = (data[l2][y] + data[l1][y]) * K;
         } // end for
      }
   }
   //-----------------------------------------------------------
   void subCol(int c1, int c2, int K)
   {
      if (lines <= 0 || columns <= 0 
      || columns - 1 < c1 || columns - 1 < c2)
      {
         cout << "ERRO: Dimensao nao permitida" << endl;
      }
      else
      {
         for (int x = 0; x < lines; x = x + 1)
         {
            data[x][c1] = (data[x][c1] - data[x][c2]) * K;
         } // end for
      }
   }
   //-------------------------------------------------------------
   int searchRows(int v)
   {
      int l = 0;
      for (int x = 0; x < lines; x = x + 1)
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            if (data[x][y] == v)
            {
               l = x + 1;
            }
         } // end for
      }
      return l;
   }
   //-------------------------------------------------------------
   int searchCol(int v)
   {
      int l = 0;
      for (int x = 0; x < lines; x = x + 1)
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            if (data[x][y] == v)
            {
               l = y + 1;
            }
         } // end for
      }
      return l;
   }
   //-------------------------------------------------------------
   Matrix transp(void)
   {
      int x = 0;
      int y = 0;
      if (lines <= 0 || columns <= 0)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         static Matrix<T> result(columns, lines);
         for (int x = 0; x < result.lines; x = x + 1)
         {
            for (int y = 0; y < result.columns; y = y + 1)
            {
               result.data[y][x] = data[x][y];
            } // end for
         }    // end for
         return (result);
      } // end if
   }
   //-------------------------------------------------------------
};
#endif