#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    char num1;
     // acentuação
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um número de 0 a 10: ");
    scanf("%f", &num1);

    switch(num1){
    if(10 > num1 >= 0){}
    case '0':
    num1 = ("zero\n");
    break;

    case '1':
    num1 = ("Um\n");
    break;

    case '2':
    num1 = ("Dois\n");
    break;

    case '3':
    num1 = ("Três\n");
    break;

    case '4':
    num1 = ("Quatro\n");
    break;

    case '5':
    num1 = ("Cinco\n");
    break;

    case '6':
    num1 = ("Seis\n");
    break;

    case '7':
    num1 = ("Sete\n");
    break;

    case '8':
    num1 = ("Oito\n");
    break;

    case '9':
    num1 = ("Nove\n");
    break;

    case '10':
    num1 = ("Dez\n");
    break;

}    else{
    default: ("Valor Inválido");
    system("pause");
    exit(1);
    }
    printf("%2.f", num1);
}
    system("pause");
    return(0);
}

