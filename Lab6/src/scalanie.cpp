#include <iostream>

#include "scalanie.hh"
#include "tablica.hh"

Scalanie::Scalanie() {
}

void Scalanie::KopiujTablice(Tablica &obj) {
	for (unsigned int i = 0; i < obj.ZwrocRozmiar(); ++i) {
		_kopia.Wpisz(i, obj[i]);
	}
}

void Scalanie::DrukujKopie() {
	_kopia.Drukuj();
}

void Scalanie::WykonajAlgorytm(unsigned int ile) {
	SortowaniesScalanie(0, (_kopia.ZwrocRozmiar() - 1));
}

void Scalanie::Scal(int lewy, int srodek, int prawy) {
	int i,j,q;
	for (i=lewy; i<=prawy; i++) pom[i]=_kopia[i];  // Skopiowanie danych do tablicy pomocniczej
	i=lewy; j=srodek+1; q=lewy;                 // Ustawienie wskaźników tablic
	while (i<=srodek && j<=prawy) {         // Przenoszenie danych z sortowaniem ze zbiorów pomocniczych do tablicy głównej
	if (pom[i]<pom[j])
	_kopia[q++]=pom[i++];
	else
	_kopia[q++]=pom[j++];
	}
	while (i<=srodek) _kopia[q++]=pom[i++]; // Przeniesienie nie skopiowanych danych ze zbioru pierwszego w przypadku, gdy drugi zbiór się skończył
}

void Scalanie::SortowaniesScalanie(int lewy, int prawy) {
	//gdy mamy jeden element, to jest on już posortowany
	if (prawy <= lewy)
		return;

	//znajdujemy srodek podtablicy
	int srodek = (prawy + lewy) / 2;

	//dzielimy tablice na częsć lewą i prawa
	SortowaniesScalanie(lewy, srodek);
	SortowaniesScalanie(srodek + 1, prawy);

	//scalamy dwie już posortowane tablice
	Scal(lewy, srodek, prawy);
}
