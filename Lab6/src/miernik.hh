#ifndef miernik_hh
#define miernik_hh

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "iwykonywalny.hh"

class Miernik
{
	double *_dane;
	clock_t _poczatek, _koniec;
	double  _srednia;
	unsigned int _ilosc_powtorzen;

public:
	void Start();

	void Stop();

	double PoliczCzas();


	double LiczSrednia(unsigned int ile_srednia, unsigned int ile_algorytm, IWykonywalny &obj);
	void DrukujPomiary();
	void DrukujSrednia();
};

#endif