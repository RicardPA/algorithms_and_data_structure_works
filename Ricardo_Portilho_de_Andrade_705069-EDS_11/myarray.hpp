/*
 myarray.hpp - v0.0. - 03 / 06 / 20
 Author: Ricardo Portilho de Andrade
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_
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

class Array
{
  //----------------------------------------------------------------------------------------------------------------

private: // area reservada
  int length;
  T *data;

  //------------------------------------------------------------------------------------------------------------------

public: // area aberta
  Array(int n)
  {
    // definir valor inicial
    length = n;
    data = NULL;
    // reservar area
    if (n > 0)
    {
      data = new T[length];
    }
  } // end constructor

  //--------------------------------------------------------------------------------------------------------------------

  void free()
  {
    if (data != NULL)
    {
      delete (data);
      data = NULL;
    } // end if
  }   // end free ( )

  //--------------------------------------------------------------------------------------------------------------------

  void set(int position, T value)
  {
    if (0 <= position && position < length)
    {
      data[position] = value;
    } // end if
  }   // end set ( )
  T get(int position)
  {
    T value = 0; // return value has type dependency
    if (0 <= position && position < length)
    {
      value = data[position];
    } // end if
    return (value);
  } // end get ( )

  //--------------------------------------------------------------------------------------------------------------------

  void print()
  {
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      cout << setw(3) << x << " : "
           << setw(9) << data[x]
           << endl;
    } // end for
    cout << endl;
  } // end print ( )

  //--------------------------------------------------------------------------------------------------------------------

  void read()
  {
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      cout << setw(3) << x << " : ";
      cin >> data[x];
    } // end for
    cout << endl;
  } // end read ( )

  //--------------------------------------------------------------------------------------------------------------------

  void fprint(string fileName)
  {
    ofstream afile; // output file
    afile.open(fileName);
    afile << length << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      afile << data[x] << endl;
    } // end for
    afile.close();
  } // end fprint ( )

  //--------------------------------------------------------------------------------------------------------------------

  void fread(string fileName)
  {
    ifstream afile; // input file
    int n = 0;
    afile.open(fileName);
    afile >> n;
    if (n <= 0)
    {
      cout << "\nERROR: Invalid length.\n"
           << endl;
    }
    else
    {
      // guardar a quantidade de dados
      length = n;
      // reservar area
      data = new T[n];
      // ler dados
      for (int x = 0; x < length; x = x + 1)
      {
        afile >> data[x];
      } // end for
    }   // end if
    afile.close();
  } // end fread ( )

  //--------------------------------------------------------------------------------------------------------------------

  int tamanhoArray(string fileName)
  {
    ifstream afile; // input file
    int n = 0;
    afile.open(fileName);
    afile >> n;
    afile.close();
    return n;
  }

  //--------------------------------------------------------------------------------------------------------------------

  Array() // construtor padrao
  {
    // definir valor inicial
    length = 0;
    // reservar area
    data = NULL;
  } // end constructor

  //--------------------------------------------------------------------------------------------------------------------

  // contrutor baseado em copia
  Array(int length, int other[])
  {
    if (length == 0)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      // criar copia
      this->length = length;
      // reservar area
      data = new T[this->length];
      // ler dados
      for (int x = 0; x < this->length; x = x + 1)
      {
        data[x] = other[x];
      } // end for
    }   // end if
  }     // end constructor ( )

  //--------------------------------------------------------------------------------------------------------------------

  Array(const Array &other)
  {
    if (other.length == 0)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      // criar copia
      length = other.length;
      // reservar area
      data = new T[other.length];
      // ler dados
      for (int x = 0; x < length; x = x + 1)
      {
        data[x] = other.data[x];
      } // end for
    }   // end if
  }     // end constructor ( )

  //---------------------------------------------------------------------------------------------------------------

  Array &operator=(const Array<T> other)
  {
    if (other.length == 0)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      this->length = other.length;
      this->data = new T[other.length];
      for (int x = 0; x < this->length; x = x + 1)
      {
        data[x] = other.data[x];
      } // end for
    }   // end if
    return (*this);
  } // end operator= ( )

  //---------------------------------------------------------------------------------------------------------------

  bool operator==(const Array<T> other)
  {
    bool result = true;
    int x = 0;
    if (other.length == 0 || length != other.length)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      x = 0;
      while (x < this->length && result)
      {
        result = result && (data[x] == other.data[x]);
        x = x + 1;
      } // end for
    }   // end if
    return (result);
  } // end operator== ( )

  //---------------------------------------------------------------------------------------------------------------

  Array &operator+(const Array<T> other)
  {
    static Array<T> result(other);
    if (other.length == 0)
    {
      cout << "\nERROR: Missing data.\n"
           << endl;
    }
    else
    {
      for (int x = 0; x < this->length; x = x + 1)
      {
        result.data[x] = result.data[x] + this->data[x];
      } // end for
    }   // end if
    return (result);
  } // end operator+ ( )

  //---------------------------------------------------------------------------------------------------------------

  const int getLength()
  {
    return (length);
  } // end getLength ( )
  T &operator[](const int position)
  {
    static T value = 0; // return value has type dependency
    if (position < 0 || length <= position)
    {
      cout << endl
           << "\nERROR: Invalid position.\n"
           << endl;
      return (value);
    }
    else
    {
      value = data[position];
      return (value);
    } // end if
  }   // end operator[]

  //---------------------------------------------------------------------------------------

  void random(int I, int F, string fileName)
  {
    // definir dados
    int aleatory = 0;
    cout << endl;
    ofstream afile; // output file
    afile.open(fileName);
    afile << length << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      aleatory = I + rand() / (RAND_MAX / (F - I + 1) + 1);
      data[x] = aleatory;
      afile << data[x] << endl;
      /*
      cout << setw(3) << x << " : " << aleatory
           << endl;
      */
    } // end for
    afile.close();
    cout << endl;
  } // end random ( )

  int arrayIntB()
  {
    int maior = 0;
    int aux = 0;
    cout << endl;
    maior = data[0];
    for (int x = 1; x < length; x = x + 1)
    {
      aux = data[x];
      if (maior < aux)
      {
        maior = aux;
      }
    } // end for
    cout << endl;
    return (maior);
  }

  int arrayIntS()
  {
    int menor = 0;
    int aux = 0;
    cout << endl;
    menor = data[0];
    for (int x = 1; x < length; x = x + 1)
    {
      aux = data[x];
      if (menor > aux)
      {
        menor = aux;
      }
    } // end for
    cout << endl;
    return (menor);
  }

  int arraySoma()
  {
    int somar = 0;
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      somar = somar + data[x];
    } // end for
    cout << endl;
    return (somar);
  }

  int arrayMedia()
  {
    int somar = 0;
    int media = 0;
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      somar = somar + data[x];
    } // end for
    cout << endl;
    media = ((somar) / (length));
    return (media);
  }

  bool arrayZero()
  {
    int c = 0;
    bool zero = false;
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      if (data[x] == 0)
      {
        c = c + 1;
      }
    } // end for
    if (c == length)
    {
      zero = true;
    }
    return (zero);
  }

  bool arrayOrd()
  {
    int n = 0;
    bool ordem = false;
    int c = 0;
    int auxn = 0;
    cout << endl;
    auxn = data[0];
    for (int x = 1; x < length; x = x + 1)
    {
      n = data[x];
      if (auxn > n)
      {
        c = c + 1;
      }
      auxn = n;
    } // end for
    if (c == 0)
    {
      ordem = true;
    }
    return (ordem);
  }

  bool arrayVOeste(int procurado, int I, int F)
  {
    bool encontrado = false;
    int c = 0;
    int n = 0;
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      n = data[x];
      if (n == procurado &&
          x >= I && x <= F)
      {
        c = c + 1;
      }
    } // end for
    if (c > 0)
    {
      encontrado = true;
    }
    return (encontrado);
  }

    void escalar(int V)
  {
    // definir dados
    cout << endl;
    for (int x = 0; x < length; x = x + 1)
    {
      data[x] = data[x] * V;
    } // end for
  } // end random ( )

  void arrayOrdern(){
    int o = 0;
    int auxo = 0;
    cout << endl;
    o = data[0];
    for (int x = 1; x < length; x = x + 1)
    {
      auxo = data[x];
      if (o > auxo){
      data[x] = o;
      data[x-1] = auxo;
      }
      o = auxo;
    } // end for
  }
};
#endif