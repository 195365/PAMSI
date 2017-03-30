#ifndef MIERZALNY_H_
#define MIERZALNY_H_

#include "Stoper.h"
#include "Wykonywalny.h"

class Mierzalny {
public:
	Mierzalny(Wykonywalny &obiekt,int ilosc, int wielkosc_problemu);
	void WykonajSerie(Wykonywalny &obiekt);
	double PodajSredniCzas();
	virtual ~Mierzalny();
private:
	int iloscPowtorzen, wielkoscProblemu;
	double *tab;
	Stoper stoper;
};



#endif /* SERIA_H_ */
