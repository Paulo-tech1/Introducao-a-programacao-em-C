#include <stdio.h>
#include <stdlib.h>

/*3. Solicitar um número inteiro e informar se é positivo, negativo ou nulo.*/

int main()
{
    int N;
	printf("\n Numero: ");
	scanf("%d",&N);
	if (N > 0)
	 printf("\n POSITIVO");
	else if(N < 0)
	 printf("\n NEGATIVO");
    else
     printf("\n NULO");
}
