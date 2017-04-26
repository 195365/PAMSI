#ifndef STOSALGORYTM_H_
#define STOSALGORYTM_H_

#include "Stos.h"
#include "Wykonywalny.h"

class StosAlgorytm: public Wykonywalny {
public:
	StosAlgorytm(Stos &_stos);
	virtual void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);
	virtual void WykonajAlgorytm(int wielkosc_problemu);
private:
	Stos* stos;
	int* tab;
};

#endif
