#include <stdio.h>
#include <stdlib.h>

/*Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o.
Para estar em condi��es, um dos seguintes requisitos deve ser satisfeito:

- Ter no m�nimo 65 anos de idade.
- Ter trabalhado no m�nimo 30 anos.
- Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.

Com base nas informa��es acima, fa�a um programa que leia: o ano atual, o ano de seu nascimento e o ano de seu ingresso na empresa.

O programa dever� escrever:
- A idade do funcion�rio;
- O tempo de trabalho do empregado;
- A mensagem 'Apto para aposentadoria' ou 'N�o Apto para aposentadoria'.
*/

int main()
{
    int ano_atual,ano_nas,ano_ingre; //Declara��o de vari�vel
    printf("\n=============Simulador de aposentadoria=============\n ");

    printf("\nInforme o ano atual: ");// Sa�da de dados
    scanf("%i",&ano_atual);//Captura de dados efetuado pelo usu�rio

    printf("\nInforme o ano de nascimento: ");// Sa�da de dados
    scanf("%i",&ano_nas);//Captura de dados efetuado pelo usu�rio

    printf("\nInforme o ano de ingreso na empresa: ");// Sa�da de dados
    scanf("%i",&ano_ingre);//Captura de dados efetuado pelo usu�rio

    ano_ingre=ano_atual-ano_ingre;//Processo
    ano_nas = ano_atual-ano_nas;// Processo
    if (ano_nas >=65 || ano_ingre >=30 && ano_nas >=60 || ano_ingre >=25)//Estrutura condicional
    {
        printf("\nIdade do funcionario: %i anos\n",ano_nas);//Sa�da de dados
        printf("\nTempo de servico do funcionario : %i anos\n",ano_ingre);//Sa�da de dados
        printf("\nO funcionario esta apto para aposentadoria:\n");//Sa�da de dados
    }
    else
    {
        printf("\nIdade do funcionario: %i anos\n",ano_nas);//Sa�da de dados
        printf("\nTempo de servico do funcionario: %i anos\n",ano_ingre);//Sa�da de dados
        printf("\nO funcionario nao esta apto para aposentadoria:\n");//Sa�da de dados
    }
    printf("\n=======================================================\n ");
    return 0;

}
