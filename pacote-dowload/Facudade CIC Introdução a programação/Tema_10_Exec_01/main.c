#include <stdio.h>
#include <stdlib.h>

/*1- Crie uma função que receba um valor e informe se ele é positivo ou não.*/

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
