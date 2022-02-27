#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k,j, vendas[10], verifica = 0, salarios[10], maior_vend, menor_vend;
    char nomes[35][35];
    float total = 0, maior = 0, menor = 0, salario_final = 0, comissao[10];

        printf("NOME DOS VENDEDORES!\n");
            for(i=0;i<10;i++) {
                printf("Digite o nome dos vendedor %d: ", i + 1);
                fgets(nomes[i], 35, stdin);


        printf("TOTAL DE VENDAS!\n");
                printf("Digite o valor de vendas deste vendedor %d: ", i + 1);
                scanf("%d%*c", &vendas[i]);
                total = total + vendas[i];


        printf("PORCENTUAL DA COMISSÃO!\n");
                printf("Digite a comissão do vendedor %d (em PORCENTO): ", i + 1);
                scanf("%f%*c", &comissao[i]);

        }

        menor = vendas[0];


        printf("\n#######################\n");

            ///COMISSÃO
            for(i=0;i<10;i++) {
                  if(comissao[i] >0) {
                        salario_final = vendas[i] + (vendas[i] * comissao[i] / 100);
                        printf("Vendas do vendedor: %s com o valor %.2f\n", nomes[i], salario_final);
                    }

                    else {
                        printf("Não é possivel calcular com porcentagem menor ou igual a 0.");
                    }

            }

            ///MAIOR E MENOR
            for(i=0;i<10;i++) {
                if(vendas[i] > maior) {
                    maior = vendas[i];
                    maior_vend = i;//SALVANDO A POCISÃO DO VETOR QUE ESTÁ O NOME DO VENDEDOR COM MAIOR VALOR
                }

                else {
                    if(vendas[i] < menor) {
                        menor = vendas[i];
                        menor_vend = i;//SALVANDO A POCISÃO DO VETOR QUE ESTÁ O NOME DO VENDEDOR COM MENOR VALOR
                    }
                }
            }


        printf("\nTOTAL DE VENDAS: R$%.2f\n", total);
        printf("A maior venda é do %s com o valor de R$%.2f\n",nomes[maior_vend], maior);//IMPRIMINDO SOMENTE A POCISÃO QUE SE ENCONTRA O NOME DO VENDEDOR COM MAIOR VALOR
        printf("A menor venda é do %s com o valor de R$%.2f\n",nomes[menor_vend], menor);//IMPRIMINDO SOMENTE A POCISÃO QUE SE ENCONTRA O NOME DO VENDEDOR COM MENOR VALOR





    return 0;
}
