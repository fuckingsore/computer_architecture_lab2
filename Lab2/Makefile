build: main.o libbreakfast.a
	g++ -o lw2 main.o -L. -lbreakfast

libcoin.a: breakfast.o
	ar cr libbreakfast.a breakfast.o

main.o breakfast.o:
	g++ -c *.cpp

clean:
	rm -f *.o *.a lw2
