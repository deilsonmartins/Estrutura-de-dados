#include <iostream>
#include "Fila.h"

int main()
{
    Fila<int> f;

    f.adicionar_elemento(2);
    f.adicionar_elemento(3);
    f.adicionar_elemento(5);

    try
    {
        f.remover_elemento();
    }
    catch (const char* msg)
    {
        std::cerr << "Erro: " << msg << std::endl;
    }

    f.imprimir_fila();
    
}

