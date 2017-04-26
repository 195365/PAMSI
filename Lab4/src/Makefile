a.out: main.o Mierzalny.o Stoper.o Lista.o ListaAlgorytm.o Stos.o StosAlgorytm.o Kolejka.o KolejkaAlgorytm.o
		g++ main.o Mierzalny.o Stoper.o Lista.o ListaAlgorytm.o Stos.o StosAlgorytm.o Kolejka.o KolejkaAlgorytm.o

main.o: main.cpp Mierzalny.h Lista.h ListaAlgorytm.h Stos.h StosAlgorytm.h Kolejka.h KolejkaAlgorytm.h
		g++ -c -Wall -std=c++11 -pedantic main.cpp

KolejkaAlgorytm.o: KolejkaAlgorytm.h KolejkaAlgorytm.cpp
		g++ -c -Wall -pedantic KolejkaAlgorytm.cpp

Kolejka.o: Kolejka.h Kolejka.cpp
		g++ -c -Wall -pedantic Kolejka.cpp

ListaAlgorytm.o: ListaAlgorytm.h ListaAlgorytm.cpp 
		g++ -c -Wall -pedantic ListaAlgorytm.cpp

Lista.o: Lista.h Lista.cpp
		g++ -c -Wall -pedantic Lista.cpp

Stoper.o: Stoper.h Stoper.cpp
		g++ -c -Wall -pedantic Stoper.cpp

Mierzalny.o: Mierzalny.h Mierzalny.cpp
		g++ -c -Wall -pedantic Mierzalny.cpp

StosAlgorytm.o: StosAlgorytm.h StosAlgorytm.cpp
		g++ -c -Wall -pedantic StosAlgorytm.cpp

Stos.o: Stos.h Stos.cpp
		g++ -c -Wall -pedantic Stos.cpp

Wykonywalny.o: Wykonywalny.h
		g++ -c -Wall -pedantic Wykonywalny.h

Istack.o: Istack.h
		g++ -c -Wall -pedantic Istack.h

Iqueue.o: Iqueue.h
		g++ -c -Wall -pedantic Istack.h

Ilist.o: Ilist.h
		g++ -c -Wall -pedantic Ilist.h

ElementListy.o: ElementListy.h
		g++ -c -Wall -pedantic Ilist.h
