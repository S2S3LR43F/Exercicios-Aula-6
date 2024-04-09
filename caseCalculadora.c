#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // acentuação
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    float numero1, numero2, resposta;
    char operacao; // + - * /
    printf("Insira o primeiro número: ");
    scanf("%f", &numero1);
    printf("Insira o segundo número: ");
    scanf("%f", &numero2);
    fflush(stdin);
    printf("Informe qual operação deseja efetuar (+ - * /):");
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
            printf("Divisão por zero!!\n");
            system("pause");
            exit(1);
         }   else
    default : printf("Operação Inválida.\n");
    system("pause");
    exit(2);
    }

    printf("resultado: %.2f %c %.2f = %.2f\n",
           numero1, operacao, numero2, resposta);
    system("pause");
    return 0;
}
