#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

//   Fa�a um programa que mostre na tela algumas frases assassinas, que s�o aquelas que fazem com muitas ideias sejam perdidas antes que amadure�am ou sejam aprofundadas.
//   Eis alguns exemplos (bole tamb�m os seus):

//          "Isto n�o vai dar certo"

//          "Voc� nunca vai conseguir"

//          "Voc� vai se estrepar"

//          "N�o vai dar em nada"

//          "Est� tudo errado!"

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
                            printf("Voc� � fraco!\n");
                            break;
                        case 2:
                            printf("Voc� nunca vai conseguir!\n");
                            break;
                        case 3:
                            printf("Voc� vai se ferrar!\n");
                            break;
                        case 4:
                            printf("N�o vai dar em nada!\n");
                            break;
                        case 5:
                            printf("Est� tudo errado!\n");
                            break;
                        default:
                            break;
                    }
                            }



            }while (op<=5);



    return 0;

}
