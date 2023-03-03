#ifndef PILHA_H
#define PILHA_H
#include <QString>
namespace hj{

class Pilha
{

private:
    int tamanho;
    int topo;
    int *array;
public:
    Pilha(int tamanho);
    ~Pilha();
    bool estaVazia()const;
    int empilhar();

    bool estaCheia()const;
    int desempilhar();

    int acessar()const;

};
}

#endif // PILHA_H
