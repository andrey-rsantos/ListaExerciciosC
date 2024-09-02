//2. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
//digitará três números diferentes.


#include <stdio.h>

int main(){

    float num1, num2, num3;

    printf("Informe um número: ");
    scanf("%f", &num1);

    printf("Informe outro número: ");
    scanf("%f", &num2);
    while(num2 == num1){
        printf("Você digitou um número igual. Digite outro número: ");
        scanf("%f", &num2);
    }

    printf("Informe um último número: ");
    scanf("%f", &num3);
    while(num3 == num1 || num3 == num2){
        printf("Você digitou um número igual. Digite outro número: ");
        scanf("%f", &num3);
    }


    if(num1 < num2 && num1 < num3){
        if(num2 < num3){
            printf("Ordem crescente: %.2f, %.2f, %.2f", num1, num2, num3);
        } else{
           printf("Ordem crescente: %.2f, %.2f, %.2f", num1, num3, num2);
        }
    } else if(num2 < num1 && num2 < num3){
        if(num1 < num3){
            printf("Ordem crescente: %.2f, %.2f, %.2f", num2, num1, num3);
        } else{
            printf("Ordem crescente:%.2f,%.2f, %.2f", num2, num3, num1);
        }
    } else{
        if(num1 < num2){
            printf("Ordem crescente: %.2f, %.2f, %.2f", num3, num1, num2);
        } else{
            printf("Ordem crescente: %.2f, %.2f, %.2f", num3, num2, num1);
        }
    }

    


    return 0;

}
