#include <stdio.h>
#include <stdlib.h>

/*5. Fa�a o programa que calcule o valor em Reais, correspondente aos d�lares que um turista possui no cofre do hotel.
Solicitar os dados: Quantidade de d�lares guardados no cofre e cota��o do d�lar naquele dia. */
int main()
{
    float VDOLAR, CDOLAR, VREAL;
    printf("\nEntre com a quantidade de dolares US$ : ");
    scanf("%f",&VDOLAR);
    printf("\nEntre com a cotacao do dolar US$ : ");
    scanf("%f",&CDOLAR);
    VREAL = VDOLAR * CDOLAR;
    printf("\nValor em Reais R$ :%8.3f \n",VREAL);
}
