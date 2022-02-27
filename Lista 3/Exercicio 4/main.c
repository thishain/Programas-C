#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
        char nomeTime1[30], nomeTime2[30];
        int placar1, placar2;



            printf("Digite o nome do primeiro time: ");
            fgets(nomeTime1, 30, stdin);

            printf("Digite o numero de gols do primeiro time: ");
            scanf("%d%*c", &placar1);

            system("cls");

            printf("Digite o nome do segundo time: ");
            fgets(nomeTime2, 30, stdin);

            printf("Digite o numero de gols do segundo time: ");
            scanf("%d%*c", &placar2);

            system("cls");

                if(placar1 > placar2) {
                    nomeTime1[strcspn(nomeTime1, "\n")] = "";
                    printf("O time %s foi o vencedor com %d gols a %d\n", nomeTime1, placar1, placar2);
                }

                else if (placar2 > placar1) {
                    nomeTime2[strcspn(nomeTime2, "\n")] = "";
                    printf("O time %s foi o vencedor com %d gols a %d\n", nomeTime2, placar2, placar1);
                }

                else {
                    printf("Deu empate!!\n");
                }



    return 0;
}
