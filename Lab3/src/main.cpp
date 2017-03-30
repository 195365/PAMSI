#include <iostream>

#include "Mierzalny.h"
#include "Stoper.h"
#include "TablicaO1.h"
#include "TablicaX2.h"

using namespace std;

int main() {
	TablicaO1 *tablica = new TablicaO1;
	Mierzalny seria(*tablica, 20, 10000);
	seria.WykonajSerie(*tablica);
	cout << "czas wykonania: " << seria.PodajSredniCzas() << endl;
	TablicaX2* tablica1 = new TablicaX2;
	Mierzalny seria1(*tablica1, 20, 10000);
	seria1.WykonajSerie(*tablica1);
	cout << "czas wykonania: " << seria1.PodajSredniCzas() << endl;
	return 0;
}
