#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float num1, num2;
     // acentua��o
    setlocale(LC_ALL, "Portuguese");

 printf("Insira o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Insira o segundo n�mero: ");
    scanf("%f", &num2);

    fflush(stdin);

if(num1 == 0 && num2 == 0){
    printf("zero � igual a zero!\n");
    system("pause");
    exit(1);
}
    if (num1 == num2){
    printf("Os dois n�meros s�o iguais\n");
    system("pause");
    exit(2);
}
  if() printf("Opera��o Inv�lida.\n");
    system("pause");
    exit(3);
    }
     if (num1 > num2) {
        printf("%.2f � maior que %.2f\n",num1,num2);
   } else{
        printf("%.2f � menor que %.2f\n",num1,num2);
    system("pause");
    return(0);
}
