#include <stdio.h>
#include <stdlib.h>
/*Questão 5– Estrutura Subrotina
Elaborar uma função que verifique se um número inteiro informado pelo usuário é dezena, centena ou milhar.*/


void testanum(int n)
{
	if((n>=10) && (n<=99))
	  printf("\n Dezena");
	else
	 if((n>=100) && (n<=999))
	   printf("\n Centena");
	 else
	   if((n>=1000) && (n<=9900))
	      printf("\n Milhar");
}
main()
{
	int num;
	printf("\n Numero: ");
	scanf("%d",&num);
	testanum(num);
}
