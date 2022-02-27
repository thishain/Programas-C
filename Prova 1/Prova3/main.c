#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///DECLARANDO VARIAVEIS
    int i, N, j;
    float e = 1, fat;

    //MENSAGEM NA TELA DO USUARIO
    printf("Digite um numero inteiro:\n");
    scanf("%d%*c", &N);//RECEBENDO O NUMERO DIGITADO DO USUARIO


    for(i=1;i<=N;i++){//LAÇO PARA REPETIR O (NUMERO DIGITADO) N VEZES
        fat = 1;//TODA VEZ QUE PASSAR AQUI RESETA O FATORIAL PARA 1

            for(j=1;j<=i;j++){//LAÇO PARA CALCULAR FATORIAL
                fat=fat*j;//1 * j = 1 ----- 1 * j = 2 .... ETC
            }

        e = e + 1.0/fat;//GUARDANDO O VALOR DO FATORIAL

    }

    //Imprimingo na tela o valor do fatorial
     printf("E = %f\n", e);

    return 0;
}
