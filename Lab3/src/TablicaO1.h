#ifndef TABLICAO1_H_
#define TABLICAO1_H_
#include "Wykonywalny.h"

class TablicaO1: public Wykonywalny {
public:
	TablicaO1();
	int Rozmiar();
	virtual int ZapisanieElemantu(int index, int wartosc);
	int OdczytanieElementu(int index);
	void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);
	void WykonajAlgorytm(int wielkosc_problemu);
protected:
	int* tab;
	int rozmiar;
	void ZmienRozmiar(int nowyRozmiar);
};

#endif /* TABLICA_H_ */
