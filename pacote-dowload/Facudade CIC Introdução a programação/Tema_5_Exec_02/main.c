#include <stdio.h>
#include <stdlib.h>

/*2. Entrar como um número inteiro e informar o dia da semana correspondente.*/

int main()
{
    int N;
    printf("\n Informe um Numero de 1 a 7 correspondente ao dia da semana: ");
    scanf("%d",&N);
    switch (N)
    {
    case 1:
        printf (" \n Domingo\n");
        break;
    case 2:
        printf (" \n Segunda-feira\n");
        break;
    case 3:
        printf (" \n Terca-feira\n");
        break;
    case 4:
        printf (" \n Quarta-feira\n");
        break;
    case 5:
        printf (" \n Quinta-feira\n");
        break;
    case 6:
        printf (" \n Sexta-feira\n");
        break;
    case 7:
        printf (" \n Sabado\n");
        break;
    default:
        printf (" \n Valor invalido\n");

    }
}
