#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k,j, cod_produto[10];
    char nomes_produtos[35][35];
    float preco_prod[10], preco_final = 0;

        printf("NOME DOS PRODUTO!\n");
            for(i=0;i<10;i++) {
                printf("Digite o nome do produto %d: ", i + 1);
                scanf("%s%*c", &nomes_produtos[i]);


        printf("CÓDIGO DOS PRODUTO\n");
                printf("Digite o código do produto %d: ", i + 1);
                scanf("%d%*c", &cod_produto[i]);


        printf("PREÇO DOS PRODUTO\n");
                printf("Digite o preço do produto %d: ", i + 1);
                scanf("%f%*c", &preco_prod[i]);
            printf("\n------------------\n");
        }



        printf("\n#####################\n");

        for(i=0;i<10;i++) {

        if(preco_prod[i] <= 1000 && cod_produto[i] % 2 != 0) {
            printf("O produto [%s] manteve o mesmo preço de [R$%.2f].\n",nomes_produtos[i], preco_prod[i]);
        }

            else {

                if(cod_produto[i] % 2 == 0 && preco_prod[i] >= 1000) {
                    preco_final = preco_prod[i] + preco_prod[i] * 0.20;
                    printf("20 PORCENTO: \n");
                    printf("O novo preço do produto [%s] é de [R$%.2f].\n",nomes_produtos[i], preco_final);
                }

                else if (cod_produto[i] % 2 == 0) {
                            preco_final = preco_prod[i] + preco_prod[i] * 0.15;
                            printf("15 PORCENTO: \n");
                            printf("O novo preço do produto [%s] é de [R$%.2f].\n",nomes_produtos[i], preco_final);

                    }

                else if (preco_prod[i] > 1000) {
                        preco_final = preco_prod[i] + preco_prod[i] * 0.10;
                        printf("10 PORCENTO: \n");
                        printf("O novo preço do produto [%s] é de [R$%.2f].\n",nomes_produtos[i], preco_final);
                }

            }


        }

        printf("\n#####################\n");




    return 0;
}
