all: trabalho.o
	gcc -o target/trabalho.sh target/trabalho.o
trabalho.o: main.c trabalho1.h
	gcc -c main.c -o target/trabalho.o
clean:
	rm -f *.o *.sh target/*