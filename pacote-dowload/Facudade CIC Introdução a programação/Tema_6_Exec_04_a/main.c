#include <stdio.h>
#include <stdlib.h>

/*4 - Fa�a um programa que imprima os m�ltiplos positivos de 7, inferiores a 100.*/

int main()
{
    int i;
	for(i=1;i<=100;i++)
	 if(i%7==0)
	  printf("\n %d",i);
}
