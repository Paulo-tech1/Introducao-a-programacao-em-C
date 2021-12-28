#include <stdio.h>
#include <stdlib.h>

/*5. Faça o programa que calcule o valor em Reais, correspondente aos dólares que um turista possui no cofre do hotel.
Solicitar os dados: Quantidade de dólares guardados no cofre e cotação do dólar naquele dia. */
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
