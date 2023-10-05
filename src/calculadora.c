#include <stdio.h>
#include "calculadora.h"

int main()
{

    

    float num1, num2, resultado = 0;
    char op;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite outro numero: ");
    scanf("%f", &num2);


    if (validar_operador(op))
    {
        switch (op)
        {
        case '+':
            resultado = soma(num1, num2);
            break;
        case '-':
            resultado = subtrai(num1, num2);
            break;
        case '*':
            resultado = multiplica(num1, num2);
            break;
        case '/':
            resultado = divide(num1, num2);
            break;
        default:
            printf("Operador invalido!\n");
        }
    }

    printf("O resultado e: %.2f\n", resultado);

    while (continuar());

    return 0;
}
