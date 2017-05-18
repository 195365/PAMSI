#include "Mierzalny.h"

Mierzalny::Mierzalny(Wykonywalny &obiekt,int ilosc, int wielkosc_problemu) {
	wielkoscProblemu=wielkosc_problemu;
	iloscPowtorzen = ilosc;
	tab = new double[iloscPowtorzen];
}

void Mierzalny::WykonajSerie(Wykonywalny &obiekt) {
	for (int i = 0; i < iloscPowtorzen; i++) {
		obiekt.PrzygotujAlgorytmDoWykonania(wielkoscProblemu);
		stoper.Start();
		obiekt.WykonajAlgorytm(wielkoscProblemu);
		stoper.Stop();
		tab[i] = stoper.PodajCzas(1);
	}
}

double Mierzalny::PodajSredniCzas() {
	long double suma = 0;
	for (int i = 0; i < iloscPowtorzen; i++) {
		suma = suma + tab[i];
	}
	return static_cast<double>(suma/iloscPowtorzen);
}

Mierzalny::~Mierzalny() {
	delete[] tab;
}
