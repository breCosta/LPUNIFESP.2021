
/*Em 2004, um garoto chamado Mark Zuckerberg implementou um programa de computador para realizar uma funcionalidade muito interessante para o site de relacionamento dele, o FACEBOOK. Esse programa tinha como objetivo encontrar os Mutual Friends ou “Amigos em Comum”entre dois usuários. Uma vez que Mark tinha a lista de amigos de cada usuário do site, bastou comparar as listas entre si e o resultado foi a lista de amigos em comum. Se estivesse em 2004 e sr. Mark Zuckerberg pedisse para que você escrevesse esse programa, como você resolveria esse problema? Considere que sua função receberá como entrada 2 listas inteiras preenchidas (l1 e l2) de tamanho 10 e a saı́da será uma outra lista (l3) com os valores em comum entre as duas listas.*/

#include <stdio.h>


int main(void) {
  int l1[10], l2[10], l3[10], soma, i, j, x;
  soma=0;
  i=0;
  soma=0; 
  // receber primeira lista
  do { 
    scanf("%d", &l1[i]);
    i++;
  } while (i<=9);

  i=0;
  //receber segunda lista
  do {
    scanf("%d", &l2[i]);
    i++;
  } while (i<=9);
 
  //comparar cada numero
  for (j=0; j<=9; j++){ //utilizar os valores de l1 para comparar com l2
   for (i=0; i<=9; i++){ //checar todos os valore de l2
     if (l1[j]==l2[i]){
      l3[soma]=l2[i]; //l3 recebe os valores iguais
      soma++;
     }
   } 
  }
  if (soma==0){
    printf("Nao tem amigos em comum.");
  }
  for (i=0; i<soma; i++){
    printf("%d\t", l3[i]);
  }
  return 0;
}
