#include <stdio.h>
#include <stdlib.h>

/*Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

- Ter no mínimo 65 anos de idade.
- Ter trabalhado no mínimo 30 anos.
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.

Com base nas informações acima, faça um programa que leia: o ano atual, o ano de seu nascimento e o ano de seu ingresso na empresa.

O programa deverá escrever:
- A idade do funcionário;
- O tempo de trabalho do empregado;
- A mensagem 'Apto para aposentadoria' ou 'Não Apto para aposentadoria'.
*/

int main()
{
    int ano_atual,ano_nas,ano_ingre; //Declaração de variável
    printf("\n=============Simulador de aposentadoria=============\n ");

    printf("\nInforme o ano atual: ");// Saída de dados
    scanf("%i",&ano_atual);//Captura de dados efetuado pelo usuário

    printf("\nInforme o ano de nascimento: ");// Saída de dados
    scanf("%i",&ano_nas);//Captura de dados efetuado pelo usuário

    printf("\nInforme o ano de ingreso na empresa: ");// Saída de dados
    scanf("%i",&ano_ingre);//Captura de dados efetuado pelo usuário

    ano_ingre=ano_atual-ano_ingre;//Processo
    ano_nas = ano_atual-ano_nas;// Processo
    if (ano_nas >=65 || ano_ingre >=30 && ano_nas >=60 || ano_ingre >=25)//Estrutura condicional
    {
        printf("\nIdade do funcionario: %i anos\n",ano_nas);//Saída de dados
        printf("\nTempo de servico do funcionario : %i anos\n",ano_ingre);//Saída de dados
        printf("\nO funcionario esta apto para aposentadoria:\n");//Saída de dados
    }
    else
    {
        printf("\nIdade do funcionario: %i anos\n",ano_nas);//Saída de dados
        printf("\nTempo de servico do funcionario: %i anos\n",ano_ingre);//Saída de dados
        printf("\nO funcionario nao esta apto para aposentadoria:\n");//Saída de dados
    }
    printf("\n=======================================================\n ");
    return 0;

}
