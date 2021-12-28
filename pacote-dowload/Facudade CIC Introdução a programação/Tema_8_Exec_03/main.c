#include <stdio.h>
#include <stdlib.h>

/*3 - Faça um programa que leia um conjunto de números (X) e imprima a quantidade de números pares (QPares) e a
quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
Ex.: 1,2,3,4,5 => Pares=2 Impares=3*/


int main()
{
    int x,QPares=0,QImpares=0;
    do
    {
        printf("\n Entre com o numero: ");
        scanf("%d",&x);
        if(x==9999)
            break;
        if(x%2==0)
            QPares++;
        else
            QImpares++;
    }
    while(x!=9999);
    printf("\n Quantidade de pares: %d",QPares);
    printf("\n Quantidade de impares: %d",QImpares);
}
