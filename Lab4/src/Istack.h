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
	virtual void Remove()=0;
	virtual void Push(int value)=0;
	virtual int Pop()=0;
	virtual int Size()=0;
	virtual ~Istack(){};
};




#endif /* ISTACK_H_ */
