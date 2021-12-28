#include <stdio.h>
#include <stdlib.h>


/*Analise cada um dos programas e os reescreva utilizando subrotinas.
#include<stdio.h>
main()
{
	float VALOR,PREST;
	printf("Entre com a valor do produto: ");
	scanf("%f",&VALOR);
    PREST = VALOR/5;
	printf("\n Valor das prestacoes: %8.2f",PREST);

}

*/
float calculaPrestacao (float v)
{
    return v/5;
}
main()
{
    float VALOR;
    printf("\nEntre com a valor do produto:R$ ");
    scanf("%f",&VALOR);
    printf("\nValor das prestacoes: R$%8.2f",calculaPrestacao(VALOR));

}























