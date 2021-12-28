#include <stdio.h>
#include <stdlib.h>

/*Analise cada um dos programas e os reescreva utilizando subrotinas
Questão 6

#include<stdio.h>
main()
{
	float PCUSTO,PERC,PVENDA;
	printf("Entre com o preco de custo: ");
	scanf("%f",&PCUSTO);
	printf("Entre com o percentual    : ");
	scanf("%f",&PERC);
	PVENDA= PCUSTO + (PCUSTO*PERC/100);
	printf("Valor da venda = %8.2f",PVENDA);
}
*/

float calculaVenda (float custo, float percentual)
{
    return custo + (custo*percentual/100);
}
main()
{
    float PCUSTO,PERC;
    printf("\nEntre com o preco de custo:R$ ");
    scanf("%f",&PCUSTO);
    printf("\nEntre com o percentual    : ");
    scanf("%f",&PERC);

    printf("\nValor da venda = R$%8.2f\n",calculaVenda(PCUSTO,PERC));
}

























