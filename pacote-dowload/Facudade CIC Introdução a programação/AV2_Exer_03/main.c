#include <stdio.h>
#include <stdlib.h>

/*3Considere um caixa autom�tico com apenas um reposit�rio com capacidade para armazenar 1000 notas de 10 reais.
Elabore um programa para ler um valor e fornecer a quantidade de notas correspondente a esse valor.
O seu programa deve manter a quantidade de notas no reposit�rio atualizada.
Caso o valor lido n�o possa ser fornecido por falta de notas, o programa deve imprimir uma mensagem indicando o fato.
O programa tamb�m deve imprimir uma mensagem se o valor n�o for m�ltiplo de 10.
Ap�s o tratamento do valor lido, com a impress�o da mensagem ou o fornecimento das notas correspondentes,
o procedimento deve ser repetido. O programa deve parar quando um valor lido for negativo.
Obs: Para alguma opera��o (a sua escolha) utilize fun��o.
*/

//Prot�tipos das fun��es
void impri_cab(void);
int x_daques(int qtd_armz, int val);

int main()
{
    int valor, qtd_armze=1000,res; //Declara��o de vari�veis dentro da fun��o main
    impri_cab();
    printf("\n***DIGITE UM VALOR NEGATIVO PARA FINALIZAR***\n"); // Intera��o com o usu�rio
    printf("\n INFORME O VALOR QUE DESEJA SACAR R$ "); // informar o valor do saque  ou digita valor negativo para sair
    scanf("%d", &valor);

    //Condi��o de compara��o do valor de entrada
    while (valor > 0)
    {

        if (valor % 10 !=0)
            printf("\nVALOR INVALIDO. APENAS MULTIPLO DE R$10\n"); //compara��o de m�ltiplo de R$10

        else
        {

            if (valor / 10 > qtd_armze)//Condi��o de verifica��o do reposit�rio
                printf("\n[ERROR] OPERACAO CANCELDA SALDO EM CAIXA INSUFICIENTE\n");

            else
            {

                //cahamda da fun��o int
                res=x_daques(valor, qtd_armze);
                valor=valor;
                valor/=10;


                printf("\nSAQUE BEM SUCEDIDO QTD. DE %d NOTAS DE R$10\n", valor);
                printf("\n***DIGITE UM VALOR NEGATIVO PARA FINALIZAR***\n"); // Intera��o com o usu�rio

                qtd_armze=qtd_armze-valor;//Processo de atualiza��o do reposit�rio

            }
        }

        printf("\nINFORME O VALOR QUE DESEJA SACAR R$ "); // Informa o valor  do saque  ou digita um valor negativo para finaliza
        scanf("%d", &valor);
    }
    printf("\nFIM DA OPERACAO:\n\nTOTAL DE CEDULAS  DISPONIVEL NO CAIXA: %d\n", qtd_armze);

    impri_cab();
}

//Funcao void  nao retorna
void impri_cab(void)
{
    printf("\n----------------Banco24Horas-----------------\n");
    return;
}

//Funcao int calcula quantidade de c�dulas
int x_daques(int qtd_armz, int val)
{
    int result; //Varaicavel da fun��o que so � criada na memoria quando acionada
    qtd_armz = qtd_armz - val / 10;
    result=qtd_armz;
    return result; //Retorno da fun��o
}
