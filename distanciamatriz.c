#include <stdio.h>


int main(void) {
  int n, k; //valores de entrada
  int l, c, i; //contadores
  int distancia;

  scanf("%d", &n); //tamanho da matriz
  int matriz[1000][1000];

  //le a matriz
  for(l=0;l<n;l++)
   for(c=0;c<n;c++){
    scanf("%d", &matriz[l][c]);
   }
    
  scanf("%d", &k); //quantos pontos no trajeto
  int vetor[1000];
  
  //le o vetor = pontos no trajeto
  for(i=0;i<k;i++){
    scanf("%d", &vetor[i]);
  }

  distancia=0;
  for (i=0;i<k-1;i++){
    distancia+=matriz[vetor[i]][vetor[i+1]]; //faz a soma dos valores que estao na matriz de acordo c as posições dadas no vetor
  }
  
  printf("%d\n", distancia);
  
  return 0;
}