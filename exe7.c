//Solicitar ao usuário dois valores numéricos inteiros e um caractere de operação (+*-/) e realizar a operação informada com os números inseridos, apresentando o resultado na tela.
#include "stdio.h"

int main() {
    int n1 = 0;
    int n2 = 0;
    char operacao; 
    float resultado = 0;
    printf("Informe o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Informe o segundo numero: \n");
    scanf("%d", &n2);
    printf("Informe a operacao: \n");
    scanf("%c", &operacao); // Duplicado: Limpa o buffer de leitura das operacoes anteriores
    scanf("%c", &operacao);
    if (operacao=='+')
    {
        resultado = n1+n2;
    }
    else if (operacao=='-')
    {
        resultado = n1-n2;
    }
    else if (operacao=='*')
    {
        resultado = n1*n2;
    }
    else if (operacao=='/')
    {
        resultado = n1/n2;
    }
    printf("O resultado e: %f", resultado);
    return 0;
}