#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");

    ///DECLARANDO VARIAVEIS
    float valor, imposto, valorfinal;
    char estado[3];


        //MENSAGEM NA TELA DO USUARIO
        printf("Digite o valor do produto: ");
        //LENDO VALOR DIGITADO E GUARDANDO NA VARIAVEL NUMERO
        scanf("%f%*c", &valor);

        printf("Digite o estado do destino do produto [MG] - [SP] - [RJ] - [MS]: ");
        fgets(estado, 3, stdin);




                ///LÓGICA DO PROGRAMA
                if (strcmp(estado,"MG") == 0 || strcmp(estado,"mg") == 0) {///COMPARA A STRING ESTADO, SE FOR = 0 FAÇA
                    valorfinal = valor + valor * 0.07;///CALCULA O VALOR FINAL BASEADO NO VALOR DA PORCENTAGEM DO ESTADO E DO VALOR DIGITADO
                    system("cls");///LIMPA A TELA
                    printf("O valor final do produto é R$ %0.2f\n", valorfinal);///MOSTRA O VALOR FINAL BASEADO NO NUMERO DIGITADO E NA PORCENTAGEM DO ESTADO
                }

                else if (strcmp(estado,"SP") == 0 || strcmp(estado,"sp") == 0) {///COMPARA A STRING ESTADO, SE FOR = 0 FAÇA
                    valorfinal = valor + valor * 0.12;///CALCULA O VALOR FINAL BASEADO NO VALOR DA PORCENTAGEM DO ESTADO E DO VALOR DIGITADO
                    system("cls");///LIMPA A TELA
                    printf("O valor final do produto é R$ %0.2f\n", valorfinal);///MOSTRA O VALOR FINAL BASEADO NO NUMERO DIGITADO E NA PORCENTAGEM DO ESTADO
                }

                else if (strcmp(estado,"RJ") == 0 || strcmp(estado,"rj") == 0) {///COMPARA A STRING ESTADO, SE FOR = 0 FAÇA
                    valorfinal = valor + valor * 0.15;///CALCULA O VALOR FINAL BASEADO NO VALOR DA PORCENTAGEM DO ESTADO E DO VALOR DIGITADO
                    system("cls");///LIMPA A TELA
                    printf("O valor final do produto é R$ %0.2f\n", valorfinal);///MOSTRA O VALOR FINAL BASEADO NO NUMERO DIGITADO E NA PORCENTAGEM DO ESTADO
                }

                else if (strcmp(estado,"MS") == 0 || strcmp(estado,"ms") == 0) {///COMPARA A STRING ESTADO, SE FOR = 0 FAÇA
                    valorfinal = valor + valor * 0.08;///CALCULA O VALOR FINAL BASEADO NO VALOR DA PORCENTAGEM DO ESTADO E DO VALOR DIGITADO
                    system("cls");///LIMPA A TELA
                    printf("O valor final do produto é R$ %0.2f\n", valorfinal);///MOSTRA O VALOR FINAL BASEADO NO NUMERO DIGITADO E NA PORCENTAGEM DO ESTADO
                }

                else {
                    ///MENSAGEM DE ERRO CASO O VALOR DIGITADO DO ESTADO SEJA DIFERENTE DE (MG, SP, RJ E MS)
                    system("cls");///LIMPA A TELA
                    printf("Estado fornecido incorretamente, por favor tente novamente!\n");
                }


    return 0;
}
