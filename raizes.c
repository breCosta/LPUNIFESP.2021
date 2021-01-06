//calcular raizes de uma equaçao do segundo grau
 
#include <stdio.h>
#include <math.h>
 
int main(void) {
  double a, b, c, delta; //valores para a equaçao b²-4ac
  double raiz1, raiz2, raiz; //valores para a equaçao de bhaskara
  scanf("%lf %lf %lf", &a, &b, &c);
  
  delta=(pow(b,2)-4*a*c);
 
  if (delta>0 && a!=0) {
   raiz1=(-b+sqrt(delta))/2*a;
   raiz2=(-b-sqrt(delta))/2*a;
   printf("Raiz 1: %.2lf\nRaiz 2: %.2lf\n", raiz1, raiz2);
  }
  if (delta==0 && a!=0) {
    raiz=-b/2*a;
    printf("Raiz: %.2lf\n", raiz);
  }
  if (delta<0) {
   printf("Não existem raízes reais\n");
  }
  if (a==0){
    raiz=-c/b;
    printf("Raiz: %.2lf\n", raiz);
  }
  return 0;
}