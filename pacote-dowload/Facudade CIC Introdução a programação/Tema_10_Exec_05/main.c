#include <stdio.h>
#include <stdlib.h>

/*5- Crie uma função em linguagem C que receba 2 números e retorne o menor valor.*/

int menor (int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
main()
{
    int n1,n2;
    printf("\n Entre com o numero1: ");
    scanf("%d",&n1);
    printf("\n Entre com o numero2: ");
    scanf("%d",&n2);
    printf("\n Menor entre n1 e n2 = %d",menor(n1,n2));
    printf("\n Menor entre 10 e n2 = %d",menor(10,n2));
    printf("\n Menor entre n1 e 50 = %d",menor(n1,50));
}
