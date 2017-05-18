/*
 * quicksort.cpp
 *
 *  Created on: 17.05.2017
 *      Author: rafal
 */

#include <iostream>
#include <cstdlib>

#include "quicksort.h"
#include "TablicaO1.h"

QuickSort::QuickSort() {
}

void QuickSort::Sortuj(int lewy, int prawy, TablicaO1 &tab) {
	int piwot = tab[(lewy + prawy) / 2]; //ustawienie piwota na wartosc w połowie tablicy
	int i = lewy;
	int j = prawy;

	while (i <= j) {
		while (tab[i] < piwot)
			i++;	//porownujemy elementy tablicy do wartosci piwota
		while (tab[j] > piwot)
			j--;
		if (i <= j) {
			std::swap(tab[i], tab[j]);	//zamiana elementow
			i++;
			j--;
		}
	}
	if (j > lewy)
		Sortuj(lewy, j,tab);
	if (i < prawy)
		Sortuj(i, prawy,tab);
}

void QuickSort::PrzygotujAlgorytmDoWykonania(int wielkosc_problemu) {
	//wypełnienie tablicy losowymi wartosciami
		for(int i=0;i<wielkosc_problemu;i++){
			tablica.ZapisanieElemantu(i,(rand() % 1000) + 1);
		}
}
void QuickSort::WykonajAlgorytm(int wielkosc_problemu) {
	Sortuj(0,tablica.Rozmiar(),tablica);
}

