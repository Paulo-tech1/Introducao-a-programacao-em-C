#include <stdio.h>
#include <stdlib.h>

/*3 - Fa�a um programa que leia um conjunto de n�meros (X) e imprima a quantidade de n�meros pares (QPares) e a
quantidade de n�meros impares (QImpares) lidos. Admita que o valor 9999 � utilizado como sentinela para fim de leitura.
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
