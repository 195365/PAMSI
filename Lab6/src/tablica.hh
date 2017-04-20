#ifndef tablica_hh
#define tablica_hh

#include <iostream>

#include "itablica.hh"


class Tablica : public ITablica
{
	int *_tab;
	unsigned int  _rozmiar;

	void Powieksz(int nowy_rozmiar);
	
	void Powieksz2x();
	
	void PowiekszO1();

public:
	Tablica();
	
	Tablica(int r);
	
	unsigned int ZwrocRozmiar();

	void Wpisz(unsigned int indeks, int wartosc);

	void Drukuj();

	int & operator[](size_t ind) 
	{
		return _tab[ind];
	}

};

#endif