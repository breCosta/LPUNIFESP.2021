#include <stdio.h>
//Escreva um programa que calcule o fatorial de um numero N.

int main(void) {
  int N, i, fatorial, resultado;
  int x; //receber o valor de N para sair no printf
  scanf("%d", &N);
  x=N;
  fatorial=1;
  resultado=1;
  while (N>1){
    fatorial*=N;
    resultado=i; //para sair no printf antes do N--.
    N--;
    i=fatorial*N; //multiplica o resultado anterior pelo novo N.
  }
  
  if (N<0){ //caso seja negativo
    printf("Nao existe fatorial de %d", x);
  }
   
  if (N>0) {
    printf("O fatorial de %d e: %d", x, resultado); //imprime o fatorial do numero
  }
  
  if (N==0){
    printf("O fatorial de %d e: 1", x);
  }

  return 0;
}