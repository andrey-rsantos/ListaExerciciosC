/*
8. Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo e, se forem, 
verifique se é um triângulo equilátero, isósceles ou escaleno.  Se eles não formarem um triângulo, escreva uma mensagem. 

Considere que:
o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
chama-se equilátero o triângulo que tem três lados iguais;
denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

#include <stdio.h>
int main() {

    float x, y, z;

    printf("Informe o valor de X: ");
    scanf("%f", &x);
    printf("Informe o valor de Y: ");
    scanf("%f", &y);
    printf("Informe o valor de Z: ");
    scanf("%f", &z);

    if((x < y + z) && (y < x + z) && (z < x + y)){
    
        if(x == y && y == z){
            printf("Triângulo Equilátero: todos os lados são iguais.\n");
        } else if(x == y || x == z || y == z){
            printf("Triângulo Isósceles: dois lados são iguais.\n");
        } else{
            printf("Triãngulo Escaleno: todos os lados são diferentes.\n");
        }
    } else{
        printf("Os valores informados não formam um triângulo.");
    }

return 0;

}