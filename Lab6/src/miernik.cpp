#include "miernik.hh"


	void Miernik::Start()
	{
		_poczatek = clock();	
	}

	void Miernik::Stop()
	{
		_koniec = clock();
	}

	double Miernik::PoliczCzas()
	{
		return (double)(_koniec - _poczatek) / (double)(CLOCKS_PER_SEC);
	}

	double Miernik::LiczSrednia(unsigned int ile_srednia, unsigned int ile_algorytm, IWykonywalny &obj)
	{
		_dane = new double[ile_srednia];
		double srednia;
		_ilosc_powtorzen = ile_srednia;

		for (unsigned int i = 0; i <  ile_srednia; ++i)
		{
			Start();
			obj.WykonajAlgorytm(ile_algorytm);
			Stop();
			_dane[i] = PoliczCzas();
		}

		for (unsigned int i = 0; i < ile_srednia; ++i)
		{
			srednia += _dane[i];
		}

		_srednia = srednia/ile_srednia;
		return _srednia;
		
	}

	void Miernik::DrukujPomiary()
	{
		std::cout<<"Wyniki pomiarów : " << std::endl;
		for(unsigned int i = 0; i < _ilosc_powtorzen; ++i)
		{
			std::cout << _dane[i] << std::endl;
		}
	}

	void Miernik::DrukujSrednia()
	{
		std::cout<<"Srednia =  " <<_srednia << std::endl;
	}
