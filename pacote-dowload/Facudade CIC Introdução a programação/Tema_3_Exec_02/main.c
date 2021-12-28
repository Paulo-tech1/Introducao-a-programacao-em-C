#include <stdio.h>
#include <stdlib.h>
//2. Faça um programa que leia as 3 notas de um aluno e calcule a média aritmética deste aluno.

int main()
{
    float N1,N2,N3,M;
    printf("\nEntre com a nota 1: ");
    scanf("%f", &N1);

    printf("\nEntre com a nota 2: ");
    scanf("%f", &N2);

    printf("\nEntre com a nota 3: ");
    scanf("%f", &N3);

    M = (N1+N2+N3)/3;
    printf("\nA media e' %4.1f \n", M);
}
