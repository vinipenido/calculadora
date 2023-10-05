#include <stdio.h>

// Função para validar o operador

int validar_operador(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        return 1;
    }
    else
    {
        printf("Operador invalido.\n");
        return 0;
    }
}

unsigned short int continuar ()
{

    char resposta;
    do
    {
        printf("Continuar ? (S/N)\n");
        scanf(" %c", &resposta);
    }
    while (resposta!='S' && resposta != 's' && resposta != 'N' && resposta != 'n');
    return resposta == 'S' || resposta == 's';
}

