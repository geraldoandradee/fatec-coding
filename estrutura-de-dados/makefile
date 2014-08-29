all: sort.o
	gcc -o target/bubble.sh target/sort.o -Wno-implicit-int
sort.o: sort_1.c
	gcc -c sort_1.c -o target/sort.o -Wno-implicit-int
clean:
	rm -f *.o *.sh target/*