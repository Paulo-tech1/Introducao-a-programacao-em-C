#include <stdio.h>
#include <stdlib.h>

/*6. A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros.
Fa�a um programa que receba um valor de uma compra e mostre o valor das presta��es */
int main()
{
    float VALOR,PREST;
    printf("\nEntre com a valor do produto R$ : ");
    scanf("%f",&VALOR);
    PREST = VALOR/5;
    printf("\n Valor das prestacoes: %8.2f",PREST);
}
