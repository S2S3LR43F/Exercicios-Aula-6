#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float num1, num2, num3, num4, resultado;
     // acentua��o
    setlocale(LC_ALL, "Portuguese");

    printf("Insira o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Insira o segundo n�mero: ");
    scanf("%f", &num2);

    fflush(stdin);
    printf("Insira o terceiro n�mero: ");
    scanf("%f", &num3);

    printf("Insira o quarto n�mero: ");
    scanf("%f", &num4);

    resultado = num1 + num2 + num3 + num4;

    if (resultado < 100)
        printf("A soma � menor que 100\n");

    else if(resultado > 100)
        printf("%.2f\n",resultado);
    system("pause");
    return(0);
}
