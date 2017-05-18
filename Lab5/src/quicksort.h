/*
 * quicksort.h
 *
 *  Created on: 17.05.2017
 *      Author: rafal
 */

#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#include "Wykonywalny.h"
#include "TablicaO1.h"


class QuickSort : public Wykonywalny
{
	public:
	QuickSort();
	void Sortuj(int lewy, int prawy,TablicaO1 &tab);
	virtual void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);
	virtual void WykonajAlgorytm(int wielkosc_problemu);
	private:
	TablicaO1 tablica;
};

#endif /* QUICKSORT_H_ */
