all: trabalho.o
	gcc -o target/trabalho.sh target/trabalho.o
trabalho.o: trabalho1.c trabalho1.h
	gcc -c trabalho1.c -o target/trabalho.o
clean:
	rm -f *.o *.sh target/*