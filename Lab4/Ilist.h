#ifndef ILIST_H_
#define ILIST_H_

class Ilist{
public:
	virtual void Add(int value,int position);
	virtual void Remove(int position);
	virtual int Get(int position);
	virtual int Size();
	virtual int& Head();
	virtual ~Ilist();
};



#endif
