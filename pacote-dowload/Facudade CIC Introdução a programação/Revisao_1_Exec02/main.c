#include <stdio.h>
#include <stdlib.h>

/*2 Escreva um programa que leia um n�mero inteiro e calcule a tabuada de 1 at� 10
. Mostre a tabuada na forma

1 x n= n
2 x n= 2n
3 x n= 3n
........
10 x n= 10n */

int main()
{
    int i,n;
    printf("\n Entre com o numero: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
        printf("\n %d x %d = %d",i,n,i*n);
}
