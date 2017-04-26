#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StosAlgorytm.h"

using namespace std;

StosAlgorytm::StosAlgorytm(Stos &_stos) {
	stos = &_stos;
	tab = NULL;
}

//funkcja przygotowuje liste, usuwa z niej wszystkie elementy nastepnie
//wypelnia losowymi wartosciami i na koniec wstawia wartosc ktora bedziemy wyszukiwali
//lub wstawia ja na losowa pozycje
void StosAlgorytm::PrzygotujAlgorytmDoWykonania(int wielkosc_problemu) {
	while (stos->Size() > 0) {
		stos->Remove();
	}
	tab = new int[wielkosc_problemu];
	srand(time( NULL));
	for (int i = 0; i < wielkosc_problemu; i++) {
		tab[i] = (rand() % 1000) + 1;
	}
	//tab[0]=1001; //dodanie elementu ktorego bedziemy szukac na nijnizszy poziom kopca
	tab[(rand() % (wielkosc_problemu - 1)) + 0] = 1001; //dodanie elementu ktorego bedziemy szukac na losowa pozycje w kopcu
}

void StosAlgorytm::WykonajAlgorytm(int wielkosc_problemu) {
	for (int i = 0; i < wielkosc_problemu; i++) {
		stos->Push(tab[i]);
	}
	for (int i = 0; stos->Size() > 0; i++) {
		if (stos->Pop() == 1001) {
			//cout << "Znaleziono na pozycji: " << i << endl;
			break;
		}
	}
}

