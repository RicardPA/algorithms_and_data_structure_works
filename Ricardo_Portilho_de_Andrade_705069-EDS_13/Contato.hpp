/*
 Contato.hpp - v0.0. - 20 / 06 / 2020
 Author:Ricardo Portilho de Andrade 
*/
// ----------------------------------------------- definicoes globais

#ifndef _CONTATO_H_
#define _CONTATO_H_
// dependencias
#include <cstring>
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
// outras dependencias
void pause(std::string text)
{
   std::string dummy;
   std::cin.clear();
   std::cout << std::endl
             << text;
   std::cin.ignore();
   std::getline(std::cin, dummy);
   std::cout << std::endl
             << std::endl;
} // end pause ( )
#include "Erro.hpp"
// ---------------------------------------------- definicao de classe
/**
 * Classe para tratar contatos, derivada da classe Erro.
 */
class Contato : public Erro
{
   /**
* atributos privados.
*/
private:
   string nome;
   string fone;
   string sfone;
   int fones = 0;
   bool testFone(string tel)
   {
      // definir valores
      bool result = true;
      int tamanho = 0;
      // fazer
      tamanho = strlen(tel.c_str()); // obter tamanho da string
      for (int i = 0; i < tamanho; i++)
      {
         if ((tel[i] > '9' || tel[i] < '0') && tel[i] != '-')
         {
            result = false;
            cout << "ERRO: Por favor verifique o seu numero" << endl;
         }

         // cout << tel[i] << '(' << result << ')' << endl;
      }
      return (result);
   }
   /**
* definicoes publicas.
*/
public:
   /**
* Destrutor.
*/
   ~Contato()
   {
   }
   /**
* Construtor padrao.
*/
   Contato()
   {
      setErro(0); // nenhum erro, ainda
      // atribuir valores iniciais vazios
      nome = "";
      fone = "";
      sfone = "";
      fones = 0;
   } // fim construtor padrao
     // ----------------------------------- metodos para acesso
   /**
* Metodo para atribuir nome.
* @param nome a ser atribuido
*/
   void setNome(std::string nome)
   {
      this->nome = nome;
   } // fim setNome ( )
   /**
* Metodo para atribuir telefone.
* @param fone a ser atribuido
*/
   void setFone(std::string fone)
   {
      this->fone = fone;
      this->fones = this->fones + 1;
   } // fim setFone ( )
   /**
* Metodo para atribuir o segundo telefone.
* @param sfone a ser atribuido
*/
   void setSFone(std::string sfone)
   {
      this->sfone = sfone;
      this->fones = this->fones + 1;
   } // fim setSFone ( )
   /**
* Funcao para obter nome.
* @return nome armazenado
*/
   std::string getNome()
   {
      return (this->nome);
   } // fim getNome ( )
   /**
* Funcao para obter fone.
* @return fone armazenado
*/
   std::string getFone()
   {
      return (this->fone);
   } // fim getFone ( )
   /**
* Funcao para obter segundo fone.
* @return fone armazenado
*/
   std::string getSFone()
   {
      return (this->sfone);
   } // fim getFone ( )
   /**
* Funcao para obter quantidade de telefones.
* @return fone armazenado
*/
   std::string getFones()
   {
      string Fones = std::to_string(this->fones);
      return (Fones);
   } // fim getFone ( )
   /**
* Funcao para obter dados de uma pessoa.
* @return dados de uma pessoa
*/
   std::string toString()
   {
      string Nome = getNome();
      string Fone = getFone();
      string SFone = getSFone();
      if (Nome == "")
      {
         Nome = "(NULL)";
      }
      if (Fone == "")
      {
         Fone = "(NULL)";
      }
      if (SFone == "")
      {
         SFone = "(NULL)";
      }
      return ("{ " + Nome + ", " + Fone + ", " + SFone + " }");
   } // fim toString ( )
   /**
    *    /**
* Funcao para obter quantos fones tem a pessoa.
* @return dados de uma pessoa
*/
   std::string toFones()
   {
      return ("( " + getFones() + " )");
   } // fim toString ( )
   /**
* Construtor alternativo.
* @param nome_inicial a ser atribuido
* @param fone_inicial a ser atribuido
*/
   Contato(std::string nome_inicial, std::string fone_inicial)
   {
      // atribuir valores iniciais
      nome = nome_inicial;
      fone = fone_inicial;
   } // fim construtor alternativo
   /**
* indicar a existencia de erro.
*/
   bool hasErro()
   {
      return (getErro() != 0);
   } // end hasErro ( )
     /**
* Construtor alternativo baseado em copia.
*/
   Contato(Contato const &another)
   {
      // atribuir valores iniciais por copia
      setErro(0);            // copiar erro
      setNome(another.nome); // copiar nome
      setFone(another.fone); // copiar fone
   }                         // fim construtor alternativo
                             //____________________________________________________________
                             /*
Colocar valor no objeto Nome 
*/
   void pushName()
   {
      // definir variavel
      string Nome = "";
      cout << "\nPor favor coloque o nome do usuario: ";
      while (Nome == "")
      {
         cin >> Nome;
      }
      this->nome = Nome;
   } // fim voi pushName
   /*
Colocar valor no objeto fone 
*/
   void pushFone()
   {
      // definir variavel
      string Fone = "";
      while (Fone == "" || !(testFone(Fone)))
      {
         cout << "\nPor favor coloque o numero de contato do usuario: ";
         cin >> Fone;
      }
      this->fone = Fone;
      this->fones = this->fones + 1;
   } // fim void pushFone
   /*
Colocar valor no objeto sfone 
*/
   void pushSFone()
   {
      // definir variavel
      string Fone = "";
      while (Fone == "" || !(testFone(Fone)))
      {
         cout << "\nPor favor coloque o segundo numero de contato do usuario: ";
         cin >> Fone;
      }
      this->sfone = Fone;
      this->fones = this->fones + 1;
   } // fim void pushFone
   /*
   Ler dados de pessoas em um arquivo
   */
   void scanFilePeople(string fileName)
   {
      // definir dados
      ifstream afile;
      string Nome = "";
      string Fone = "";
      string SFone = "";
      int tamanho = 0;
      afile.open(fileName);
      afile >> tamanho;
      if (tamanho > 0)
      {
         afile >> Nome;
         afile >> Fone;
         afile >> SFone;
         if (Nome != "" && Fone != "" && SFone != "")
         {
            this->nome = Nome;
            this->fone = Fone;
            this->sfone = SFone;
            this->fones = this->fones + 2;
         }
         else if (Nome != "" && Fone != "" && SFone == "")
         {
            this->nome = Nome;
            this->fone = Fone;
            this->fones = this->fones + 1;
         }
         else if (Nome != "" && Fone == "" && SFone == "")
         {
            this->nome = Nome;
         }
         else
         {
            cout << "ERRO: Nenhum conteudo encontrado" << endl;
         }
      }else {
         cout << "ERRO: Desculpe, mas esse arquivo nao contem um tamanho adquado" << endl;
      }
      afile.close();
   }
   /*
   colocar dados de uma pessoa em um arquivo
   */
   void printFilePeople(string fileName)
   {
      // definir dados
      ofstream afile;
      string Nome = this->nome;
      string Fone = this->fone;
      string SFone = this->sfone;
      int tamanho1 = strlen(Nome.c_str());
      int tamanho2 = strlen(Fone.c_str());
      int tamanho3 = strlen(SFone.c_str());
      afile.open(fileName);
      if (tamanho1 > 0 && tamanho2 == 0 && tamanho3 == 0)
      {
         afile << 1 << endl;
         afile << Nome << endl;
      }
      else if (tamanho1 > 0 && tamanho2 > 0 && tamanho3 == 0)
      {
         afile << 2 << endl;
         afile << Nome << endl;
         afile << Fone << endl;
      }
      else
      {
         afile << 3 << endl;
         afile << Nome << endl;
         afile << Fone << endl;
         afile << SFone << endl;
      }
      afile.close();
   }
   /**
* Metodo para modificar o segundo telefone.
* @param smfone a ser atribuido
*/
   void setSMFone(std::string smfone)
   {
      if (fones >= 1)
      {
         this->sfone = smfone;
      }
      else
      {
         cout << "ERRO: Nao ha' um primeiro numero de telefone" << endl;
      }
   } // fim setSMFone ( )
   /**
* Metodo para modificar o segundo telefone.
*/
   void dellSFone()
   {
      if (fones > 0)
      {
         this->sfone = "";
         this->fones = this->fones - 1;
      }
      else
      {
         cout << "ERRO: Nao ha' um primeiro numero de telefone" << endl;
      }
   }                           // fim dellSFone ( )
};                             // fim da classe Contato
using ref_Contato = Contato *; // similar a typedef Contato* ref_Contato;
#endif