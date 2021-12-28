#include <stdio.h>
#include <stdlib.h>

/*2 - Foi realizada uma pesquisa de algumas características físicas da população de uma certa região,
a qual coletaram os seguintes dados referentes a cada habitante para serem analisados:
- sexo (masculino e feminino)
- cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos (louros, castanhos, pretos)
- idade
Faça um programa que determine e escreva:
a) a maior idade dos habitantes;
b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18
e 35 anos, inclusive;
c) a quantidade de indivíduos que tenham olhos verdes e cabelos
louros;
O final do conjunto de habitantes é reconhecido pelo valor -1 informado como idade.*/
int main()
{
    char sexo[10],co[10],cc[10];
    int idade,maior=0,q1=0,q2=0;

    printf("\n idade : ");
    scanf("%d",&idade);
    while(idade!=-1)
    {
        printf("\n sexo (masculino e feminino): ");
        scanf("%s",&sexo);
        printf("\n cor dos olhos (azuis, verdes ou castanhos) : ");
        scanf("%s",&co);
        printf("\n cor dos cabelos (louros, castanhos, pretos) : ");
        scanf("%s",&cc);
        if(idade>maior)
            maior=idade;
        if((strcmp(sexo,"feminino")==0) && (idade>=18) && (idade<=35))
            q1=q1+1;
        if ((strcmp(co,"verdes")==0) && (strcmp(cc,"louros")==0))
            q2=q2+1;
        printf("\n idade : ");
        scanf("%d",&idade);
    }
    printf("\n maior idade = %d ",maior);
    printf("\n quantidade de feminino entre 18 e 35 anos: %d ",q1);
    printf("\n quantidade de olhos verdes e louros: %d ",q2);
}
