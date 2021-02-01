//Solicitar ao usuário uma quantidade de segundos (unidade de tempo) e imprimir na tela a quantidade de horas, minutos e segundos que o valor inserido representa.
#include "stdio.h"
int main() {
    int segundos = 0;
    int minutos = 0;
    int horas = 0; 
    printf("Informe uma quantidade de segundos: \n");
    scanf("%d", &segundos);
    while (segundos >= 3600)
    {
        segundos-= 3600;
        horas++;
    }
    while (segundos >= 60)
    {
        segundos-= 60;
        minutos++;
    }
    printf("%d horas, %d minutos, %d segundos", horas, minutos, segundos);
    return 0;
}