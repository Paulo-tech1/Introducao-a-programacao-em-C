#include <stdio.h>
#include <stdlib.h>

/*4. Um banco concede um crédito especial aos seus clientes, variável com o saldo médio no último ano.
Construa um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a
tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.
Considerar:

-  Saldo médio  de 0 a 200:  nenhum crédito

- Saldo médio de 200,01 a 400:  20% do valor do saldo médio

- Saldo médio de 400,01 a 600: 30% do valor do saldo médio

- Saldo médio acima de 600,01: 40% do valor do saldo médio

Última atualização: segunda, 3 Fev 2020, 12:58*/

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
