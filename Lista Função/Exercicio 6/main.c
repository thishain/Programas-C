#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void recebeTempo();
int calculaTempo(int anos, int meses, int dias);
//VARIAVEIS
int anos, meses, dias, resto, totalDias;

//FUNÇÃO PARA RECEBER OS DADOS
void recebeIdade() {

     printf("Digite a idade da pessoa em [ANOS]: ");
     scanf("%d%*c", &anos);

     printf("Digite o restante da idade da pessoas em [MESES]: ");
     scanf("%d%*c", &meses);

     printf("Digite o restante da idade da pessoa em [DIAS]: ");
     scanf("%d%*c", &dias);

    calculaIdade(anos, meses, dias);
}

//FUNÇÃO QUE CALCULA OS DIAS TOTAIS DA IDADE
int calculaIdade(int anos, int meses, int dias) {

    totalDias = anos * 365;
    totalDias = totalDias - (meses * 30);
    totalDias = totalDias - dias;

    return printf("%d DIAS!", totalDias);

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //CHAMA A FUNÇÃO RECEBEIDADE
    recebeIdade();

    return 0;
}
