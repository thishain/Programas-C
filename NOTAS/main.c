#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{

    system("color 2");
        int inicio = 0, contador = 0;
        float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, notaFinal = 0;
        char finalx = 'C', aluno[40];

            printf("Bem vindo, digite '1' para fazer a MEDIA de 4 notas ou '2' para sair!\n");
            scanf("%i", &inicio);

            if (inicio == 1) {

                    do {
                                printf("Digite o nome do aluno:\n");
                                scanf ("%s", aluno);

                                printf("Digite as 4 notas do aluno: (0 a 10)\n");
                                scanf ("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);




                    notaFinal = (nota1 + nota2 + nota3 + nota4) / 4;

                    printf("======================");
                    printf("\nAs notas do aluno sao:");
                    printf("\nNota 1: %0.2f", nota1);
                    printf("\nNota 2: %0.2f", nota2);
                    printf("\nNota 3: %0.2f", nota3);
                    printf("\nNota 4: %0.2f", nota4);
                    printf("\n=====================");

                    printf("\n\na NOTA FINAL do aluno %s e: %0.2f", aluno, notaFinal);
                    printf("\n");
                    if (notaFinal >= 6) {
                        printf("\nVoce foi aprovado!!");
                    }
                        else {
                        printf ("\nVoce foi reprovado!!");
                    }
                    printf("\n");

                            getchar();
                            printf("\nDeseja fazer outra operacao? 'F' para sim\n");
                            scanf("%c", &finalx);
                            system("cls");


                        } while(finalx == 'F');

            }
                else if (inicio == 2){

            }



        return 0;
    }
