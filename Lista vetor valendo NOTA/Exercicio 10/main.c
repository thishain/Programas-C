#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k,j, vet_numeros[10], vet_numeros2[5], vet_final[10], aux = 0, aux1 = 0;
    float vet_final2[10];

        printf("NUMEROS PRIMEIRO VETOR!\n");
            for(i=0;i<10;i++) {
                printf("Digite o %dº número do 1º vetor: ", i + 1);
                scanf("%d%*c", &vet_numeros[i]);

            }
        printf("NUMEROS SEGUNDO VETOR!\n");
            for(i=0;i<5;i++) {
                printf("Digite o %dº número do 2º vetor: ", i + 1);
                scanf("%d%*c", &vet_numeros2[i]);
        }

        printf("\n#####################\n");


        ///FAZENDO A LÓGICA
        for(i=0;i<5;i++) {
            aux = aux + vet_numeros2[i];//Somando os números do 2º vetor e guardando na variavel aux
        }

        ///PRIMEIRO VETOR
        for(i=0;i<10;i++) {
            if(vet_numeros[i] % 2 == 0) {
                vet_final[i] = vet_numeros[i] + aux;//numeros pares somados com os numeros do 2º vetor salvando dentro do vfinal
                //printf("%d, \n", vet_final[i]);
            }
        }


        ///SEGUNDO VETOR
        for(i=0;i<10;i++) {
            if(vet_numeros[i] % 2 != 0) {
               for(k=0;k<5;k++) {
                    if(vet_numeros[i] % vet_numeros2[k] == 0) {
                            vet_final2[i] = vet_final2[i] + 1;
                    }
               }
            }
        }

        ///SAINDO RESULTADOS
        printf("Soma de  cada número par do primeiro vetor com todos do segundo.\n");

        for(i=0;i<10;i++) {
            if(vet_numeros[i] % 2 == 0) {
                printf("%d, ", vet_final[i]);
            }
        }

        printf("\n#####################\n");

        printf("Quantidade de divisores que cada número ímpar no primeiro vetor tem no segundo vetor.\n");

        for(i=0;i<10;i++) {
                    if(vet_numeros[i] % 2 != 0) {
                        printf("%.0f, ", vet_final2[i]);
                    }
        }


        printf("\n#####################\n");






    return 0;
}
