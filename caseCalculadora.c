#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // acentua��o
    setlocale(LC_ALL, "Portuguese");
    // vari�veis
    float numero1, numero2, resposta;
    char operacao; // + - * /
    printf("Insira o primeiro n�mero: ");
    scanf("%f", &numero1);
    printf("Insira o segundo n�mero: ");
    scanf("%f", &numero2);
    fflush(stdin);
    printf("Informe qual opera��o deseja efetuar (+ - * /):");
    scanf("%c", &operacao);
    //operacao = getchar();
    switch(operacao) {
    case '+':
        resposta = (numero1 + numero2);
    break;

    case '-':
        resposta = (numero1 - numero2);
    break;

    case '*':
        resposta = (numero1 * numero2);
    break;

    case '/': if (operacao == '/')
        resposta = (numero1 / numero2);

    if(numero2 == 0){
            printf("Divis�o por zero!!\n");
            system("pause");
            exit(1);
         }   else
    default : printf("Opera��o Inv�lida.\n");
    system("pause");
    exit(2);
    }

    printf("resultado: %.2f %c %.2f = %.2f\n",
           numero1, operacao, numero2, resposta);
    system("pause");
    return 0;
}
