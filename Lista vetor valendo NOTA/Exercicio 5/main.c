#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k,j, logica[15], programacao[10], vetorfinal[5], verifica = 0, aux = 0;

        printf("ALUNOS DE L�GICA!\n");
        for(i=0;i<15;i++) {
            printf("Digite o n�mero da matricula do %d� aluno que cursa L�GICA: ", i + 1);
            scanf("%d%*c", &logica[i]);
        }

        printf("ALUNOS DE PROGRAMA��O!\n");
        for(k=0;k<10;k++) {
            printf("Digite o n�mero da matricula do %d� aluno que cursa Linguagem de Programa��o: ", k + 1);
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
                                printf("Matriculas cursando a mesma mat�ria: %d\n", vetorfinal[j]);
                            }

                            else {

                            }
                        }
                    }
            }
        }

        else {
            printf("N�o existem alunos cursando a mesma mat�ria.\n");
        }






    return 0;
}
