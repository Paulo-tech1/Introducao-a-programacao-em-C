#include <stdio.h>
#include <stdlib.h>

/*1 - Elaborar um programa para entrar com o sal�rio m�nimo vigente e o sal�rio de n funcion�rios
(parar quando for digitado sal�rio = 0) e informe:
a. A quantidade de funcion�rios que recebem um sal�rio m�nimo;
b. A porcentagem de funcion�rios que recebem mais do que 3 sal�rios m�nimos.
c. A m�dia salarial.*/

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
