#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float valor, num1;
     // acentuação
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um número: ");
    scanf("%f", &num1);

    if(num1 > 20){
        printf("%.2f é maior que 20\n",num1);
    }
    else if(num1 == 20){
        printf("%.2f é igual a 20\n",num1);

    }
    else if(num1 < 20){
        printf("%.2f é menor que 20\n",num1);

    }else{
        printf("Valor inválido");
    }
    system("pause");
    return(0);
}
