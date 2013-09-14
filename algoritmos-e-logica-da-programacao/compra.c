#include <stdio.h>

int main () {
  float vlr_compra, a_pag, parc, desc, acres;
  int op_pag, n_parc;
  
  printf("\nQual o valor da compra\n-->");
  scanf("%f", &vlr_compra);
  
  printf("\nQual a opcao de pagamento\n\n1 - A Vista\n2 - A Prazo\n\n-->");
  scanf("%d", &op_pag);

  if (op_pag == 1) {
    desc = vlr_compra * 10/100;
    a_pag = vlr_compra - desc;
    
    printf("\nVoce ganhou um desconto de R$%.2f\nValor a pagar %.2f\n\n", desc, a_pag);    
  }
  else {
    if (op_pag == 2) {
      printf("\nNumero de Parcelas (2 ou 3):\n\n-->");
      scanf("%d", &n_parc);
      if (n_parc == 2) {
	parc = vlr_compra/2;
	
	printf("\nValor de cada parcela R$%.2f\n\n", parc);
      }
      else {
	if (n_parc == 3) {
	  acres = vlr_compra * 10/100;
	  a_pag = vlr_compra + acres;
	  parc = a_pag/3;
	  
	  printf("\nValor do acrecimo R$%.2f\nValor a Pagar R$%.2f\nValor de cada parcela R$%.2f\n\n", acres,a_pag, parc);
	}
	else {
	  printf("\nNumero de Parcelas invalido\n\n"); 
	}
      }
    }
    else {
      printf("\nOpcao de pagamento invalida\n\n");  
    }
  }
  
  return 0;
}