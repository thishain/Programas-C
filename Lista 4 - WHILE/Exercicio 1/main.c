#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) Faça um programa que leia vários números, calcule e mostre:
            (a) A soma dos números digitados
            (b) A quantidade de números digitados
            (c) A média dos números digitados
            (d) O maior número digitado
            (e) O menor número digitado
            (f) A média dos números pares



    */
        int i = 1, soma = 0, menor = 0, maior = 0, numero = 0, qtde = 0;
        float media = 0, mediaPares, somaPares, totalPares;
        int contador = 0;


                    printf("\nDigite a quantidades de numeros a serem digitados: ");
                    scanf("%d%*c", &contador);


            do {

                printf("\nDigite um numero: ");
                scanf("%d%*c", &numero);


                        if(numero > maior) {
                            maior = numero;
                        }

                        if (menor == 0) {
                            menor = numero;

                        }
                        else if (numero < menor) {
                            menor = numero;
                        }

                        if(numero % 2 == 0) {
                            somaPares +=numero;
                            mediaPares++;

                        }

                soma += numero;
                qtde++;
                totalPares = somaPares / mediaPares;
                media = soma / qtde;
                i++;

            } while(i <=contador);





                    printf("\nSoma dos numeros digitados = %d", soma);
                    printf("\nQuantidade de numeros digitados: %d", qtde);
                    printf("\nMedia dos numeros digitados: %.2f", media);
                    printf("\nO maior numero e: %d", maior);
                    printf("\nO menor numero e: %d", menor);
                    printf("\nMedia dos numeros pares: %.2f", totalPares);





    return 0;
}
