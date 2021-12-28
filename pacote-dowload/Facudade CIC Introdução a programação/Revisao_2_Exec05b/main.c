#include <stdio.h>
#include <stdlib.h>
/*Questão 5– Estrutura Subrotina
Elaborar uma função que verifique se um número inteiro informado pelo usuário é dezena, centena ou milhar.*/

int testanum(int n)
{
    if((n>=10) && (n<=99))
        return 1;
    else if((n>=100) && (n<=999))
        return 2;
    else if((n>=1000) && (n<=9900))
        return 3;
}
main()
{
    int num;
    printf("\n Numero: ");
    scanf("%d",&num);
    if(testanum(num)==1)
        printf("\n Dezena");
    else if(testanum(num)==2)
        printf("\n Centena");
    else if(testanum(num)==3)
        printf("\n Milhar");
}
