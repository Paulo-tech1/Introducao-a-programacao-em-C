#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*5 - Faça um programa que leia informações de alunos (Matricula, Nota1, Nota2 , Nota3)
com o fim das informações indicado por Matricula = 9999 .
Para cada aluno deve ser calculada a média final de acordo com a seguinte fórmula:
Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9
Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula, Média Final e a mensagem "APROVADO" ;
se a média final for inferior a 5, o
algoritmo deve mostrar Matricula, Média Final e a mensagem "REPROVADO".
Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e o total de reprovados.*/

int main()
{
    setlocale(LC_ALL,"");
    int Mat,total=0,totalaprov=0,totalrepro=0;
    float Nota1, Nota2, Nota3, Media;
    do
    {
        printf("\n Matrícula: ");
        scanf("%d",&Mat);
        if(Mat==9999)
            break;
        printf("\n Nota1    : ");
        scanf("%f",&Nota1);
        printf("\n Nota2    : ");
        scanf("%f",&Nota2);
        printf("\n Nota3    : ");
        scanf("%f",&Nota3);
        Media = ((2*Nota1)+(3*Nota2)+(4*Nota3))/9;
        if(Media>=5)
        {
            printf("\n Matrícula= %d - Média Final= %4.1f - APROVADO",Mat,Media);
            printf("\n ===============================================");
            totalaprov++;
        }
        else
        {
            printf("\n Matrícula= %d - Média Final= %4.1f - REPROVADO",Mat,Media);
            totalrepro++;
        }
    }
    while(Mat!=9999);
    total = totalaprov + totalrepro;
    printf("\n Total de Aprovados  = %d",totalaprov);
    printf("\n Total de Reprovados = %d",totalrepro);
    printf("\n Total de Alunos     = %d",total);
}
