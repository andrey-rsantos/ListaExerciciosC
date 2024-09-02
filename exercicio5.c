/*
5. Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
*/

#include <stdio.h>

int main(){

    float salario, aumento;
    int cargo;


    printf("Informe o código do cargo: ");
    scanf("%d", &cargo);

    switch(cargo){

    case 1:
    printf("Você selecionou 'Escriturário'\n");
    printf("Agora informe o salário dessa pessoa: ");
    scanf("%f", &salario);
    aumento = (salario * 50) /100;
    printf("Você terá um aumento de R$%.2f e agora irá receber R$%.2f", aumento, salario + aumento);
    break;

    case 2:
    printf("Você selecionou 'Secretário'\n");
    printf("Agora informe o salário dessa pessoa: ");
    scanf("%f", &salario);
    aumento = (salario * 35) /100;
    printf("Você terá um aumento de R$%.2f e agora irá receber R$%.2f", aumento, salario + aumento);
    break;

    case 3:
    printf("Você selecionou 'Caixa'\n");
    printf("Agora informe o salário dessa pessoa: ");
    scanf("%f", &salario);
    aumento = (salario * 20) /100;
    printf("Você terá um aumento de R$%.2f e agora irá receber R$%.2f", aumento, salario + aumento);
    break;


    case 4:
    printf("Você selecionou 'Gerente'\n");
    printf("Agora informe o salário dessa pessoa: ");
    scanf("%f", &salario);
    aumento = (salario * 10) /100;
    printf("Você terá um aumento de R$%.2f e agora irá receber R$%.2f", aumento, salario + aumento);
    break;


    case 5:
    printf("Você selecionou 'Diretor'\n");
    printf("Agora informe o salário dessa pessoa: ");
    scanf("%f", &salario);
    aumento = (salario * 10) /100;
    printf("Você terá um aumento de R$%.2f e agora irá receber R$%.2f", aumento, salario + aumento);
    break;


    default:
        printf("Você não selecionou nenhum código válido. Informe um número de 1 a 5.");
    }

}
