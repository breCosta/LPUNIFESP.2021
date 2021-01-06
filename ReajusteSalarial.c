#include <stdio.h>

int main() {
  float s, total;
  int r; //onde s é salario e r reajuste
  scanf("%f %d", &s, &r);
  total=s+(s*r/100);
  printf("O reajuste salarial de %d%% é: R$%.2f\n", r, total); //utilizando o %% para imprimir o simbolo de % como caractere
}