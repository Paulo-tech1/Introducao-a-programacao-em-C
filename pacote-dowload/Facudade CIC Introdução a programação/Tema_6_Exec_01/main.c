#include <stdio.h>
#include <stdlib.h>

/*1- Fa�a um programa que leia cinco temperaturas em graus Celsius e apresente-as convertidas em graus Fahrenheit.
A f�rmula de convers�o �: F = (9 * C + 160) / 5, na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius.*/

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
