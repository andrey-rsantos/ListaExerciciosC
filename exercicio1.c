//1. Faça um programa que receba dois números e mostre o menor.


#include <stdio.h>
int main(){

    float num1, num2;

    printf("Informe um número: ");
    scanf("%f", &num1);
    printf("Informe outro número: ");
    scanf("%f", &num2);

    if(num1 == num2){
        printf("Os dois números são iguais.");
    } else if(num1 < num2){
            printf("O número %.2f é menor!", num1);
        } else{
            printf("O número %.2f é menor!", num2);
        }
    


   

    return 0;

}
