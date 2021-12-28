#include <stdio.h>
#include <stdlib.h>

/*2 - Faça um programa que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável
A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.
O programa deverá permitir a troca dos números cinco vezes.*/

int main()
{
    int A,B,AUX,i;
    for(i=1; i<=5; i++)
    {
        printf("\n ----------------");
        printf("\n Entre com valor de A: ");
        scanf("%d",&A);
        printf("\n Entre com valor de B: ");
        scanf("%d",&B);
        AUX=A;
        A=B;
        B=AUX;
        printf("\n Valor de A: %d",A);
        printf("\n Valor de B: %d",B);
    }
}
