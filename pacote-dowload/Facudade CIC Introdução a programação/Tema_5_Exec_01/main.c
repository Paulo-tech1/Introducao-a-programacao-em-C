#include <stdio.h>
#include <stdlib.h>

/*1. Tendo como dados de entrada a altura ( h ) e o sexo de uma pessoa (M - masculino e F - feminino),
construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*h)-58

- para mulheres: (62.1*h)-44.7 */

int main()
{
    float a,p;
    char sexo;
    printf("\nInforme seu sexo com M ou F e aperte ENTER: ");
    scanf("%C", &sexo);
    printf("\nInforme sua altura como o >>exemplo 0.00<<: ");
    scanf("%f",&a);

    if(sexo=='m')
    {
        printf("\nMasculino - O seu peso ideal eh: %.3f\n",(a*72.7)-58);
    }
    else if(sexo=='f')
    {
        printf("\nFeminino - O seu peso ideal eh: %.3f\n",(a*62.1)-44.7);
    }
    else
    {
        printf("\nERROR Letra Invalida, informe M = Masculino ou F = Feminino\n");
    }


}
