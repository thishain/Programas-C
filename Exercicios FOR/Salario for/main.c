#include <stdio.h>


int main()
{
    int i, anoAtual;
    float salario, novo_salario, salario_percentual, percentual;

        printf("Digite o ano atual: ");
        scanf("%d%*c", &anoAtual);

        salario = 1000;
        percentual = 1.5/100;
        novo_salario = salario + percentual * salario;


        for(i = 2007;i <=anoAtual;i++) {
            percentual = 2 * percentual;
            novo_salario = novo_salario + percentual * novo_salario;

        }

                printf("O novo salario e: %.2f", novo_salario);



    return 0;
}
