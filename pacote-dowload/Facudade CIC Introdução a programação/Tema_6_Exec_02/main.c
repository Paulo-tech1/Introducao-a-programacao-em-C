#include <stdio.h>
#include <stdlib.h>

/*2 - Fa�a um programa que leia dois valores para as vari�veis A e B e efetue a troca dos valores de forma que a vari�vel
A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresente os valores trocados.
O programa dever� permitir a troca dos n�meros cinco vezes.*/

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
