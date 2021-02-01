//Imprimir na tela a soma de todos os números pares de 50 a 100 (incluindo-os). O resultado deve ser 1950.
#include "stdio.h"
int main() {
    int i;
    int soma = 0; 
    for (i = 50; i <= 100; i++)
    {
        if (i%2==0)
        {
            soma+=i;
        }
    }
    printf("%d", soma);
    return 0;
}