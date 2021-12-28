#include <stdio.h>
#include <stdlib.h>

/*2 Montar um programa para imprimir uma lista, onde todos os parâmetros serão informados pelo usuário.
Exemplos:
	Valor inicial: 1  | Valor final: 10  |  Incremento: 1  |  Ordem: Ascendente
  	   Resultado: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

	Valor inicial: 2  | Valor final: 20  |  Incremento: 2  |  Ordem: Descendente
  	  Resultado: 20, 18, 16, 14, 12, 10, 8, 6, 4, 2
*/

//Protótipo das função
void impri_cabec(void);


int main()
{
    int num1, num2, incr, opcao;

    //Chamada da função
    impri_cabec();

    printf("\nInforme o numero inicial:");
    scanf("%d",&num1);
    printf("\nInforme o numero final:");
    scanf("%d",&num2);
    printf("\n Menu opcoes:\n 1-Ascendente \n 2-Descendente\n:");
    scanf("%d", &opcao);

    //Condição de parada
    if(opcao==1)
    {

        printf("\nA opcao [1] foi selecioada ascendente: ");
        printf("\nInforme o incremento: ");
        scanf("%d",&incr);

        //Condição de comparação
        for(num1=num1; num1<=num2; num1+=incr)
        {
            printf("\nNumero %d",num1);
        }
    }
    if (opcao==2)
    {
        printf("\nA opcao [2] foi selecioada descendente: ");
        printf("\nInforme o decremento: ");
        scanf("%d",&incr);

        //Condição de comparação
        for (num2=num2; num2>=num1; num2-=incr)
        {
            printf("\nNumero %d",num2);
        }

    }
    impri_cabec(); //Chamada da função
}
//Funcao void  nao retorna
void impri_cabec(void)
{

    printf("\n**************************************************************\n");
    printf("\n****************NUMEROS ASCENDENTES/DESCENDENTES**************\n");
    printf("\n**************************************************************\n");
    return;
}
