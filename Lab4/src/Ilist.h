#ifndef ILIST_H_
#define ILIST_H_

class Ilist{
public:
	virtual int Add(int value, unsigned int position)=0;
	virtual int Remove(unsigned int position)=0;
	virtual int Get(unsigned int position)=0;
	virtual int Find(int wartosc)=0;
	virtual unsigned int Size()=0;
	virtual ~Ilist(){};
};



#endif

