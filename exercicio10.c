/*
10. Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. 
Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. 
Mostre o saldo médio e o valor do crédito.
*/

#include <stdio.h>
int main(){


    float saldo_med, credito;

    printf("Informe o saldo médio do cliente no último ano: ");
    scanf("%f", &saldo_med);

    if(saldo_med < 200){
        credito = (saldo_med * 10) /100;    
    } else if(saldo_med >= 200 && saldo_med < 300){
        credito = (saldo_med * 20) /100;
    } else if(saldo_med >= 300 && saldo_med <= 400){
        credito = (saldo_med * 25) /100;
    } else{
        credito = (saldo_med * 30) /100;
    }

     printf("Seu saldo médio foi R$ %.2f e seu crédito será: %.2f", saldo_med, credito);

}