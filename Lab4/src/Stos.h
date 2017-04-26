/*
 * Stos.h
 *
 *  Created on: 30.03.2017
 *      Author: rafal
 */

#ifndef STOS_H_
#define STOS_H_
#include "Istack.h"
#include "Lista.h"

class Stos: public Istack {
public:
	Stos();
	void Remove();
	void Push(int value);
	int Pop();
	int Size();
private:
	Lista lista;
	unsigned int rozmiar;
};


#endif /* STOS_H_ */
