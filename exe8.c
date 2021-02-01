/*8 Escrever um programa que, dada uma variável x, temos y de acordo com a seguinte regra:
1. se x é par: y = x / 2
2. se x é impar: y = 3 * x + 1
3. imprime y 
O programa deve então jogar o valor de y em x e continuar até que y tenha o valor final de 1. Por exemplo, para x = 13, a saída será: 40 ? 20 ? 10 ? 5 ? 16 ? 8 ? 4 ? 2 ? 1.*/
#include "stdio.h"

int main() {
    int x = 0;
    int y = 0;
    printf("Informe um numero: \n");
    scanf("%d", &x);
    while (y!=1)
    {
        if (x%2==0)
        {
            y = x/2;
            printf("%d, ", y);
            x = y;
        }
        else
        {
            y = 3*x+1;
            printf("%d, ", y);
            x = y;
        }
    }
    return 0;
}