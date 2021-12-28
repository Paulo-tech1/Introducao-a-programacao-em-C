#include <stdio.h>
#include <stdlib.h>

/*1- Faça um programa que leia cinco temperaturas em graus Celsius e apresente-as convertidas em graus Fahrenheit.
A fórmula de conversão é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.*/

int main()
{
    int i;
    float C, F;
    for(i=1;i<=5;i++)
    {
        printf("\n Digite a temperatua em graus Celsius: ");
        scanf("%f",&C);
        F=(9*C+160)/5;
        printf("\nA temperatura em Farenheit eh :%.2f\n",F);
    }
}
