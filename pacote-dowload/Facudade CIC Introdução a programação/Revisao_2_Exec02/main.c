#include <stdio.h>
#include <stdlib.h>
/*Questão 2 – Estrutura Condicional
Um posto está vendendo combustíveis com a seguinte tabela de descontos
Alcool ate 20 litros, desconto de 3% por litro acima de 20 litros, desconto de 5% por litro
Gasolina ate 20 litros, descontos de 4% por litro acima de 20 litros desconto de 6% por litro
Escreva um programa que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina),
calcule e imprima o valor a ser pago pelo cliente sabendo-se
que o preço do litro da gasolina é R$ 4,30 e o preço do litro do álcool é R$ 3,90*/

int main()
{
    float litros,VL,D,VP;
    char tipo;

    printf("\n Tipo de combustivel  A-alcool, G-gasolina: ");
    scanf("%c",&tipo);
    printf("\n Numero de litros vendidos                : ");
    scanf("%f",&litros);
    if(tipo=='A')
    {
        VL=3.90;
        if(litros<=20)
            D = 3;
        else
            D = 5;
    }
    else if(tipo=='G')
    {
        VL=4.30;
        if(litros<=20)
            D = 4;
        else
            D = 6;

    }
    else
    {
        printf("\n Tipo inválido");
        VL=0;
        D=0;
    }
    VP=litros*VL;
    VP=VP-(VP*D/100);
    printf("\n Valor a pagar : %8.2f",VP);
}
