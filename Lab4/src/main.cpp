#include <iostream>
#include "Mierzalny.h"
#include "Lista.h"
#include "ListaAlgorytm.h"
#include "Stos.h"
#include "StosAlgorytm.h"
#include "Kolejka.h"
#include "KolejkaAlgorytm.h"

using namespace std;

int main() {
	Lista* l1=new Lista;
	Stos* s1=new Stos;;
	Kolejka* k1=new Kolejka;
	ListaAlgorytm L(*l1);
	StosAlgorytm S(*s1);
	KolejkaAlgorytm K(*k1);

	Mierzalny S1(L,20,100);
	S1.WykonajSerie(L);
	cout<<"Sredni czas wykonania algorytmu czas: "<<S1.PodajSredniCzas()<<endl;

	return 0;
}

