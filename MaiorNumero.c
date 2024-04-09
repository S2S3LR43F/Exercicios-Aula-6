#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float num1, num2;
     // acentuação
    setlocale(LC_ALL, "Portuguese");

 printf("Insira o primeiro número: ");
    scanf("%f", &num1);
    printf("Insira o segundo número: ");
    scanf("%f", &num2);

    fflush(stdin);

if(num1 == 0 && num2 == 0){
    printf("zero é igual a zero!\n");
    system("pause");
    exit(1);
}
    if (num1 == num2){
    printf("Os dois números são iguais\n");
    system("pause");
    exit(2);
}
  if() printf("Operação Inválida.\n");
    system("pause");
    exit(3);
    }
     if (num1 > num2) {
        printf("%.2f é maior que %.2f\n",num1,num2);
   } else{
        printf("%.2f é menor que %.2f\n",num1,num2);
    system("pause");
    return(0);
}
