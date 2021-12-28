#include <stdio.h>
#include <stdlib.h>

/*4- Crie uma função em linguagem C que receba 2 números e retorne o maior valor.*/

int maior (int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
main()
{
    int n1,n2;
    printf("\n Entre com o numero 1: ");
    scanf("%d",&n1);
    printf("\n Entre com o numero 2: ");
    scanf("%d",&n2);
    printf("\n Maior = %d",maior(n1,n2));
}
