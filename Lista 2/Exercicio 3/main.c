#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /// Escreva um programa que verifique a validade de uma senha fornecida
    ///pelo usu�rio. A senha v�lida � o n�mero 1234. Devem ser impressas as
    ///seguintes mensagens:
    ///ACESSO PERMITIDO caso a senha seja v�lida.
    ///ACESSO NEGADO caso a senha seja inv�lida.

    int senha;

        printf("Digite a senha: ");
        scanf("%d", &senha);

        if(senha == 1234) {
            printf("ACESSO PERMITIDO\n");
        }
        else {
            printf("ACESSO NEGADO\n");
        }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char senhapadrao[9] = "password";
char senhausuario[9];

 printf("Entre com a senha:");
fgets(senhausuario,9,stdin);

 if (strcmp(senhapadrao,senhausuario)==0){
printf("Acesso permitido");
}
else{
printf("Acesso negado");
}

return 0;
}
*/
