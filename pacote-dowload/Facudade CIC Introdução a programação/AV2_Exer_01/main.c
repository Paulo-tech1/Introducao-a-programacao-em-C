#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>


/*QUEST�ES

1 Um colecionador de carros deseja realizar uma  pesquisa referentes as caracter�sticas dos seus ve�culos.
Fa�a um programa que o auxilie nessa miss�o.  Para tal, dever� ser solicitado de cada ve�culo:
o seu nome (Sim! Colecionador costuma dar nomes aos seus carros!), a sua pot�ncia  (HP) e o seu pre�o de mercado.
Sabe-se que ser� interrompida da solicita��o de dados quando for digitado uma pot�ncia (HP) igual a zero.
Ao final o programa dever� informar:
a m�dia de pre�os dos ve�culos;
a porcentagem de ve�culos com pot�ncia (HP) acima de 200;
o nome do ve�culo com maior pot�ncia.
*/

//Prot�tipo das fun��o
void impri_cabec(void);

int main()
{
    //Declara��o de vari�veis
    float pthp=0, preco, media=0, pctg=0, mPt=0, cont=0,contPt=0;
    char nome[20], m_Nome[20];

    impri_cabec(); //Chamada da fun��o

    do
    {

        printf("\nInforme a Potencia [HP] do carro:");
        scanf("%f",&pthp);//entra de dados
        if (pthp==0) //Condi��o de parada
        {
            break;
        }
        printf("\nInforme o nome  do carro: ");
        scanf("%s",&nome);
        printf("\nDigite o preco de mercado: ");
        scanf("%f", &preco);

        cont++;
        media=media+preco;

        if (pthp>200) //Condi��o de compara��o
            contPt++;

        if(pthp> mPt)

        {
            mPt=pthp;
            strcpy(m_Nome, nome);
        }
    }
    while(pthp != 0); //Condi��o de compara��o
    media = media/cont;
    pctg = contPt*100/cont;

    printf("\nMedia de preco: %.2f\n", media);
    printf("\nUm total de %.f %% dos carros possui uma potencia acima de 200[HP]\n", pctg);
    printf("\n%s :e o carro com maior potencia [HP]\n", m_Nome);
}

//Fun��o void n�o retorna
void impri_cabec(void)
{
    printf("\n============================================================\n");
    printf("\n=====================TABELA DE CARRO========================\n");
    printf("\n======OBS.: DIGITE POTENCIA = [0] PARA FINALIZAR ===========\n");
    return;
}

