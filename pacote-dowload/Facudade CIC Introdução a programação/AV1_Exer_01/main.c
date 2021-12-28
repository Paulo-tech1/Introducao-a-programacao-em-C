#include <stdio.h>
#include <stdlib.h>

/*) Faça um programa para ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00
mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total. */
int main()
{
    float sf,vdv,cm,slt; //Declaração de variável

    printf("\n=============Simulador de comissao=============\n ");
    printf("\nDigite o salario fixo:R$ ");//Saída de dados
    scanf("%f",&sf);//Captura de dados efetuado pelo usuário

    printf("\nDigite o valor da venda:R$ "); // Saída de dados
    scanf("%f",&vdv);//Captura de dados efetuado pelo usuário

    if (vdv <=1500)//Estrutura condicional

        cm=vdv*3/100;// Porcentagem
    else if (vdv >=1500)//Estrutura condicional

        cm=vdv*5/100;//Porcentagem
    slt=sf+cm;
    printf("\nSua comissao e de : R$ %.2f\n",cm);//Saída de dados
    printf("\nSalario total:    R$ %.2f\n",slt);//Saída de dados
    printf("\n=======================================================\n ");
    return 0;

}
