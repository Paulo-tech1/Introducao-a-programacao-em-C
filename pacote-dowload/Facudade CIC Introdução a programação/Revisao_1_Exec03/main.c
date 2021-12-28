#include <stdio.h>
#include <stdlib.h>
/*3 Escreva um programa que leia vinte número inteiro e calcule a tabuada de 1 até 10
para cada um deles. Mostre a tabuada na forma

1 x n= n
2 x n= 2n
3 x n= 3n
........
10 x n= 10n */

int main()
{
    int j,i,n;

    for(j=1; j<=20; j++)
    {
        printf("\n --------------------- ");
        printf("\n Entre com o numero: ");
        scanf("%d",&n);
        for(i=1; i<=10; i++)
            printf("\n %d x %d = %d",i,n,i*n);
    }
}
