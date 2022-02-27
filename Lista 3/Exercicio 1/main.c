#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float salario, totalGasto;

        printf("Digite o seu salário: ");
        scanf("%f%*c", &salario);

        printf("Digite o quanto você gastou: ");
        scanf("%f%*c", &totalGasto);

        system("cls");

            if(salario >= totalGasto) {
                printf("Gastos dentro do orçamento!");
            }
            else {
                printf("Orçamento estourado!");
            }
    return 0;
}
