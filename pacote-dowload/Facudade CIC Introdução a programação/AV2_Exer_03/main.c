#include <stdio.h>
#include <stdlib.h>

/*3Considere um caixa automático com apenas um repositório com capacidade para armazenar 1000 notas de 10 reais.
Elabore um programa para ler um valor e fornecer a quantidade de notas correspondente a esse valor.
O seu programa deve manter a quantidade de notas no repositório atualizada.
Caso o valor lido não possa ser fornecido por falta de notas, o programa deve imprimir uma mensagem indicando o fato.
O programa também deve imprimir uma mensagem se o valor não for múltiplo de 10.
Após o tratamento do valor lido, com a impressão da mensagem ou o fornecimento das notas correspondentes,
o procedimento deve ser repetido. O programa deve parar quando um valor lido for negativo.
Obs: Para alguma operação (a sua escolha) utilize função.
*/

//Protótipos das funções
void impri_cab(void);
int x_daques(int qtd_armz, int val);

int main()
{
    int valor, qtd_armze=1000,res; //Declaração de variáveis dentro da função main
    impri_cab();
    printf("\n***DIGITE UM VALOR NEGATIVO PARA FINALIZAR***\n"); // Interação com o usuário
    printf("\n INFORME O VALOR QUE DESEJA SACAR R$ "); // informar o valor do saque  ou digita valor negativo para sair
    scanf("%d", &valor);

    //Condição de comparação do valor de entrada
    while (valor > 0)
    {

        if (valor % 10 !=0)
            printf("\nVALOR INVALIDO. APENAS MULTIPLO DE R$10\n"); //comparação de múltiplo de R$10

        else
        {

            if (valor / 10 > qtd_armze)//Condição de verificação do repositório
                printf("\n[ERROR] OPERACAO CANCELDA SALDO EM CAIXA INSUFICIENTE\n");

            else
            {

                //cahamda da função int
                res=x_daques(valor, qtd_armze);
                valor=valor;
                valor/=10;


                printf("\nSAQUE BEM SUCEDIDO QTD. DE %d NOTAS DE R$10\n", valor);
                printf("\n***DIGITE UM VALOR NEGATIVO PARA FINALIZAR***\n"); // Interação com o usuário

                qtd_armze=qtd_armze-valor;//Processo de atualização do repositório

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

//Funcao int calcula quantidade de cédulas
int x_daques(int qtd_armz, int val)
{
    int result; //Varaicavel da função que so é criada na memoria quando acionada
    qtd_armz = qtd_armz - val / 10;
    result=qtd_armz;
    return result; //Retorno da função
}
