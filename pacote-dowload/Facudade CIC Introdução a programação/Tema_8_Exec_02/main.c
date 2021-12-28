#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um conjunto de dados numéricos (X) e imprima o maior (Maximo) dentre eles.
Admita que o valor 9999 é utilizado como sentinela.
Ex.: 1, 2, 3 => Maior=3*/

int main()
{
    int x,maximo,i=1;

    do
    {
        printf("\n Numero: ");
        scanf("%d",&x);

        if(x!=9999)
        {
            if ((x>maximo) || (i==1))
                maximo=x;
            i++;
        }
    }
    while(x!=9999);
    printf("\n Maximo= %d",maximo);
}
