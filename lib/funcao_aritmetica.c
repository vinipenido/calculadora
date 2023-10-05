#include <stdio.h>

// Função para realizar a adição
float soma(float num1, float num2)
{
    return num1 + num2;
}

// Função para realizar a subtração
float subtrai(float num1, float num2)
{
    return num1 - num2;
}

// Função para realizar a multiplicação
float multiplica(float num1, float num2)
{
    return num1 * num2;
}

// Função para realizar a divisão
float divide(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("Nao e possivel dividir por zero!\n");
        return 0;
    }
    else
    {
        return num1 / num2;
    }
}
