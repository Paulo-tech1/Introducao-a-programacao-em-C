#include <stdio.h>
#include <stdlib.h>
/*1 - Faça um programa que leia um conjunto de números (X) e imprima sua soma (Soma) e sua média (Media).
Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
Ex.: 1, 2, 3 => Soma=6 Media=2*/

int main()
{
    int num,soma=0,q=0;
    float media;


    do
    {
        printf("\n Numero: ");
        scanf("%d",&num);
        if(num==9999)
            break;
        soma=soma+num; //ou soma+=num;
        q=q+1;  //ou q++;

    }
    while(num!=9999);
    media=soma/q;
    printf("\n Soma = %d",soma);
    printf("\n Media = %4.1f",media);
}
