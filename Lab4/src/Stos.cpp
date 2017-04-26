/*
 * Stos.cpp
 *
 *  Created on: 25.04.2017
 *      Author: rafal
 */
#include <iostream>
#include "Stos.h"

using namespace std;

Stos::Stos() {
	rozmiar = 0;
}

void Stos::Remove() {
	if (rozmiar > 0) {
		rozmiar--;
		lista.Remove(0);
	} else {
		cerr << "Stos jest pusty!" << endl;
	}
}

void Stos::Push(int value) {
	lista.Add(value, 0);
	rozmiar++;
}

int Stos::Pop() {
	int temp;
	if (rozmiar > 0) {
		rozmiar--;
		temp=lista.Get(0);
		lista.Remove(0);
		return temp;
	}
	cerr << "Stos jest pusty!" << endl;
	return 0;
}

int Stos::Size() {
	return rozmiar;
}

