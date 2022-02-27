#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cod_prod[10], prod_estoque[10], i, aux_estoque =0, quantidade =0, aux=0, cod_cliente=0, estoque =0;
    int cod_prod2 =0, verifica =0;



        for(i=0;i<2;i++) {
            printf("Digite o CODIGO do %dº produto: ", i + 1);
            scanf("%d%*c", &cod_prod[i]);
            printf("Digite o total de produtos no estoque: ");
            scanf("%d%*c", &prod_estoque[i]);

        }

        printf("Digite o CODIGO do cliente: ");
        scanf("%d%*c", &cod_cliente);

        do {

        printf("Digite o CODIGO do produto que deseja comprar: ");
        scanf("%d%*c", &cod_prod2);
        verifica = 0;



        for(i=0;i<2;i++) {
                if(cod_prod[i] == cod_prod2) {
                    aux_estoque=i;
                    verifica = 1;
                }
        }

            if(verifica == 1) {
                printf("Digite o QUANTIDADE que deseja comprar: ");
                scanf("%d%*c", &quantidade);

                if(quantidade<= prod_estoque[aux_estoque]) {
                    prod_estoque[aux_estoque] = prod_estoque[aux_estoque] - quantidade;
                    printf("Pedido atendido. Obrigado e volte sempre.\n\n");
                    for(i=0;i<2;i++) {
                        printf("Código = %d\n", cod_prod[i]);
                        printf("A quantidade no estoque é = %d\n\n", prod_estoque[i]);
                    }
                }
                else {
                    printf("Não temos estoque suficiente dessa mercadoria.\n");
                }
            }
            else {
                printf("Código inexistente.\n\n");
            }

            printf("Para sair digite [0]\n");
            printf("Digite o código do CLIENTE\n");
            scanf("%d%*c", &cod_cliente);

        }while(cod_cliente != 0);


        printf("Estoque atualizado é: \n");

            for(i=0;i<2;i++) {
                printf("Código = %d\n", cod_prod[i]);
                printf("A quantidade no estoque é = %d\n", prod_estoque[i]);
            }


    return 0;
}
