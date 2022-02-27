#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont, num_vei, num_acid, cod;
    int maior, cid_maior, menor, cid_menor;
    int media_vei, soma_vei, media_acid;
    int soma_acid, cont_acid;

        soma_vei = 0;
        soma_acid = 0;
        cont_acid = 0;

            for(cont = 1;cont<=2;cont++) {
                printf("Digite o codigo da cidade: ");
                scanf("%d%*c", &cod);
                printf("Digite o numero de veiculos: ");
                scanf("%d%*c", &num_vei);
                printf("Digite o numero de acidentes: ");
                scanf("%d%*c", &num_acid);
                putchar('\n');

                if(cont == 1) {
                    maior = num_acid;
                    cid_maior = cod;
                    menor = num_acid;
                    cid_menor = cod;
                }
                else {
                    if (num_acid > maior) {
                        maior = num_acid;
                        cid_maior = cod;
                    }
                    if(num_acid < menor) {
                        menor = num_acid;
                        cid_menor = cod;
                    }
                }
                soma_vei = soma_vei + num_vei;
                if(num_vei < 2000) {
                    soma_acid = soma_acid + num_acid;
                    cont_acid = cont_acid + 1;
                }
            }

            printf("\nMaior indice de acidentes: %d ,na cidade: %d", maior, cid_maior);
            printf("\nMenor indice de acidentes: %d ,na cidade: %d", menor, cid_menor);

            media_vei = soma_vei / 2;

            printf("\nA media de veiculos é: %d", media_vei);

            if(cont_acid == 0) {
                printf("\nNão foi digitada nenhuma cidade com menos de 2000 veículos");
            }
            else {
                media_acid = soma_acid/cont_acid;
                printf("\nMedia de acidentes: %d", media_acid);
            }





    return 0;
}
