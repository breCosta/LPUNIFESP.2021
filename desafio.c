   /* 
   Brenda Costa 
   Lógica de Programação 2/2020
   Desafio Final - Jogo da Exclusão
   */

#include <stdio.h>

#define nMAX 10000

int jogo(int m, int posi[], int fim, int atual){

   int i, a, x;
    //caso base
    if (fim == 0){
      a = posi[0];
      return a;
    }
    
    //se der pra pular sem chegar ao fim do vetor
    if (atual - 1 + m <= fim){
       atual = atual - 1 + m;
       //faz um shift, copia todos os valores + 1 a partir da posicao atual, e assim remove a atual
       for (i=atual; i<fim; i++){
          posi[i] = posi[i+1];
       }

       fim = fim - 1;
      return jogo(m, posi, fim, atual);
    }
    
    //se o pulo for maior que o tam do vetor, voltar ao inicio
      else  {
        
         atual = atual - 1 + m - fim -1;

         //se ainda assim a atual for maior que o fim
         x = atual; 
			//ate a posicao atual ser menor que a posicao final
         while (x > fim){
            x = x - fim - 1;
         }
         atual = x; 

         for (i=atual; i<fim; i++){
           posi[i] = posi[i+1];
         }

         fim = fim - 1;
        return jogo(m, posi, fim, atual);
      }

}

int main() {

  int i, x;
  int n, m;
  int posi[nMAX];

  scanf("%d %d", &n, &m);

  for (i=0; i<n; i++){
    posi[i] = i+1;
  }

  x = jogo(m, posi, n-1, 0);

  printf("Vencedor: %d", x);

  return 0;
}