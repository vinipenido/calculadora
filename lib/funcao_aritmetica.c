#include <stdio.h>

// Fun��o para realizar a adi��o
float soma(float num1, float num2)
{
    return num1 + num2;
}

// Fun��o para realizar a subtra��o
float subtrai(float num1, float num2)
{
    return num1 - num2;
}

// Fun��o para realizar a multiplica��o
float multiplica(float num1, float num2)
{
    return num1 * num2;
}

// Fun��o para realizar a divis�o
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
