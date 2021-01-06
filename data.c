//Problema 4: Escreva um programa que, dado duas datas, determine qual delas ocorreu cronologicamente antes em relação a outra. Cada data é composta de 3 números inteiros, um representando o ano, outro o mês e outro o dia.
//Entrada 1: 06 09 1987 09 05 1983
//Entrada 2: 30 10 1979 09 05 1983

#include <stdio.h>

int main(void) {
  int dia1, mes1, ano1, dia2, mes2, ano2;
  scanf("%d/%d/%d %d/%d/%d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);
  if ((ano2>ano1) || (ano2==ano1 && mes1<mes2) || (ano2==ano1 && mes1==mes2 && dia1<dia2) ){
    printf("A primeira data ocorreu antes da segunda.\n");
  }
  if ((ano1>ano2) || (ano1==ano2 && mes2<mes1) || (ano1==ano2 && mes2==mes1 && dia2<dia1)){
    printf("A segunda data ocorreu antes da primeira.\n");
  }
  return 0;
  }

/* ano2 for maior
    ano igual mes1 menor
     ano igual mes igual dia1 menor
     */

/* ano1 for maior
    ano igual mes2 menor
     ano igual mes igual dia2 menor
   */