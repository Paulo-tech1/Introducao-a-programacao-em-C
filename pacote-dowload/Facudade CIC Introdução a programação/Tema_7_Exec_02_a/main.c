#include <stdio.h>
#include <stdlib.h>

/*1 - Elaborar um programa para entrar com o salário mínimo vigente e o salário de n funcionários
(parar quando for digitado salário = 0) e informe:
a. A quantidade de funcionários que recebem um salário mínimo;
b. A porcentagem de funcionários que recebem mais do que 3 salários mínimos.
c. A média salarial.*/

int main()
{
    float sal,salmin,sm3,p3,media,soma;
    int q1=0,q3=0,total=0;

    printf("\n Entre o salario minimo vigente: ");
    scanf("%f",&salmin);
    sm3=salmin*3;
    printf("\n Entre o salario do funcionario: ");
    scanf("%f",&sal);
    while(sal!=0)
    {
        if(sal==salmin)
            q1++;
        if(sal>sm3)
            q3++;
        total++;
        soma+=sal;
        printf("\n Entre o salario do funcionario: ");
        scanf("%f",&sal);
    }
    p3=q3*100/total;
    media=soma/total;
    printf("\n Quant. de $ 1 salmin               : %d",q1);
    printf("\n Porcentagem de $ acima de 3 salmin : %4.1f %%",p3);
    printf("\n Media Salarial                     : %8.2f",media);
}
