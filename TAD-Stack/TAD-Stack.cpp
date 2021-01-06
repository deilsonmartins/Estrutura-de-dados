// Implementação do TAD Pilha (Stack)

#include <iostream>
#include "Pilha.h"

using namespace std;

int main(int argc, char const* argv[])
{
    int tamanho_maximo = 3;
    Pilha<int> p(tamanho_maximo);

    p.empilhar(1);
    p.empilhar(2);
    p.empilhar(3);
    p.desempilhar();

    for (int i = 0; i <= p.getIndexTopo(); i++)
    {
        cout << p.getVetor()[i] << endl;
    }

    return 0;
}


