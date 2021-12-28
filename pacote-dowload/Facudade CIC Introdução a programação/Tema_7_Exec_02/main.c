#include <stdio.h>
#include <stdlib.h>

/*Questão 2

Escrever um programa que leia uma quantidade desconhecida de números e conte
quantos deles estão nos seguintes intervalos: [0..25], [26..50], [51..75] e [76..100]. A
entrada de dados deve terminar quando for lido um número negativo.*/

int main()
{
    int n,f1=0,f2=0,f3=0,f4=0;
    printf("\n Numero: ");
    scanf("%d",&n);
    while(n>=0)
    {
        if(n<=25)
            f1++;
        else if(n<=50)
            f2++;
        else if(n<=75)
            f3++;
        else if(n<=100)
            f4++;
        printf("\n Numero: ");
        scanf("%d",&n);
    }
    printf("\n Faixa [ 0..25]  = %d ", f1);
    printf("\n Faixa [26..50]  = %d ", f2);
    printf("\n Faixa [51..75]  = %d ", f3);
    printf("\n Faixa [76..100] = %d ", f4);
}
