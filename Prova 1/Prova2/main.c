#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    ///DECLARANDO VARIAVEIS
    int n, i, j, c=0,triangulo;

        printf("\nDigite a quantidade de linhas que deseja colocar no TRIANGULO DE FLYOD: ");
        scanf("%d%*c", &triangulo);//RECEBENDO O NUMERO DIGITADO DO USUARIO

        for(i=1; i<=triangulo;i++) {//REPETIÇÃO DE LINHAS
            for(j=1; j<=i;j++) {//LAÇO PARA ACRESCIMO DE NUMEROS
                c++;//ACRESCIMO DE NUMEROS
                printf("%d ", c);//IMPRESSÃO DE NUMEROS
            }
            printf("\n");//PULA LINHA
        }

    return 0;
}
