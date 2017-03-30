#ifndef STOPER_H_
#define STOPER_H_

#include <iostream>
#include <cstdio>
#include <ctime>

class Stoper {
public:
	Stoper();
	void Start();
	void Stop();
	double PodajCzas(int jednostka);
private:
	clock_t start, stop;
};

#endif /* STOPER_H_ */



