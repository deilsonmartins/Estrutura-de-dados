#pragma once
#include <iostream>

using namespace std;

template <class T>
class Pilha
{
private:
    T* vetor;
    int index_topo;
    int tamanho_maximo;

public:

    Pilha(int tamanho_maximo)
    {
        index_topo = -1;
        this->tamanho_maximo = tamanho_maximo;
        this->vetor = new T[tamanho_maximo];
    }

    ~Pilha()
    {
        delete[] vetor;
    }

    void empilhar(T elemento)
    {
        if ((tamanho_maximo - 1) == index_topo)
            cout << "Não é possível empilhar uma pilha cheia" << endl;

        else
            vetor[++index_topo] = elemento;
    }

    void desempilhar()
    {
        if (index_topo == -1)
            cout << "Não é possível desempilhar uma pilha vazia" << endl;

        index_topo--;
    }

    int getIndexTopo()
    {
        return index_topo;
    }

    T* getVetor()
    {
        return vetor;
    }
};

