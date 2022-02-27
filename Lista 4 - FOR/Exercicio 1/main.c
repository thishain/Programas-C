#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numerosDigitados =0, i, qtdeNumeros =0, n1 = 0, n = 0, k = 0, numerosPares = 0, mediaPares = 0, somaPares =0;
    float soma =0, maior = 0, menor = 0, media = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d%*c", &numerosDigitados);



        for (i=0;i<numerosDigitados;i++) {
                printf("\nDigite a quantidade do numero %d:", i + 1);
                scanf("%d%*c", &n);

            if (n > maior) {
                    maior = n;
            }

            if (menor == 0) {
                    menor = n;

            }
            else if (n < menor) {
                menor = n;
            }

            if (n % 2 == 0){
                numerosPares++;
                somaPares = somaPares + n;
                mediaPares = (mediaPares + n) / numerosPares;
            }

                soma = soma + n;
                qtdeNumeros++;
                media = soma / numerosDigitados;

    }

                    system("cls");
                    printf("NUMEROS PARES: %d\n", numerosPares);
                    printf("SOMA DOS PARES: %d\n", somaPares);
                    printf("A SOMA dos número é: %.2f\n", soma);
                    printf("O MAIOR número é: %.2f\n", maior);
                    printf("O MENOR número é: %.2f\n", menor);
                    printf("A MEDIA número é: %.2f\n", media);
                    printf("A MEDIA dos números pares é: %.2d\n", mediaPares);
                    printf("A QUANTIDADE de números digitados é: %d\n", qtdeNumeros);


    return 0;
}
