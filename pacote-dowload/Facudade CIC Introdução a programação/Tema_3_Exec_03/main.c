#include <stdio.h>
#include <stdlib.h>

/*3. Fa�a um programa que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.
Considerar que a m�dia � ponderada e que o peso das notas �: 2,3 e 5, respectivamente.*/

int main()
{
    float N1,N2,N3,M;
 printf("\nEntre com a nota 1: ");
 scanf("%f", &N1);
 printf("\nEntre com a nota 2: ");
 scanf("%f", &N2);
 printf("\nEntre com a nota 3: ");
 scanf("%f", &N3);
 M = (N1*2+N2*3+N3*5)/10;
 printf("A media e' %4.1f \n", M);
}
