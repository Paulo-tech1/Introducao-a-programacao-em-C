#include <stdio.h>
#include <stdlib.h>

/*uestão 1

Solicitar várias idades e informar:
a. Quantidade de idosos (ID >= 65)
b. Quantidade de eleitores (ID >= 16)
c. Soma das idades da pessoas aptas a dirigir (ID >= 18)
Para de solicitar dados quando idade igual 0.*/

int main()
{

    int idade,qidosos=0,qeleitores=0,smotoristas=0;
    printf("\n Digite a idade: ");
    scanf("%d",&idade);
    while(idade!=0)
    {
        if(idade>=65)
            qidosos++;
        if(idade>=16)
            qeleitores++;
        if(idade>=18)
            smotoristas=smotoristas+idade;
        printf("\n Digite a idade: ");
        scanf("%d",&idade);
    }
    printf("\n Quantidade de idosos: %d \n",qidosos);
    printf("\n Quantidade de eleitores: %d \n",qeleitores);
    printf("\n Soma das idades da pessoas aptas a dirigir: %d\n",smotoristas);
}
