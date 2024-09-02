//4. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante na tabela a seguir. 
//Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0.



#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media, nota_exame;


    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;


    if(media < 3){
        printf("Você foi reprovado!");
    } else if(media >= 3 && media < 7){
        nota_exame = (6 * 2) - media;
        printf("Você ficou para exame e precisa tirar %.2f no exame para ser aprovado.", nota_exame);
    } else{
        printf("Você foi aprovado!");
    }





    return 0;
}
