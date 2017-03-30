#include <iostream>
#include <cstring>
#include "TablicaX2.h"

using namespace std;

int TablicaX2::ZapisanieElemantu(int index, int wartosc) {
	if (index < rozmiar) {
		tab[index] = wartosc;
		return 0;
	}
	if (index == rozmiar) {
		ZmienRozmiar(rozmiar * 2);	//strategia zwiększania x2
		//cout<<"Zwiekszono rozmiar tablicy x2"<<endl;
		tab[index] = wartosc;
		return 0;
	}
	if (index > rozmiar) {
		return 1;
	}
	return 1;
}
