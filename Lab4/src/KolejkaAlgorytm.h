#ifndef KOLEJKAALGORYTM_H_
#define KOLEJKAALGORYTM_H_

#include "Kolejka.h"
#include "Wykonywalny.h"

class KolejkaAlgorytm: public Wykonywalny {
public:
	KolejkaAlgorytm(Kolejka &_kolejka);
	virtual void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);
	virtual void WykonajAlgorytm(int wielkosc_problemu);
private:
	Kolejka* kolejka;
	int* tab;
};

#endif
