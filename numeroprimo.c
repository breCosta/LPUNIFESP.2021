#include <stdio.h>
//Escreva um programa que dado um numero inteiro N, imprimir se e primo ou nao-primo.

int main(void) {
  int N, teste, i;
  scanf("%d", &N);
 
  if (N==0 || N==1 || N==-1) { //algumas exceções
    printf ("O numero %d nao e primo!",N);
    return 0;
  }
  
  for (i=2; i<N; i++){ //começa no 2 e termina antes do numero para cumprir a regra de divisao entre o 1 e o proprio numero
    teste=N%i; //teste recebe o resto da divisao entre n e i, se existir resto o resultado é 1.
   if (teste==0) {
    printf("O numero %d nao e primo!", N);
    return 0; //encerrar o programa p nao seguir p proximo printf
   }
  }
  
  if (teste!=0) {
    printf("O numero %d e primo!", N);
  }

  return 0;
}