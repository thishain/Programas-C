#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARANDO AS VARIAVEIS
    int numero, i = 1, soma = 0, numeros=0;

    //MENSAGEM NA TELA DO USUARIO
    printf("Digite um numero: ");
    //LENDO VALOR DIGITADO E GUARDANDO NA VARIAVEL NUMERO
    scanf("%d%*c", &numero);

        //ENQUANTO I < NUMERO DIGITADO FAÇA
        while(i<numero) {

            if(numero % i == 0) {
                numeros = i;//GUARDANDO OS DIVISORES NA VARIAVEL
                printf("NUMEROS QUE DIVIDEM: %d\n", numeros);//NUMEROS QUE DIVIDEM
                soma = soma + i;//SOMA DOS NUMEROS DIVISORES
            }
        i++;
        }

        //SAIDA DE DADOS
        printf("Soma dos divisores = %d", soma);
}
