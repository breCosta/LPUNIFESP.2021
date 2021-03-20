#include <stdio.h>
//Escreva um programa que calcule a media aritmetica de N valores.

int main(void){
    double N, i, num, soma; //N representa o total de valores para a soma e media
    double media;
    scanf("%lf", &N);
    soma = 0; //iniciar com 0 p nao dar erro
    i = 0;
    while (i<N){ 
      scanf("%lf", &num); //enquanto o i nao chegar no valor de N(numero de valores) o usuario digita novos numeros
      i++;
      soma=soma+num; //aqui faz a soma de todos os numeros
    }
    media=soma/N; //media aritmetica
    printf("A media aritmetica dos %.0lf valores e: %.1lf", N, media);
    return 0;
}
