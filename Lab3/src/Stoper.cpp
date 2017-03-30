#include "Stoper.h"

Stoper::Stoper() {
	start=0;
	stop=0;
}


void Stoper::Start() {
	start = clock();
}

void Stoper::Stop() {
	stop = clock();
}

//wybór jednostki:
//1-milisekundy
//2-sekundy
//3-minuty z zaokrągleniem do całości
double Stoper::PodajCzas(int jednostka) {
	double czas = static_cast<double>(stop - start) / CLOCKS_PER_SEC;
	switch (jednostka) {
	case 1:
		return czas * 1000;
		break;
	case 2:
		return czas;
		break;
	case 3:
		return static_cast<int>(czas / 60);
		break;
	default:
		return 0;
		break;
	}
}
