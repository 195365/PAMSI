/*
 * Istack.h
 *
 *  Created on: 30.03.2017
 *      Author: rafal
 */

#ifndef ISTACK_H_
#define ISTACK_H_

class Istack{
public:
	virtual void Remove();
	virtual void Push(int value);
	virtual int Pop();
	virtual int Size();
	virtual ~Istack();
};




#endif /* ISTACK_H_ */
