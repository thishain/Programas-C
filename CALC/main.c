#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>


int main()
{

            setlocale(LC_ALL, "");

                float n1, n2, resultado;
                int verificador = 0, operacao = 0;
                char Operacao[10];


        do {
                system("color 2");

                        printf("=========================");
                        printf("\n1 - ADI��O\n2 - SUBTRA��O\n3 - DIVIS�O\n4 - MULTIPLICAC�O\n5 - SAIR\n");
                        printf("=========================\n");
                        printf("OPERA��O: ");
                        scanf("%i", &operacao);

                            if (operacao == 1) {
                                printf("\nVoc� selecionou a ADI��O + \n");
                            } else if (operacao == 2) {
                                printf("\nVoc� selecionou a SUBTRA��O - \n");
                                } else if (operacao == 3) {
                                    printf("\nVoc� selecionou a DIVIS�O / \n");
                                    } else if(operacao == 4) {
                                        printf("\nVoc� selecionou a MULTIPLICA��O * \n");
                                        }


                    if(operacao <=4) {

                printf ("\n============================");
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &n1);
                printf ("\n============================");


                printf("\nDigite o segundo numero: ");
                scanf("%f", &n2);



                switch(operacao) {
                    case 1:
                            resultado = n1 + n2;
                            strcpy(Operacao, "ADI��O");
                            break;
                    case 2:
                            resultado = n1 - n2;
                            strcpy(Operacao, "SUBTRA��O");
                            break;
                    case 3:
                            if(n1 == 0 || n2 == 0){
                                printf("\nImpossivel dividir por 0");
                                break;
                            } else {
                                resultado = n1 / n2;
                                strcpy(Operacao, "DIVIS�O");
                                break;
                            }

                    case 4:
                            resultado = n1 * n2;
                            strcpy(Operacao, "MULTIPLICAC�O");
                            break;

                    case 5:
                            break;
                    default:
                            printf("Digite um n�mero valido!");

                          }


                        printf ("\n============================");
                        printf ("\nPrimeiro numero = %0.2f"
                                "\nSegundo numero = %0.2f"
                                "\nO resultado da %s �: %0.2f",n1 ,n2 ,Operacao, resultado);
                        printf ("\n============================");
                        printf ("\n");
                        printf("\nDeseja realizar outra operacao? '1' para sim '2' para sair: ");
                        scanf("%i", &verificador);
                        system("cls");

                        if(verificador > 1) {
                                printf("At� a proxima!\n");
                        }
                    } else {
                        printf("\nAt� a proxima!\n");
                        break;
                    }



        }while(verificador == 1);

    return 0;

}

