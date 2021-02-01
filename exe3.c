//Ler um número inteiro informado pelo usuário e informar se o mesmo é par ou ímpar.
#include "stdio.h"
int main() {
    int x; 
    scanf("%d", &x);
    if (x%2==0) {
        printf("%d eh par! \n", x);
    }
    else {
        printf("%d eh13 impar!", x);
    }
    return 0;
}