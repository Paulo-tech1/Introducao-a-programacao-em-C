#include <stdio.h>
#include <stdlib.h>

/*1- Crie uma fun��o que receba um valor e informe se ele � positivo ou n�o.*/

char* testaPositivo (int n)
{
    if (n>0)
        return "Eh positivo";
    else
        return "Nao Eh positivo";
}
main ()
{
    int num;
    printf("\n Entre com o numero: ");
    scanf("%d",&num);
    printf("\n %s",testaPositivo(num));
}
