//3. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

#include <stdio.h>

int main(){

    int num;

    printf("Informe um númro inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número %d é PAR!!", num);
    } else{
        printf("O número %d é ÍMPAR!!", num);
    }

    return 0;

}
