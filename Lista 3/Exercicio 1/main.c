#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float salario, totalGasto;

        printf("Digite o seu sal�rio: ");
        scanf("%f%*c", &salario);

        printf("Digite o quanto voc� gastou: ");
        scanf("%f%*c", &totalGasto);

        system("cls");

            if(salario >= totalGasto) {
                printf("Gastos dentro do or�amento!");
            }
            else {
                printf("Or�amento estourado!");
            }
    return 0;
}
