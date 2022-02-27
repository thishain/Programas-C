#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[20][20];
    int qtde, i;

        printf("Digite a quantidade de alunos: ");
        scanf("%d", &qtde);

                for(i = 0;i < qtde;i++) {
                    printf("Digite o nome: \n");
                    scanf("%s", &nome[i]);

                }
                system("cls");

                for(i = 0;i< qtde; i++) {
                    printf("Nomes: %s\n", nome[i]);

                }


    return 0;
}
