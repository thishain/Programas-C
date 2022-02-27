#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k,j, logica[15], programacao[10], vetorfinal[5], verifica = 0, aux = 0;

        printf("ALUNOS DE LÓGICA!\n");
        for(i=0;i<15;i++) {
            printf("Digite o número da matricula do %dº aluno que cursa LÓGICA: ", i + 1);
            scanf("%d%*c", &logica[i]);
        }

        printf("ALUNOS DE PROGRAMAÇÃO!\n");
        for(k=0;k<10;k++) {
            printf("Digite o número da matricula do %dº aluno que cursa Linguagem de Programação: ", k + 1);
            scanf("%d%*c", &programacao[k]);
        }


        for(i=0;i<15;i++) {
            for(k=0;k<10;k++) {
                    if(logica[i] == programacao[k]) {
                        vetorfinal[k] = logica[i];
                        verifica = 1;
                    }

                    else {

                    }
            }
        }

        if(verifica == 1) {
            for(j=0;j<5;j++) {
                    for(i=0;i<15;i++) {
                        for(k=0;k<10;k++) {
                            if(vetorfinal[j] == programacao[k] && vetorfinal[j] == logica[i]) {
                                printf("Matriculas cursando a mesma matéria: %d\n", vetorfinal[j]);
                            }

                            else {

                            }
                        }
                    }
            }
        }

        else {
            printf("Não existem alunos cursando a mesma matéria.\n");
        }






    return 0;
}
