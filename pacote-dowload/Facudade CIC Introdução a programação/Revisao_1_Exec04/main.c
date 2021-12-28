#include <stdio.h>
#include <stdlib.h>
/*4 Escreva um programa que leia vinte número inteiro e calcule a tabuada de 1 até n
para cada um deles. Mostre a tabuada na forma

1 x n= n
2 x n= 2n
3 x n= 3n
........
n x = n^2 */

int main()
{
    int j,i,n;

    for(j=1; j<=20; j++)
    {
        printf("\n --------------------- ");
        printf("\n Entre com o numero: ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            printf("\n %d x %d = %d",i,n,i*n);
    }
}
