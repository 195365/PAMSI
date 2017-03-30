/*
 * Stos.h
 *
 *  Created on: 30.03.2017
 *      Author: rafal
 */

#ifndef STOS_H_
#define STOS_H_
#include <Istack.h>
#include <Wykonywalny.h>


class Stos: public Istack, public Wykonywalny  {
public:
	void Remove();
	void Push(int value);
	int Pop();
	int Size();
	void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);
	void WykonajAlgorytm(int wielkosc_problemu);
private:
	int *tab;
};


#endif /* STOS_H_ */
