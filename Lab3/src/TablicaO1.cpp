#include <iostream>
#include <cstring>
#include "TablicaO1.h"

using namespace std;

TablicaO1::TablicaO1() {
	rozmiar = 10;
	tab = new int[rozmiar];
}

int TablicaO1::Rozmiar() {
	return rozmiar;
}

int TablicaO1::ZapisanieElemantu(int index, int wartosc) {
	if (index < rozmiar) {
		tab[index] = wartosc;
		return 0;
	}
	if (index == rozmiar) {
		ZmienRozmiar(rozmiar + 1);	//strategia powiększania o +1
		//cout << "Zwiekszono rozmiar tablicy o 1" << endl;
		tab[index] = wartosc;
		return 0;
	}
	if (index > rozmiar) {
		return 1;
	}
	return 1;
}

int TablicaO1::OdczytanieElementu(int index) {
	if (index < rozmiar) {
		return tab[index];
	} else {
		cout << "Index wiekszy niz rozmiar tablicy" << endl;
		return 0;
	}
}

void TablicaO1::ZmienRozmiar(int nowyRozmiar) {
	if (nowyRozmiar < rozmiar)
		rozmiar = nowyRozmiar;
	int *temp = new int[nowyRozmiar];
	memcpy(temp, tab, rozmiar * sizeof(int));
	/*for (int i = 0; i < rozmiar; i++) {
	 temp[i] = tab[i];
	 }*/
	delete[] tab;
	tab = temp;
	rozmiar = nowyRozmiar;
}

void TablicaO1::PrzygotujAlgorytmDoWykonania(int wielkosc_problemu) {
	ZmienRozmiar(10);
	for (int i = 0; i < 10; i++) {
		ZapisanieElemantu(i, 0);
	}
}

void TablicaO1::WykonajAlgorytm(int wielkosc_problemu) {
	for (int i = 0; i < wielkosc_problemu; i++) {
		ZapisanieElemantu(i, i);
	}
}
