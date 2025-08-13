#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int variaveis()
{
    unsigned char idade = 45;
    float saldo = 456.789;
    bool positivo = true;

    printf("\nIdade: %d\nSaldo: %.2f\nPositivo: %s", idade, saldo, positivo ? "True" : "False");
}
