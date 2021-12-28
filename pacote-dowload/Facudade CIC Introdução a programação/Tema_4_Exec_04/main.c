#include <stdio.h>
#include <stdlib.h>

/*4. Um banco concede um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano.
Construa um programa que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a
tabela abaixo. Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.
Considerar:

-  Saldo m�dio  de 0 a 200:  nenhum cr�dito

- Saldo m�dio de 200,01 a 400:  20% do valor do saldo m�dio

- Saldo m�dio de 400,01 a 600: 30% do valor do saldo m�dio

- Saldo m�dio acima de 600,01: 40% do valor do saldo m�dio

�ltima atualiza��o: segunda, 3 Fev 2020, 12:58*/

int main()
{
    float SALDO,CREDITO;
    printf("\n Saldo Medio R$: ");
    scanf("%f",&SALDO);
    if (SALDO < 200)
        CREDITO = 0;
    else if (SALDO < 400)
        CREDITO = SALDO*20/100;
    else if (SALDO < 600)
        CREDITO = SALDO*30/100;
    else
        CREDITO = SALDO*40/100;
    printf("\n Saldo Medio = R$ %8.2f", SALDO);
    printf("\n Credito     = R$ %8.2f", CREDITO);
}
