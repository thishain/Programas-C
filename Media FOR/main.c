#include <stdio.h>


int main()
{

        float p1,p2,media,media_classe;
        int i, aprovado,exame, reprovado,qtde;
        aprovado=0;
        exame=0;
        reprovado=0;
        media_classe = 0;


        printf("\nDigite qtde de alunos:");
        scanf("%d%*c",&qtde);

        for (i=1;i<=qtde;i++){
                printf("\nDigite a nota 1 do %d- aluno:",i);
                scanf("%f%*c",&p1);
                printf("\nDigite a nota 2 do %d- aluno:",i);
                scanf("%f%*c",&p2);

                media = (p1+p2)/2;
                media_classe = media_classe + media;//somando...

                printf("Media do aluno %d = %.1f",i,media);

                if(media<3){
                    printf("\nReprovado");
                    reprovado++;
                }

                else if(media>=3 && media<7){
                    printf("\nExame");
                    exame++;
                }

                else{
                    printf("\nAprovado");
                    aprovado++;
                }

                printf("\n\nPressione enter para continuar...");
                getch();
                system("CLS");
        }

            media_classe = media_classe/qtde;
            printf("\nAprovados: %d \nExame: %d \nReprovados:%d",aprovado,exame,reprovado);
            printf("\nMedia da classe: %.2f",media_classe);





return 0;
}
