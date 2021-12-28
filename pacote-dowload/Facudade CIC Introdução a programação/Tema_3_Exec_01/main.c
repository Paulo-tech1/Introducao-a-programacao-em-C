#include <stdio.h>
#include <stdlib.h>
//1. Dado um número inteiro não-nulo, imprima o seu quadrado.

int main()
{
    int numero, quadrado;
    printf("\nEntre com um numero inteiros nao-nulo: ");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("O quadrado do numero %d e' %d\n", numero, quadrado);

}
