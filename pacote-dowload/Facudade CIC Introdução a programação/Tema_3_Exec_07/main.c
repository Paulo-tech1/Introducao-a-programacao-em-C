#include <stdio.h>
#include <stdlib.h>

/*7. Fa�a um programa que receba o pre�o de custo de um produto e mostre o valor de venda.
Sabe-se que ser� acrescido um percentual informado pelo usu�rio sobre o pre�o de custo. */
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
