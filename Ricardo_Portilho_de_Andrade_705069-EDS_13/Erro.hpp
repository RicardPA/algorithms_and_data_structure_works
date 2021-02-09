/**
 * Classe para tratar erro.
 */
#ifndef _ERRO_H_
#define _ERRO_H_
class Erro
{
    /*
 * tratamento de erro.
 Codigos de erro:
 0. Nao ha' erro.
 */
    /**
 * atributos privados.
 */
private:
    int erro;
    /**
 * definicoes publicas.
 */
public:
    /**
 * Destrutor.
 */
    ~Erro()
    {
    }
    /**
 * Construtor padrao.
 */
    Erro()
    {
        // atribuir valor inicial
        erro = 0;
    } // fim construtor padrao
    // ------------------------------------------- metodos para acesso
    /**
 * Funcao para obter o codigo de erro.
 @return codigo de erro guardado
 */
    int getErro()
    {
        return (erro);
    } // end getErro ( )
protected:
    // ------------------------------------------- metodos para acesso restrito
    /**
 * Metodo para estabelecer novo codigo de erro.
 @param codigo de erro a ser guardado
 */
    void setErro(int codigo)
    {
        erro = codigo;
    } // end setErro ( )
};    // fim da classe Erro
#endif