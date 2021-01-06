//ordenar numeros

#include <stdio.h>

int main(void) {
  int A, B, C, aux; //recebe tres numeros
  scanf("%d %d %d", &A, &B, &C);
  //A maior valor, B medio, C menor valor
  if (B>A && A>C){ //coloca o maior valor em A ignora o menor valor, como A é o segundo coloca o valor de A em B
    aux=A;
    A=B;
    B=aux;
  } 
  if (B>=A && C>=B){
    aux=C;
    C=A;
    A=aux;
  } 
  if (C>=A && A>=B){
    aux=C;
    C=B;
    B=A;
    A=aux;
  }
  if (C>=A && C<=B){
    aux=B;
    B=C;
    C=A;
    A=aux;
  }
  if (A>C && C>=B){
    aux=B;
    B=C;
    C=aux;
  }
  
  printf("%d %d %d", C, B, A);
 
  return 0;
}