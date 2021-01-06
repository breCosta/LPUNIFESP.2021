
#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

if (c<a+b && c>a-b && b<a+c && b>a-c && a<b+c && a>b-c) {
   if (a!=c && b!=a && c!=b){//todos os lados diferentes
    printf ("O triangulo é escaleno\n");
  }
   if ((a==b && a!=c) || (a==c && c!=b) || (b==c && c!=a)){ //dois iguais um diferente
    printf("O triangulo é isoceles\n");
  } 
   if (a==b && b==c) { //todos iguais
    printf("O triangulo e equilatero\n");
   }   
} else {
   printf("Nao e possível formar um triangulo\n");
  }
  return 0;
  }