

#include <stdio.h>
#include <math.h>

int main(void) {
  int n, l, c, i; //linha coluna
  int numeros0, numeros1, verdadeiro;
  scanf("%d", &n); //tamanho da matriz
  int matriz[1000][1000], vetor[1000];

  for(l=0;l<n;l++) //ler a matriz
   for (c=0; c<n; c++){
     scanf("%d", &matriz[l][c]);
   }
  
  //zerar todos as variaveis que precisamos
  numeros1=0;
  numeros0=0;
  verdadeiro=1;
  for(i=0; i<n; i++){
  vetor[i]=0;
  }
  
  //checando quantos numeros 0 e quantos numeros 1 possui na matriz em cada linha
  for(l=0; l<n && verdadeiro!=0 ;l++) {
    numeros0=0;
    numeros1=0;
    for (c=0; c<n && verdadeiro!=0 ; c++){
      if(matriz[l][c]==0){
        numeros0++;
      }
      if(matriz[l][c]==1){
        numeros1++;
        vetor[c]=1; //esse vetor é utilizado para saber qnts 1 tem na coluna
      }
    } 
	 //checando se há apenas a quantidade n-1 de 0 e 1 de 1.
    if(numeros0==n-1 && numeros1==1){
    verdadeiro=1;
    } else verdadeiro=0;
  }
  for(i=0; i<n ;i++){ 
      if(vetor[i]==0){
        verdadeiro=0;
      }  
  }    
  if(verdadeiro==1){
    printf("verdadeiro");
  } else printf("falso");

  return 0;
}