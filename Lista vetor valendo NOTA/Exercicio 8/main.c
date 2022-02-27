#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k,j;
    char nomes_alunos[35][35], nome_maior;
    float media_alunos[7], maior_media = 0;

        printf("NOME DOS ALUNOS!\n");
            for(i=0;i<7;i++) {
                printf("Digite o nome dos ALUNOS %d: ", i + 1);
                scanf("%s%*c", &nomes_alunos[i]);


        printf("MÉDIA DO ALUNO\n");
                printf("Digite a média do aluno %d: ", i + 1);
                scanf("%f%*c", &media_alunos[i]);

        }

        printf("\n#######################\n");

            //MAIOR MEDIA
            for(i=0;i<7;i++) {
                if(media_alunos[i] > maior_media) {
                    maior_media = media_alunos[i];
                    nome_maior = i;//SALVANDO A POCISÃO DO VETOR QUE ESTÁ O NOME DO VENDEDOR COM MAIOR VALOR
                }
            }

            //ALUNOS REPROVADOS
            for(i=0;i<7;i++) {
                if(media_alunos[i] >= 5 && media_alunos[i] <7) {
                    media_alunos[i]  = 7 - media_alunos[i];
                    printf("O aluno %s precisa tirar %.2f no exame para passar.\n", nomes_alunos[i], media_alunos[i]);
                }

                else if (media_alunos[i] >6) {

                }

                else {
                     printf("O aluno %s foi REPROVADO.\n", nomes_alunos[i]);
                }

            }

            printf("O aluno %s tem a maior nota, com %.2f.\n", nomes_alunos[nome_maior], maior_media);



        printf("#######################\n");




    return 0;
}
