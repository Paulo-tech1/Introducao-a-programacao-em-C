#include <stdio.h>
#include <stdlib.h>
/*8. O custo ao consumidor, de um carro novo, � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um programa para ler o custo de f�brica de um carro e escrever o custo ao consumidor.*/

int main()
{
    float PF, PD,I,PV, total;
    printf("\nEntre com o preco de fabrica R$: ");
    scanf("%f",&PF);
    PD = PF*28/100;
    I  = PF*45/100;
    PV = PF+PD+I;
    total = PD+I;
    printf("\nTotal de impostos R$%8.3f\n", total);
    printf("\nPreco de venda  = R$%8.3f\n",PV);

}
