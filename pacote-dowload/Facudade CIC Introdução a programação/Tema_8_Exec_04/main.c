#include <stdio.h>
#include <stdlib.h>

/*4 - Fa�a um programa que leia um n�mero FN, calcule e mostre os N primeiros termos da sequ�ncia de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...).
O valor lido para N sempre ser� maior ou igual a 2.*/

int main()
{
    int PT,ST,TS,FN,X;
    printf("\n Entre com o numero de termos: ");
    scanf("%d",&FN);
    if (FN<2)
        printf("\n O numero deve ser maior ou igual a 2");
    else
    {
        PT=0;
        ST=1;
        X=2;
        printf("%d ",PT);
        printf(", %d ",ST);
        do
        {
            TS=PT+ST;
            printf(", %d ",TS);
            PT=ST;
            ST=TS;
            X++;
        }
        while(X<FN);
    }
}
