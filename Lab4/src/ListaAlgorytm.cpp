/*
 * ListaAlgorytm.cpp
 *
 *  Created on: 25.04.2017
 *      Author: rafal
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ListaAlgorytm.h"


ListaAlgorytm::ListaAlgorytm(Lista &_lista){
lista=&_lista;
}

//funkcja przygotowuje liste, usuwa z niej wszystkie elementy nastepnie
//wypelnia losowymi wartosciami i na koniec wstawia wartosc ktora bedziemy wyszukiwali
//lub wstawia ja na losowa pozycje
void ListaAlgorytm::PrzygotujAlgorytmDoWykonania(int wielkosc_problemu) {
	while (lista->Size()>0) {
		lista->RemoveFront();
	}
	srand(time( NULL));
	for (int i = 0; i < wielkosc_problemu - 1; i++) {
		lista->Add((rand() % 1000) + 1, i);
	}
	//lista->AddBack(1001);
	lista->Add(1001,(rand() % (wielkosc_problemu-1) ) + 0);
}

void ListaAlgorytm::WykonajAlgorytm(int wielkosc_problemu) {
	lista->Find(1001);
}



