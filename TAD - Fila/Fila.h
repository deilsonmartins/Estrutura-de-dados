#pragma once
#include <list>

template <class T>
class Fila
{
	std::list<T> lista;

public:

	void imprimir_fila()
	{
		for (std::list<int>::iterator it = lista.begin(); it != lista.end(); it++)
			std::cout << *it << std::endl;
	}

	void vazia()
	{
		if (this->lista.empty())
		{
			std::cout << "Lista esta vazia" << std::endl;
		}

		else
			std::cout << "Lista nao esta vazia" << std::endl;
	}

	void adicionar_elemento(T elemento)
	{
		lista.push_back(elemento);
	}

	void remover_elemento()
	{
		if (!lista.empty())
			lista.pop_front();
		else
			throw "Lista vazia!";
	}
};

