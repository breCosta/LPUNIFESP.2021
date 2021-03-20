// a começa em 97 na tabela ascii


#include <stdio.h>
#include <string.h>

//funcao que vai ser responsavel por realizar a contagem de pontos e espaços e fazer a relacao entre eles e a tabela ascii
void funcao(char tamanho[]){
 
  int j, n;
  int espacos=0, pontos=0;

  for (j=0; j<(int)strlen(tamanho); j++){
    if(tamanho[j]==' '){
      espacos++;
    }
    if (tamanho[j]=='.'){
      pontos++;
    }
  }

  if(espacos>0){
  //aqui aplica-se a relação entre pontos e espaços
    n=(espacos*3)+(pontos/(espacos+1));
    printf("%c\n", n+96);
  } else {
      n=pontos+espacos;
      printf("%c\n", n+96);
    }
}

int main(void){
    
  int p, i; //contadores
  char letraDecifrada[100];
  //receber o numero de linhas p letras
  scanf("%d", &p);
  getchar();
  

  for (i=0; i<p; i++){
    //receber os pontos e espaços
    gets(letraDecifrada);
    //calcular o que foi digitado
    funcao(letraDecifrada);   
  }

    return 0;
}