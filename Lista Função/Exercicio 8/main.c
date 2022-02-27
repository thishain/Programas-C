#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void recebeIdade(int idade);
void calculaIdade(int idade);
//VARIAVEIS GLOBAIS
int idade;

//FUN플O PARA RECEBER OS DADOS
void recebeIdade(int idade) {
    //CHAMA A FUN플O CALCULA IDADE
    calculaIdade(idade);
}

//CALCULO DE IDADE PARA TABELA DE CATEGORIA
void calculaIdade(int idade) {
    if(idade <=5 && idade<=7) {
        printf("Infantil A");
    }

    else if(idade >=8 && idade<=10) {
        printf("Infantil B");
    }

    else if(idade >=11 && idade<=13) {
        printf("Juvenil A");
    }
    else if(idade >=14 && idade<=17) {
        printf("Juvenil B");
    }

    else {
        printf("Adulto");
    }


}

//FUN플O PRINCIPAL
int main()
{
    printf("Digite a idade do nadador: ");
    scanf("%d%*c", &idade);

    //CHAMA A FUN플O RECEBEIDADE
    recebeIdade(idade);

    setlocale(LC_ALL, "Portuguese");




    return 0;
}
