#ifndef WYKONYWALNY_H_
#define WYKONYWALNY_H_

class Wykonywalny {
public:
	virtual void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu)= 0;
	virtual void WykonajAlgorytm(int wielkosc_problemu) = 0;
	virtual ~Wykonywalny(){};
};

#endif /* WYKONYWALNY_H_ */
