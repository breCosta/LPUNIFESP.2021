#include <stdio.h>
#include <string.h>

#define MAX 100

void fOcorrencia(char string1[], char string2[]){

   int i, ocorre=0, j, nConta=0;
   int tam1=strlen(string1), tam2=strlen(string2);

   for (i=0; i<(tam1-tam2+1); i++){
      nConta=0;
      for (j=0; j<tam2; j++){

        if (string1[i+j] != string2[j]){
          nConta++;
          break;
        }
     }

      if (nConta==0){
          ocorre++;
      }

   }

     printf("Numero de ocorrencia: %d\n", ocorre);

}


int main() {
  
  char string1[MAX], string2[MAX];

  gets(string1);
  gets(string2);

  fOcorrencia(string1, string2);

  return 0;
}