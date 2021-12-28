#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>


/*QUESTÕES

1 Um colecionador de carros deseja realizar uma  pesquisa referentes as características dos seus veículos.
Faça um programa que o auxilie nessa missão.  Para tal, deverá ser solicitado de cada veículo:
o seu nome (Sim! Colecionador costuma dar nomes aos seus carros!), a sua potência  (HP) e o seu preço de mercado.
Sabe-se que será interrompida da solicitação de dados quando for digitado uma potência (HP) igual a zero.
Ao final o programa deverá informar:
a média de preços dos veículos;
a porcentagem de veículos com potência (HP) acima de 200;
o nome do veículo com maior potência.
*/

//Protótipo das função
void impri_cabec(void);

int main()
{
    //Declaração de variáveis
    float pthp=0, preco, media=0, pctg=0, mPt=0, cont=0,contPt=0;
    char nome[20], m_Nome[20];

    impri_cabec(); //Chamada da função

    do
    {

        printf("\nInforme a Potencia [HP] do carro:");
        scanf("%f",&pthp);//entra de dados
        if (pthp==0) //Condição de parada
        {
            break;
        }
        printf("\nInforme o nome  do carro: ");
        scanf("%s",&nome);
        printf("\nDigite o preco de mercado: ");
        scanf("%f", &preco);

        cont++;
        media=media+preco;

        if (pthp>200) //Condição de comparação
            contPt++;

        if(pthp> mPt)

        {
            mPt=pthp;
            strcpy(m_Nome, nome);
        }
    }
    while(pthp != 0); //Condição de comparação
    media = media/cont;
    pctg = contPt*100/cont;

    printf("\nMedia de preco: %.2f\n", media);
    printf("\nUm total de %.f %% dos carros possui uma potencia acima de 200[HP]\n", pctg);
    printf("\n%s :e o carro com maior potencia [HP]\n", m_Nome);
}

//Função void não retorna
void impri_cabec(void)
{
    printf("\n============================================================\n");
    printf("\n=====================TABELA DE CARRO========================\n");
    printf("\n======OBS.: DIGITE POTENCIA = [0] PARA FINALIZAR ===========\n");
    return;
}

