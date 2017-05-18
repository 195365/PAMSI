#include <iostream>
#include "quicksort.h"
#include "Mierzalny.h"
#include <cstdlib>
using namespace std;

int main() {
	srand((int)time(NULL));
	QuickSort q;
	Mierzalny S1(q,20,1000);
	S1.WykonajSerie(q);
	cout<<"Sredni czas wykonania algorytmu czas: "<<S1.PodajSredniCzas()<<endl;
	return 0;
}
