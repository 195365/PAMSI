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
	virtual void Remove();
	virtual void Push(int value);
	virtual int Pop();
	virtual int Size();
	virtual ~Iqueue();
};



#endif /* IQUEUE_H_ */
