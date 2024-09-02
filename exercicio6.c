/*
6. Faça um programa que receba o salário inicial de um funcionário,
calcule e mostre o novo salário, acrescido de bonificação e de auxílio escola.
*/

#include <stdio.h>
int main() {


    float salario_ini, novo_sal, bonificacao, aux_escola;


    printf("Informe o salário inicial de um funcionário: ");
    scanf("%f", &salario_ini);

    if(salario_ini < 500){
        bonificacao = (salario_ini * 5) / 100;
        aux_escola = 150;
        novo_sal = salario_ini + bonificacao + aux_escola;
        printf("Seu novo salário é: R$ %.2ff", novo_sal);
    } else if(salario_ini >= 500 && salario_ini <= 1200){
        bonificacao = (salario_ini * 12) / 100;
        aux_escola = 100;
        novo_sal = salario_ini + bonificacao + aux_escola;
        printf("Seu novo salário é: R$ %.2f", novo_sal);
    } else {
        aux_escola = 100;
        novo_sal = salario_ini + aux_escola;
        printf("Seu novo salário é: R$ %.2f", novo_sal); 
    }

    return 0;

}