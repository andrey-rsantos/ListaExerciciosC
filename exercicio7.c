#include <stdio.h>
#include <math.h>  // Necessário para a função sqrt()

int main(void) {
    float a, b, c, delta, x1, x2;

    // Solicita os valores de a, b e c
    printf("Qual o valor de A? ");
    scanf("%f", &a);
    printf("Qual o valor de B? ");
    scanf("%f", &b);
    printf("Qual o valor de C? ");
    scanf("%f", &c);

    // Verifica se é uma equação do segundo grau
    if (a == 0) {
        printf("O valor de 'A' deve ser diferente de 0 para que seja uma equação do segundo grau.\n");
        return 1;  // Termina o programa se a == 0
    }

    // Calcula o valor de delta
    delta = (b * b) - 4 * a * c;

    // Verifica as condições de existência das raízes
    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Existe uma raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
