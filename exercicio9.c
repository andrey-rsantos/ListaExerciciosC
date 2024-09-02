/*
9. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre o IMC (Índice de Massa Corporal) dessa pessoa.

imc é: peso / altura²
 */

#include <stdio.h>
#include <locale.h>
int main(){
    
    setlocale(LC_ALL, "Portuguese");

    float altura, peso, imc;

    printf("Informe a sua altura em metros (exemplo: 1,73): ");
    scanf("%f", &altura);

    while(altura < 0.50){
        printf("Você digitou um número inválido. Digite sua altura em metros: ");
        scanf("%f", &altura);
    }

    printf("Informe o seu peso em kgs (exemplo: 70,00): ");
    scanf("%f", &peso);
    

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("Seu IMC é %.1f e você está abaixo do peso normal.", imc);
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("Seu IMC é %.1f e você está classificado(a) como Peso normal", imc);
    } else if(imc >= 25 && imc <= 29.9){
        printf("Seu IMC é %.1f e você está classificado(a) como Excesso de peso", imc);
    } else if(imc >= 30 && imc <= 34.9){
        printf("Seu IMC é %.1f e você está classificado(a) como Obesidade classe I", imc);
    } else if(imc >= 35 && imc <= 39.9){
        printf("Seu IMC é %.1f e você está classificado(a) como Obesidade classe II", imc);
    } else{
        printf("Seu IMC é %.1f e você está classificado(a) como Obesidade classe III", imc);
    }

}

