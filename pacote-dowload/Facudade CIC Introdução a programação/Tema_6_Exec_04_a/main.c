#include <stdio.h>
#include <stdlib.h>

/*4 - Faça um programa que imprima os múltiplos positivos de 7, inferiores a 100.*/

int main()
{
    int i;
	for(i=1;i<=100;i++)
	 if(i%7==0)
	  printf("\n %d",i);
}
