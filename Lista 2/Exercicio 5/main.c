#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //screva um programa para ler 3 valores inteiros (considere que não
    //serão lidos valores iguais) e escrevê-los em ordem crescente

    int n1, n2, n3, aux, maior, menor, meio;
    setlocale(LC_ALL, "");

        printf("Digite o valor do primeiro número: ");
        scanf("%d", &n1);///5

        printf("Digite o valor do segundo número: ");
        scanf("%d", &n2);///7

        printf("Digite o valor do terceiro número: ");
        scanf("%d", &n3);///3

            if (n1 > n2 && n1 > n3 && n2 > n3) {//a=3 b=2 c=1
                printf("%d %d %d", n3, n2, n1);
            }

            if(n2 > n1 && n2 > n3 && n3 > n1) {//a=10 b=1 c=30
                printf("%d %d %d", n1, n3, n2);
            }

            if(n2 > n1 && n2 > n3 && n3 < n1) {//a=3 b=20 c=2
                printf("%d %d %d", n3, n1, n2);
            }

            if(n2 < n1 && n2 < n3 && n1 > n3) {//a=10 b=1 c=20
                printf("%d %d %d", n2, n3, n1);
            }

            if(n2 < n1 && n2 < n3 && n1 < n3) {//a=2 b=1 c=3
                printf("%d %d %d", n2, n1, n3);
            }

            if(n3 > n1 && n3 > n2 && n2 > n1) {//a=10 b=20 c=30
                printf("%d %d %d", n1, n2, n3);
            }



    return 0;
}
