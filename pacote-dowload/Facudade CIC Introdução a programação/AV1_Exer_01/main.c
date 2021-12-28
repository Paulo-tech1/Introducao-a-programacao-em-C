#include <stdio.h>
#include <stdlib.h>

/*) Fa�a um programa para ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que ele recebe uma comiss�o de 3% sobre o total das vendas at� R$ 1.500,00
mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu sal�rio total. */
int main()
{
    float sf,vdv,cm,slt; //Declara��o de vari�vel

    printf("\n=============Simulador de comissao=============\n ");
    printf("\nDigite o salario fixo:R$ ");//Sa�da de dados
    scanf("%f",&sf);//Captura de dados efetuado pelo usu�rio

    printf("\nDigite o valor da venda:R$ "); // Sa�da de dados
    scanf("%f",&vdv);//Captura de dados efetuado pelo usu�rio

    if (vdv <=1500)//Estrutura condicional

        cm=vdv*3/100;// Porcentagem
    else if (vdv >=1500)//Estrutura condicional

        cm=vdv*5/100;//Porcentagem
    slt=sf+cm;
    printf("\nSua comissao e de : R$ %.2f\n",cm);//Sa�da de dados
    printf("\nSalario total:    R$ %.2f\n",slt);//Sa�da de dados
    printf("\n=======================================================\n ");
    return 0;

}
