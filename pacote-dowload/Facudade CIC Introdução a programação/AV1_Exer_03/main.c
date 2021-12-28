#include <stdio.h>
#include <stdlib.h>

/*Montar um programa que receba 3 n�meros e apresente o menu de op��es ao usu�rio:

                         Como deseja imprimir os n�meros?
1 � Ordem crescente
2 � Ordem decrescente
3 � Ordem de entrada dos n�meros
Resposta:

 O programa dever� imprimir os n�meros de acordo com a op��o escolhida pelo usu�rio.
Obs.: Fazer com switch..case
*/

int main()
{
    int num1,num2,num3,opc;//Declara��o de variavel

    printf("\n==============================Ordem dos n�meros===============================\n ");

    printf("\nDigite o primeiro valor: ");//Entrada de dados
    scanf("%d",&num1);//Captura de dados efetuado pelo usu�rio

    printf("\nDigite o segundo valor: ");//Entrada de dados
    scanf("%d",&num2);//Captura de dados efetuado pelo usuario

    printf("\nDigite o terceiro valor: ");//Entrada de dados
    scanf("%d",&num3);//Captura de dados efetuado pelo usuario


    printf("\nInforme o numero da opcao desejada:\n -1 Ordem crescente:\n -2 Ordem decrescente:\n -3 Ordem de entrada: \nOpcao: ");//Entrada de dados
    scanf("%i",&opc);//Capitura de dados efetuado pelo usuario



    switch(opc) //Estrutura de sele��o
    {
    case 1:
        if(num1<=num2 && num2<=num3)//Estrutura condicional
        {
            printf("\n-Ordem crescente:%d %d %d\n",num1, num2, num3);
        }
        else if(num1<=num3 && num3<=num2)
        {
            printf("\n-Ordem crescente:%d %d %d\n", num1, num3, num2);
        }
        else if(num2<=num1 && num1<=num3)
        {
            printf("\n-Ordem crescente:%d %d %d\n", num2, num1, num3);
        }
        else if(num2<=num3 && num3<=num1)
        {
            printf("\n-Ordem crescente:%d %d %d:\n", num2, num3, num1);
        }
        else if(num3<=num1 && num1<=num2)
        {
            printf("\n-Ordem crescente:%d %d %d\n", num3, num1, num2);
        }

        else
        {
            printf("\n-Ordem crescente:%d %d %d\n", num3, num2, num1);
        }

        break;

    case 2:
        if(num1>=num2 && num2>=num3)
        {
            printf("\n-Ordem decrescente:%d %d %d\n", num1, num2, num3);
        }
        else if(num1>=num3 && num3>=num2)
        {
            printf("\n-Ordem decrescente:%d %d %d\n", num1, num3, num2);
        }
        else if(num2>=num1 && num1>=num3)
        {
            printf("\n-Ordem decrescente:%d %d %d:\n", num2, num1, num3);
        }
        else if(num2>=num3 && num3>=num1)
        {
            printf("\n-Ordem decrescente:%d %d %d\n", num2, num3, num1);
        }
        else if(num3>=num1 && num1>=num2)
        {
            printf("\n-Ordem decrescente:%d %d %d\n", num3, num1, num2);
        }

        else
        {
            printf("\n-Ordem decrescente:%d %d %d\n", num3, num2, num1);
        }
        break;

    case 3:
        printf("\n-Ordem de entrada:%d %d %d\n", num1, num2, num3);
        break;
    default:
        printf("\nOpcao Invalida");

    }

    printf("\n=============================================================\n ");

    return 0;

}


















