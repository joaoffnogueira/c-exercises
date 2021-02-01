//Solicitar ao usuário três números inteiros e imprimir na tela o menor deles, o maior deles, e a média deles.
#include "stdio.h"

int main() {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0; 
    int maior = 0;
    int menor = 0;
    float media = 0;
    printf("Informe o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Informe o segundo numero: \n");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: \n");
    scanf("%d", &n3);
    if (n1>n2 && n1>n3)
    {
        maior = n1;
        if (n2<n3)
        {
            menor = n2;
        }
        else 
        {
            menor = n3;
        }
        
    }
    else if (n2>n1 && n2>n3)
    {
        maior = n2;
        if (n1<n3)
        {
            menor = n1;
        }
        else 
        {
            menor = n3;
        }
    }
    else
    {
        maior = n3;
        if (n1<n2)
        {
            menor = n1;
        }
        else 
        {
            menor = n2;
        }
    }
    media = (n1+n2+n3)/3.0;
    printf("Menor numero: %d, \nMaior numero: %d, \nMedia: %f", menor, maior, media);
    return 0;
}