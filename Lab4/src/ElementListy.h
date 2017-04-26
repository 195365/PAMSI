/*
 * ElementListy.h
 *
 *  Created on: 22.04.2017
 *      Author: rafal
 */

#ifndef ELEMENTLISTY_H_
#define ELEMENTLISTY_H_


struct ElementListy
{
public:
	int wartosc;
	struct ElementListy *nastepny;
	struct ElementListy *poprzedni;
};

#endif /* ELEMENTLISTY_H_ */
