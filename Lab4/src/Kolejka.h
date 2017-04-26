#ifndef KOLEJKA_H_
#define KOLEJKA_H_
#include "Iqueue.h"
#include "Lista.h"

class Kolejka: public Iqueue {
public:
	Kolejka();
	void Remove();
	void Push(int value);
	int Pop();
	int Size();
private:
	Lista lista;
	unsigned int rozmiar;
};


#endif
