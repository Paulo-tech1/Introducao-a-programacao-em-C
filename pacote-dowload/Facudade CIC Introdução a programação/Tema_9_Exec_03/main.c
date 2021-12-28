#include <stdio.h>
#include <stdlib.h>

/*Analise cada um dos programas e os reescreva utilizando subrotinas
Questão 3

#include <stdio.h>
main()
{
  float VALOR,NVALOR,DESCONTO;

  printf("\nEntre com o valor do produto:  ");
  scanf("%f", &VALOR);
  DESCONTO = VALOR*9/100;
  NVALOR = VALOR - DESCONTO;
  printf("Desconto            =   %6.2f \n", DESCONTO);
  printf("Valor com  Desconto =   %6.2f", NVALOR);

}

*/

float calculaDesconto (float v)
{
    return v*9/100;
}

float calculaNovo(float v, float d)
{
    return v - d;
}
main()
{
    float VALOR;

    printf("\nEntre com o valor do produto: R$  ");
    scanf("%f", &VALOR);
    printf("\nDesconto            = R$  %6.2f \n", calculaDesconto(VALOR));
    printf("\nValor com  Desconto = R$  %6.2f \n", calculaNovo(VALOR,calculaDesconto(VALOR)));

}




















