#include <stdio.h>
#include <stdlib.h>
/*Quest�o 1 � Estrutura Sequencial
Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo por
m�s, mais uma comiss�o tamb�m fixa para cada carro vendido e mais 5% do valor das vendas
por ele efetuadas. Escrever um programa que leia o n�mero de carros por ele vendidos, o valor
total de suas vendas, o sal�rio fixo e o valor que ele recebe por carro vendido. Calcule e escreva
o sal�rio final do vendedor*/

int main()
{
    int nc;
    float vt,sf,vc,sal;
    printf("\n Numero de carros vendidos: ");
    scanf("%d",&nc);
    printf("\n Valor total das vendas   : ");
    scanf("%f",&vt);
    printf("\n Salario fixo             : ");
    scanf("%f",&sf);
    printf("\n Valor da comissao        : ");
    scanf("%f",&vc);
    sal=sf+(nc*vc)+(vt*5/100);
    printf("\n Salario final do vendedor: %8.2f",sal);
}
