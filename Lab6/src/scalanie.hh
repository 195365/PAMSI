#ifndef scalanie_hh
#define scalanie_hh

#include "tablica.hh"
#include "iwykonywalny.hh"

class Scalanie : public IWykonywalny
{

	Tablica _kopia;
	Tablica pom;

	public:

	Scalanie();

	void KopiujTablice(Tablica &obj);

	void DrukujKopie();

	void Scal(int lewy, int srodek, int prawy);

	void SortowaniesScalanie(int lewy, int prawy);

	void WykonajAlgorytm(unsigned int ile);
};
#endif
