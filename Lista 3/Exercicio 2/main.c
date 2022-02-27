#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero;

    printf("Digite um numero INTEIRO: ");
    scanf("%d%*c", &numero);

    system("cls");

        if(numero % 5 == 0) {
            printf("Numero %d é divisivel por 5!\n", numero);
        }
        else {
            printf("Numero %d não divisivel por 5!\n", numero);
        }
    return 0;
}
