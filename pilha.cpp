#include "pilha.h"
#include <QString>
namespace hj{

Pilha::Pilha(int tamanho):

    tamanho(tamanho),
    topo(-1),
    array(new int[tamanho]){
    try{
    if(tamanho<=0)
        array= new int[tamanho];
    this->tamanho=tamanho;
    }catch (std::bad_alloc &erro ){
        throw QString ("Tamanho inválido");
    }
}
    bool Pilha::estaVazia() const{
    return(topo==-1);
    }
    bool Pilha::estaCheia() const{
    return(topo==tamanho-1);
}
    int Pilha::desempilhar(){
        if(estaVazia()) {
       throw QString ("Pilha Vazia");
        }

        return array[--topo];

    }


    int Pilha::empilhar(){
        if(estaCheia()) {
         throw QString ("Pilha Cheia");
        }
       return array[++topo];
    }
    int Pilha::acessar() const{
    if(estaVazia()){
    throw QString ("Pilha Vazia");
    }
    return array[topo];
}
    Pilha::~Pilha(){
        delete[] array;
    }

} // namespace hj



