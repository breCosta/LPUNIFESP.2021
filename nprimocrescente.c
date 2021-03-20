#include <stdio.h>
//Escreva um programa que dado um numero inteiro N, mostre em ordem crescente todos os numeros primos existente.

int main(void) {
  int n, i, divisores, j;//n primo tem dois divisores
  scanf("%d", &n);
  divisores=0;//começa com 0
   
  if (n<=1) {
      printf ("Nao tem primos!");
  }
   
  for(i=1; i<=n; i++){ //verificar todos os i ate o numero n (numero digitado)
    divisores=0; //zerar novamente a variavel
    for (j=1; j<=i; j++) { //testa se i é primo
      if (i%j==0) {
      divisores++;
      }
    }
    if (divisores == 2) {
      printf("%d\n", i);
    }
  }
   
  return 0;
}