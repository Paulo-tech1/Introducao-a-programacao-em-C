#include <stdio.h>
#include <stdlib.h>
/*Quest�o 2 � Estrutura Condicional
Um posto est� vendendo combust�veis com a seguinte tabela de descontos
Alcool ate 20 litros, desconto de 3% por litro acima de 20 litros, desconto de 5% por litro
Gasolina ate 20 litros, descontos de 4% por litro acima de 20 litros desconto de 6% por litro
Escreva um programa que leia o n�mero de litros vendidos e o tipo de combust�vel
(codificado da seguinte forma: A-�lcool, G-gasolina),
calcule e imprima o valor a ser pago pelo cliente sabendo-se
que o pre�o do litro da gasolina � R$ 4,30 e o pre�o do litro do �lcool � R$ 3,90*/

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
        printf("\n Tipo inv�lido");
        VL=0;
        D=0;
    }
    VP=litros*VL;
    VP=VP-(VP*D/100);
    printf("\n Valor a pagar : %8.2f",VP);
}
