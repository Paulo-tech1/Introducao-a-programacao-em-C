#include <stdio.h>
#include <stdlib.h>

/*Analise cada um dos programas e os reescreva utilizando subrotinas.
Questão1

#include <stdio.h>
main()
{
  int numero, quadrado;

  printf("\nEntre com um numero inteiros nao-nulo:  ");
  scanf("%d", &numero);
  quadrado = numero * numero;
  printf("O quadrado do numero %d e' %d\n", numero, quadrado);

}

*/

int quadrado (int n)
{
	return n*n;
}

main()
{
  int numero;

  printf("\nEntre com um numero inteiros nao-nulo:  ");
  scanf("%d", &numero);
  printf("O quadrado do numero %d e' %d\n", numero,quadrado(numero));

}


















