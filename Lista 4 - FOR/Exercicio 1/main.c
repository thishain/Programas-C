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
                    printf("A SOMA dos n�mero �: %.2f\n", soma);
                    printf("O MAIOR n�mero �: %.2f\n", maior);
                    printf("O MENOR n�mero �: %.2f\n", menor);
                    printf("A MEDIA n�mero �: %.2f\n", media);
                    printf("A MEDIA dos n�meros pares �: %.2d\n", mediaPares);
                    printf("A QUANTIDADE de n�meros digitados �: %d\n", qtdeNumeros);


    return 0;
}
