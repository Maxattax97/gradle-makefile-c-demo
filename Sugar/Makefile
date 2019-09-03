all: sugar.a sugar.so sugar

sugar.o:
	gcc -fPIC -c main.c -o sugar.o

sugar.a: sugar.o
	ar rcs sugar.a sugar.o

sugar.so: sugar.o
	gcc -shared sugar.o -o sugar.so

sugar: sugar.o
	gcc sugar.o -o sugar

clean:
	rm -f *.o *.a *.so *.out main sugar
