#include <stdio.h>
#include <stdlib.h>

struct conta
{
	int num;
	float saldo;
};

void mostra_conta(struct conta c, char * msg){
	printf("%s\n", msg);
	printf("Conta %d, saldo %.2f\n", c.num, c.saldo);
}

void deposito(struct conta * c, float deposito) {
	c->saldo = c->saldo + deposito;
}

int main() {
	struct conta c1, c2;
	struct conta *c3;

	c1.num = 10;
	c1.saldo = 100.0;
	c2 = c1;
	c2.saldo = 200.0;

	// printf("Conta %d, saldo %.2f\n", c1.num, c1.saldo);
	// printf("Conta %d, saldo %.2f\n", c2.num, c2.saldo);

	c3 = (struct conta *) malloc (sizeof (struct conta));
	c3->num = 11;
	c3->saldo = -50;
	// printf("Conta %d, saldo %.2f\n", c3->num, c3->saldo);
	mostra_conta(c1, "C1");
	mostra_conta(c2, "C2");
	// se usar o * conta, ele não é um struct conta, tipos diferentes
	mostra_conta(c1, "C1"); //precisa usar esse operador derreferencia

	deposito(&c1, 1000.00);
	mostra_conta(c1, "C1 Saldo atualizado");
	
	
	deposito(c3, 1000.00);
	mostra_conta(*c3, "C3 Saldo atualizado");
	return 0;
}