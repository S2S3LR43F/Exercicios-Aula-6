#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float valor, num1;
     // acentua��o
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um n�mero: ");
    scanf("%f", &num1);

    if(num1 > 20){
        printf("%.2f � maior que 20\n",num1);
    }
    else if(num1 == 20){
        printf("%.2f � igual a 20\n",num1);

    }
    else if(num1 < 20){
        printf("%.2f � menor que 20\n",num1);

    }else{
        printf("Valor inv�lido");
    }
    system("pause");
    return(0);
}
