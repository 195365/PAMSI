#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;
class Tablica {
public:
	int Rozmiar();
	int ZapisanieElemantu(int index, int wartosc);
	int OdczytanieElementu(int index);
	Tablica();
private:
	int *tab;
	int rozmiar;
	int* ZmienRozmiar(int nowyRozmiar);
};

int Tablica::Rozmiar() {
	return rozmiar;
}

int Tablica::ZapisanieElemantu(int index, int wartosc) {
	if (index < rozmiar) {
		tab[index] = wartosc;
	}
	if (index == rozmiar) {
		tab = ZmienRozmiar(rozmiar + 1);	//strategia powiększania o +1
		//cout << "Zwiekszono rozmiar tablicy o 1" << endl;
		//tab = ZmienRozmiar(rozmiar * 2);	//strategia zwiększania x2
		//cout<<"Zwiekszono rozmiar tablicy x2"<<endl;
		tab[index] = wartosc;
	}
	if (index > rozmiar) {
		return 1;
	}
	return 0;
}

int Tablica::OdczytanieElementu(int index) {
	if (index < rozmiar) {
		return tab[index];
	} else {
		cout << "Index wiekszy niz rozmiar tablicy" << endl;
		return NULL;
	}
}

int* Tablica::ZmienRozmiar(int nowyRozmiar) {
	int *temp = new int[nowyRozmiar];
	for (int i = 0; i < rozmiar; i++) {
		temp[i] = tab[i];
	}
	delete[] tab;
	rozmiar = nowyRozmiar;
	return temp;
}

Tablica::Tablica() {
	rozmiar = 10;
	tab = new int[rozmiar];
}

int main() {
	Tablica tab;

	clock_t start = clock();
	for (int i = 0; i < 1000; i++) {
		tab.ZapisanieElemantu(i, i);
	}
	cout << "Czas wykonania: "
			<< (static_cast<double>(clock() - start) / CLOCKS_PER_SEC)*1000 << "ms"
			<< endl;
	/*for (int i = 0; i < 10; i++) {
	 cout << tab.OdczytanieElementu(i) << endl;
	 }*/
	return 0;
}

