#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

//   Faça um programa que mostre na tela algumas frases assassinas, que são aquelas que fazem com muitas ideias sejam perdidas antes que amadureçam ou sejam aprofundadas.
//   Eis alguns exemplos (bole também os seus):

//          "Isto não vai dar certo"

//          "Você nunca vai conseguir"

//          "Você vai se estrepar"

//          "Não vai dar em nada"

//          "Está tudo errado!"

        setlocale(LC_ALL,"");
        int op;

            do {

                printf("1 a 5: ");
                scanf("%i", &op);

                    if(op == 0) {
                            break;

                        } else {

                            switch(op) {
                        case 1:
                            printf("Você é fraco!\n");
                            break;
                        case 2:
                            printf("Você nunca vai conseguir!\n");
                            break;
                        case 3:
                            printf("Você vai se ferrar!\n");
                            break;
                        case 4:
                            printf("Não vai dar em nada!\n");
                            break;
                        case 5:
                            printf("Está tudo errado!\n");
                            break;
                        default:
                            break;
                    }
                            }



            }while (op<=5);



    return 0;

}
