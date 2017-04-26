#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista() {
	poczatek = koniec = NULL;
	rozmiar = 0;
}

Lista::~Lista() {
	while (poczatek!=NULL) {
			this->RemoveFront();
		}
}

int Lista::Add(int wartosc, unsigned int position) {
	if (position > rozmiar) {
		cerr << "Indeks przekracza rozmiar Listy";
		return 1;
	}
	if (position == 0) {
		return AddFront(wartosc);
	}
	if (position == rozmiar) {
		return AddBack(wartosc);
	}
	ElementListy *temp = new ElementListy;
	temp->poprzedni = NULL;
	temp->nastepny = NULL;
	temp->wartosc = wartosc;
	ElementListy *temp2;
	temp2 = poczatek;
	//dodanie elementu na okreslona pozycje
	for (unsigned int i = 0; i < position; i++) {
		temp2 = temp2->nastepny;
	}
	temp->poprzedni = temp2->poprzedni;
	temp2->poprzedni->nastepny = temp;
	temp->nastepny = temp2;
	temp2->poprzedni = temp;
	temp = NULL;
	rozmiar++;
	return 0;
}

int Lista::AddFront(int wartosc) {
	ElementListy *temp = new ElementListy;
	temp->poprzedni = NULL;
	temp->nastepny = NULL;
	temp->wartosc = wartosc;
	if (poczatek == NULL) {
		poczatek = temp;
		koniec = temp;
	} else {
		temp->nastepny = poczatek;
		poczatek->poprzedni = temp;
		poczatek = temp;
	}
	temp = NULL;
	rozmiar++;
	return 0;
}

int Lista::AddBack(int wartosc) {
	ElementListy *temp = new ElementListy;
	temp->poprzedni = NULL;
	temp->nastepny = NULL;
	temp->wartosc = wartosc;
	if (poczatek == NULL) {
		poczatek = temp;
		koniec = temp;
	} else {
		temp->poprzedni = koniec;
		koniec->nastepny = temp;
		koniec = temp;
	}
	temp = NULL;
	rozmiar++;
	return 0;
}

int Lista::Remove(unsigned int position) {
	if (position >= rozmiar) {
		cerr << "Indeks przekracza rozmiar Listy";
		return 1;
	}
	if (position == 0) {
		return RemoveFront();
	}
	if (position == rozmiar - 1) {
		return RemoveBack();
	}
	ElementListy *temp;
	temp = poczatek;
	for (unsigned int i = 0; i < position; i++) {
		temp = temp->nastepny;
	}
	temp->nastepny->poprzedni = temp->poprzedni;
	temp->poprzedni->nastepny = temp->nastepny;
	rozmiar--;
	delete temp;
	return 0;
}

int Lista::RemoveFront() {
	if (poczatek == NULL) {
		return 1;
	}
	ElementListy *temp;
	temp = poczatek;
	if (rozmiar == 1) {
		poczatek = koniec = NULL;
		rozmiar--;
		delete temp;
		return 0;
	}
	poczatek = temp->nastepny;
	temp->nastepny->poprzedni = NULL;
	rozmiar--;
	delete temp;
	return 0;
}

int Lista::RemoveBack() {
	if (koniec == NULL) {
		return 1;
	}
	ElementListy *temp;
	temp = koniec;
	if (rozmiar == 1) {
		poczatek = koniec = NULL;
		rozmiar--;
		delete temp;
		return 0;
	}
	koniec = temp->poprzedni;
	temp->poprzedni->nastepny = NULL;
	rozmiar--;
	delete temp;
	return 0;
}

int Lista::Get(unsigned int position) {
	if (position >= rozmiar) {
		cerr << "Indeks przekracza rozmiar Listy";
		return 1;
	}
	ElementListy *temp;
	//optymalizacja przy probie dostepu do ostatniego eleementu
	if(position==rozmiar-1){
		temp=koniec;
		return temp->wartosc;
	}
	//przeglądanie listy od początku
	temp = poczatek;
	for (unsigned int i = 0; i < position; i++) {
		temp = temp->nastepny;
	}
	return temp->wartosc;
}

int Lista::Find(int wartosc) {
	ElementListy *temp;
	temp = poczatek;
	for (unsigned int i = 0; i < rozmiar; i++) {
		if (temp->wartosc == wartosc)
			return i;
		temp = temp->nastepny;
	}
	cout << "Nie znaleziono szukanej wartosci" << endl;
	return 0;
}

unsigned int Lista::Size() {
	return rozmiar;
}

void Lista::Drukuj() {
	ElementListy *temp;
	temp = poczatek;
	cout << "Lista:" << endl;
	for (unsigned int i = 0; i < rozmiar; i++) {
		cout << temp->wartosc << " ";
		temp = temp->nastepny;
	}
	cout << endl;
}
