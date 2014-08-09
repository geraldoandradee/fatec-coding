#include <stdio.h>

int main(){

	int c;

	for (c=0; c<256;c++){
		printf("\n%3d --> %c\n", c, c);
	}

	return 0;
}