#include <stdio.h>
#include <stdlib.h>
/*5 - Obter um número e imprimir a tabuada de multiplicar, seguindo o seguinte layout:

Entre com o número: 5

*** TABUADA DO NÚMERO 5 ***

5 x 1 = 5

5 x 2 = 10

...

5 x 10 = 50*/

int main()
{
    int n,i;
    printf("\n Entre com o numero: ");
    scanf("%d",&n);
    printf("\n *** TABUADA DO NUMERO %d ***",n);
    for(i=1; i<=10; i++)
        printf("\n %d x %d = %d",n,i,n*i);
}
