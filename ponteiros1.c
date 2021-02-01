//Crie uma função, cujo tipo de retorno seja VOID, que receba dois ponteiros referentes a duas variáveis inteiras e troque seus valores. Exibir os valores das variáveis antes e depois da função ser invocada.
#include "stdio.h"
void troca (int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main () {
    int x = 5;
    int y = 10;
    printf("x=%d y=%d", x, y);
    troca(&x, &y);
    printf("\nx=%d y=%d", x, y);
    return 0;
}