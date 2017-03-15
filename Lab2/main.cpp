#include <iostream>

using namespace std;
template<class typ>
class Tablica {
public:
	int Rozmiar() {
		return rozmiar;
	}
	void ZapisanieElemantu(int index, typ wartosc) {
		if (index < rozmiar) {
			tab[index] = wartosc;
		} else {
			cout << "Index wiekszy niz rozmiar tablicy" << endl;
		}
	}
	typ OdczytanieElementu(int index) {
		if (index < rozmiar) {
			return tab[index];
		} else {
			cout << "Index wiekszy niz rozmiar tablicy" << endl;
			return NULL;
		}
	}
	Tablica() {
		rozmiar = 1;
		tab = new typ[rozmiar];
	}
	;
private:
	typ *tab;
	int rozmiar;
	void ZmienRozmiar(int nowyRozmiar) {
		typ *temp = new typ[nowyRozmiar];
		for (int i = 0; i < rozmiar; i++) {
			temp[i] = tab[i];
		}
		delete[] *tab;
		tab = temp;
		delete[] *temp;
	}
};

int main() {
	Tablica<int> tab;
	tab.ZapisanieElemantu(0, 5);
	cout << tab.OdczytanieElementu(0);
	return 0;
}
