/*
 * Lista.h
 *
 *  Created on: 06.04.2017
 *      Author: rafal
 */

#ifndef LISTA_H_
#define LISTA_H_

#include "Ilist.h"
#include "ElementListy.h"

class Lista: public Ilist{
public:
	Lista();
	~Lista();
	int Add(int wartosc,unsigned int position);
	int AddFront(int wartosc);
	int AddBack(int wartosc);
	int Remove(unsigned int position);
	int RemoveFront();
	int RemoveBack();
	int Get(unsigned int position);
	int Find(int wartosc);
	unsigned int Size();
	void Drukuj();
private:
	ElementListy *poczatek;
	ElementListy *koniec;
	unsigned int rozmiar;
};

#endif /* LISTA_H_ */
