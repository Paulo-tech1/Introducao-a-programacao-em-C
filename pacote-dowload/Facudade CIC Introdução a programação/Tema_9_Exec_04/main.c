#include <stdio.h>
#include <stdlib.h>

/*Analise cada um dos programas e os reescreva utilizando subrotinas.
#include<stdio.h>
main()
{
	float VDOLAR, CDOLAR, VREAL;
	printf("Entre com a quantidade de dolares: ");
	scanf("%f",&VDOLAR);
	printf("Entre com a cotacao do dolar     : ");
	scanf("%f",&CDOLAR);
	VREAL = VDOLAR * CDOLAR;
	printf("\n Valor em Reais: %8.2f",VREAL);

}
*/

float converteReal (float d, float c)
{
    return d * c;
}

main()
{
    float VDOLAR, CDOLAR;
    printf("\nEntre com a quantidade de dolares:R$ ");
    scanf("%f",&VDOLAR);
    printf("\nEntre com a cotacao do dolar     :S$ ");
    scanf("%f",&CDOLAR);
    printf("\nValor em Reais: R$%8.2f",converteReal(VDOLAR,CDOLAR));

}



















