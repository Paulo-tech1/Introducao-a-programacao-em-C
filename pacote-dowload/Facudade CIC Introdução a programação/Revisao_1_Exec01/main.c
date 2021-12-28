#include <stdio.h>
#include <stdlib.h>


/* 1 Escreva um programa que le um valor positivo e que calcula e escreve o valor de E
E = 1+1/1! +1/2! +1/3!+1/N!*/

int fatorial (int  n)
{
   int  i=1, resultado=1;
   while(i<=n)
   {
     resultado*=i;
     i++;
   }
   return  resultado;
}
main()
{
   int n,i;
   float E=1;
   printf("\n Entre com o numero: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      E=E+(1.0/fatorial(i));
   printf("\nO valor de E eh = %f",E);

}
