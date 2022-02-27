#include <stdio.h>
///funcao sem retorno com parametros
void soma();
void multiplica(float a, float b);
float divisao();
int resto(int valor);


int main()
{
    float quociente;
        soma();
        multiplica(10,20);
        quociente = divisao();//valor de r retorna aqui
        printf("\nQuociente: %f",quociente);
        printf("\nQuociente: %f",divisao());
        printf("\Resto da divisao: %d",resto(10));

    return 0;
}



void multiplica(float a, float b)
{
    float x;

        x = a*b;
        printf("\nResultado: %f",x);
}



void soma()
{
    int a=5; int b=2;
    int soma;
        soma = a + b;
        printf("\nsoma:%d",soma);
}



float divisao(){
    float a, b;
    float r;
        a = 10; b = 5;
        r = a / b;

    return r;
}

int resto(int valor)
{
    return valor%2;
}
