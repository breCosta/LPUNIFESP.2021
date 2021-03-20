

#include <stdio.h>

int main(void) {
  int n;
  int l,c; //linha coluna
  int soma;
  scanf("%d", &n);
  int matriz[1000][1000];

  for(l=0;l<n;l++) //ler a matriz
   for (c=0; c<n; c++){
     scanf("%d", &matriz[l][c]);
     }
   
  soma=0; 
  //fazer a soma da diagonal principal e todos os n superiores
  for(l=0;l<n;l++)
    for (c=l; c<n; c++){
      soma+=matriz[l][c];
     }
  
  printf("%d", soma);
  
  return 0;
}