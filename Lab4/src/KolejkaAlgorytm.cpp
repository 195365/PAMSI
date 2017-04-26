#include <iostream>
#include <cstdlib>
#include <ctime>
#include "KolejkaAlgorytm.h"

using namespace std;

KolejkaAlgorytm::KolejkaAlgorytm(Kolejka &_kolejka) {
	kolejka = &_kolejka;
	tab = NULL;
}

//funkcja przygotowuje liste, usuwa z niej wszystkie elementy nastepnie
//wypelnia losowymi wartosciami i na koniec wstawia wartosc ktora bedziemy wyszukiwali
//lub wstawia ja na losowa pozycje
void KolejkaAlgorytm::PrzygotujAlgorytmDoWykonania(int wielkosc_problemu) {
	while (kolejka->Size() > 0) {
		kolejka->Remove();
	}
	tab = new int[wielkosc_problemu];
	srand(time( NULL));
	for (int i = 0; i < wielkosc_problemu; i++) {
		tab[i] = (rand() % 1000) + 1;
	}
	//tab[wielkosc_problemu-1]=1001; //dodanie elementu ktorego bedziemy szukac na nijnizszy poziom kopca
	tab[(rand() % (wielkosc_problemu - 1)) + 0] = 1001; //dodanie elementu ktorego bedziemy szukac na losowa pozycje w kopcu
}

void KolejkaAlgorytm::WykonajAlgorytm(int wielkosc_problemu) {
	for (int i = 0; i < wielkosc_problemu; i++) {
		kolejka->Push(tab[i]);
	}
	for (int i = 0; kolejka->Size() > 0; i++) {
		if (kolejka->Pop() == 1001) {
			//cout << "Znaleziono na pozycji: " << i << endl;
			break;
		}
	}
}

