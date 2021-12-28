#include <stdio.h>
#include <stdlib.h>

/*1. Uma empresa resolveu conceder descontos de 10% nas vendas superiores a 1000 reais.
Faça um programa que leia o valor da venda e informe o valor a ser pago.*/

int main()
{
	float VENDA, DESC, PAGO;
	printf("\n Valor da Venda: ");
	scanf("%f",&VENDA);
	if (VENDA > 1000)
	  DESC = VENDA*10/100;
	else
	  DESC = 0;
	PAGO = VENDA-DESC;
	printf("\n Valor pago= %8.2f",PAGO);
}
