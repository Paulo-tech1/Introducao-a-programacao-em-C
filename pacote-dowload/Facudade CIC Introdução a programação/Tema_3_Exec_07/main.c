#include <stdio.h>
#include <stdlib.h>

/*7. Faça um programa que receba o preço de custo de um produto e mostre o valor de venda.
Sabe-se que será acrescido um percentual informado pelo usuário sobre o preço de custo. */
int main()
{
    float PCUSTO,PERC,PVENDA;
    printf("\nEntre com o preco de custo R$ : ");
    scanf("%f",&PCUSTO);
    printf("\nEntre com o percentual  : ");
    scanf("%f",&PERC);
    PVENDA= PCUSTO + (PCUSTO*PERC/100);
    printf("\nValor da venda = %8.2f",PVENDA);
}
