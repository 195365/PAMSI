/*
 * Iqueue.h
 *
 *  Created on: 30.03.2017
 *      Author: rafal
 */

#ifndef IQUEUE_H_
#define IQUEUE_H_


class Iqueue{
public:
	virtual void Remove()=0;
	virtual void Push(int value)=0;
	virtual int Pop()=0;
	virtual int Size()=0;
	virtual ~Iqueue(){};
};



#endif /* IQUEUE_H_ */
