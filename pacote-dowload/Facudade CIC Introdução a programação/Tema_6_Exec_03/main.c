#include <stdio.h>
#include <stdlib.h>

/*3 - Crie um programa que calcula o desconto previdenciário de dez funcionários.
Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo.
O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 318,20.
Sendo assim, ou o programa retorna o valor equivalente a 11% sobre o salário ou 318,20.*/

int main()
{
    int i;
    float SAL, INSS;
    for(i=1; i<=10; i++)
    {
        printf("\n ------------------");
        printf("\n Salario: ");
        scanf("%f",&SAL);
        INSS=SAL*11/100;
        if(INSS>318.20)
            INSS=318.20;
        printf("\n INSS = %8.2f",INSS);
    }
}
