//Criar uma função cujo tipo de retorno seja VOID, e que receba um ponteiro e uma string. A função deve armazenar no ponteiro a posição da primeira letra maiúscula do vetor, para posteriormente(fora da função) um código imprimir na tela o valor em questão.
#include "stdio.h"
#include "string.h"
void letraMaiuscula (int *p1, char string[]) {
    int temp;
    for (temp=0; temp<strlen(string); temp++) {
        if (65 <= string[temp] && string[temp] <= 90) {
            *p1 = temp;
            return;
        }
    }
    
}
int main () {
    char x[5] = {'t','e','S','t','e'};
    int posicao;
    letraMaiuscula(&posicao, x);
    printf("Primeira letra maiuscula: %c", x[posicao]);
    printf("\nposicao=%d", posicao);
    return 0;
}