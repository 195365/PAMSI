/*
 * ListaAlgorytm.h
 *
 *  Created on: 25.04.2017
 *      Author: rafal
 */

#ifndef LISTAALGORYTM_H_
#define LISTAALGORYTM_H_

#include "Lista.h"
#include "Wykonywalny.h"

class ListaAlgorytm: public Wykonywalny {
public:
	ListaAlgorytm(Lista &_lista);
	virtual void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);
	virtual void WykonajAlgorytm(int wielkosc_problemu);
private:
	Lista* lista;
};

#endif /* LISTAALGORYTM_H_ */
