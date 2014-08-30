all: trabalho.o
	gcc -o target/trabalho.sh target/trabalho.o
trabalho.o: trabalho.c trabalho.h
	gcc -c trabalho.c -o target/trabalho.o
clean:
	rm -f *.o *.sh target/*