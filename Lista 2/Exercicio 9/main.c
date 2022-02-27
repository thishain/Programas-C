#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, n3, maior;

    setlocale(LC_ALL, "");
    /// Escreva um programa para ler 3 valores inteiros e escrever o maior deles.
    ///Considere que o usuário não informará valores iguais.


        printf("Digite o primeiro valor: ");
        scanf("%d", &n1);

        printf("Digite o segundo valor: ");
        scanf("%d", &n2);

        printf("Digite o terceiro valor: ");
        scanf("%d", &n3);

            if(n1 > n2 && n1 > n3) {
                printf("O maior numero é N1: %d", n1);
            }

            if(n2 > n1 && n2 > n3) {
                printf("o maior numero é N2: %d", n2);
            }

            if(n3 > n1 && n3 > n2) {
                printf("o maior numero é N3: %d", n3);
            }



    return 0;
}
