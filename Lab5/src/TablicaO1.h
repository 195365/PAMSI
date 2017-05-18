#ifndef TABLICAO1_H_
#define TABLICAO1_H_

class TablicaO1{
public:
	TablicaO1();
	TablicaO1(unsigned int _rozmiar);
	int Rozmiar();
	virtual int ZapisanieElemantu(int index, int wartosc);
	int OdczytanieElementu(int index);
	int & operator[](unsigned int index)
	{
		return tab[index];
	}
protected:
	int* tab;
	int rozmiar;
	void ZmienRozmiar(int nowyRozmiar);
};

#endif /* TABLICA_H_ */
