#include <stdio.h>

void tamanho(int, float *, float *);

int main() {
	int bytes;
	float kbytes, mbytes;

	printf("Informe o tamanho do arquivo em bytes\n");
	scanf("%d", &bytes);
	tamanho(bytes, &kbytes, &mbytes);
	printf("Tamanho do arquivo em KB: %.2f\n", kbytes);
	printf("Tamanho do arquivo em MB: %.2f\n", mbytes);

	return 0;
}


void tamanho(int b, float * kb, float * mb) {

	*kb = b / 1024.0;
	*mb = *kb / 1024;

}