/*
 * Stos.cpp
 *
 *  Created on: 25.04.2017
 *      Author: rafal
 */
#include <iostream>
#include "Kolejka.h"

using namespace std;

Kolejka::Kolejka() {
	rozmiar = 0;
}

void Kolejka::Remove() {
	if (rozmiar > 0) {
		lista.Remove(rozmiar - 1);
		rozmiar--;
	} else {
		cerr << "Kolejka jest pusta!" << endl;
	}
}

void Kolejka::Push(int value) {
	lista.Add(value, 0);
	rozmiar++;
}

int Kolejka::Pop() {
	int temp;
	if (rozmiar > 0) {
		temp = lista.Get(rozmiar-1);
		lista.Remove(rozmiar-1);
		rozmiar--;
		return temp;
	}
	cerr << "Kolejka jest pusta!" << endl;
	return 0;
}

int Kolejka::Size() {
	return rozmiar;
}

