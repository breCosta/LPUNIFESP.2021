//Calular média de aluno

#include <stdio.h>

int main(void) {
  double a, b, c, d, e, media; //variaveis que representam as 5 notas do aluno e a media
  scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
  media=(a+b+c+d+e)/5;
  printf("p1= %.1lf p2= %.1lf p3= %.1lf p4= %.1lf p5= %.1lf media= %.2lf\n", a, b, c, d, e, media);
  return 0;
}