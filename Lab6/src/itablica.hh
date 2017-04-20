#ifndef itablica_hh
#define itablica_hh


class ITablica
{
public:
		virtual void Wpisz(unsigned int indeks, int wartosc) = 0;
		virtual void Drukuj() = 0;
		virtual unsigned int ZwrocRozmiar() = 0;
};

#endif 