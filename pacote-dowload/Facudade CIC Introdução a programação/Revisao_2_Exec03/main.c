#include <stdio.h>
#include <stdlib.h>
/*Questão 3 – Estrutura Repetição (for)
Após a aplicação da prova, um professor necessita gerar as seguintes informações:
• Maior nota da turma;
• Menor nota da turma;
• Média das notas.
Elaborar um programa que atenda as solicitações do professor, considerando a entrada de 50 notas.*/


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
