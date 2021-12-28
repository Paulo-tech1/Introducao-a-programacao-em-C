#include <stdio.h>
#include <stdlib.h>

/*4. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto.
Faça um programa que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/

int main()
{
    float VALOR,NVALOR,DESCONTO;
    printf("\nEntre com o valor do produto R$: ");
    scanf("%f", &VALOR);
    DESCONTO =  VALOR*9/100;
    NVALOR   =  VALOR - DESCONTO;
    printf("\nDesconto = R$ %6.2f \n", DESCONTO);
    printf("\nValor com Desconto = R$ %6.2f\n", NVALOR);
}
