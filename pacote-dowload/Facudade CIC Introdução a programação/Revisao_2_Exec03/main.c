#include <stdio.h>
#include <stdlib.h>
/*Quest�o 3 � Estrutura Repeti��o (for)
Ap�s a aplica��o da prova, um professor necessita gerar as seguintes informa��es:
� Maior nota da turma;
� Menor nota da turma;
� M�dia das notas.
Elaborar um programa que atenda as solicita��es do professor, considerando a entrada de 50 notas.*/


int main()
{
    float nota,maior=0,menor=10,soma=0,media;
    int i;
    for(i=1; i<=5; i++)
    {
        printf("\n Nota: ");
        scanf("%f",&nota);
        if(nota>maior)
            maior=nota;
        if(nota<menor)
            menor=nota;
        soma=soma+nota; //ou soma+=nota;
    }
    media=soma/5;
    printf("\n Maior nota     = %4.1f",maior);
    printf("\n Menor nota     = %4.1f",menor);
    printf("\n Media da turma = %4.1f",media);
}
