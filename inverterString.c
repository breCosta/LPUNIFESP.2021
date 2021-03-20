#include <stdio.h>
#include <string.h>

//funcao para inverter a string digitada
 void inverterString(char string[]){
   int i, j;
   char aux;

   //variavel p receber o tamanho da string e -1   
	int tam=strlen(string)-1;

   //utilizar a aux para receber valores sem substituir um no outro
   for (i=0; i<tam; i++){
       aux=string[i];
       string[i]=string[tam];
       string[tam]=aux;
       tam--;
     } 
  
   printf("%s\n", string);
 } 


int main(void) {

   char string[100];
   //receber a string
   gets(string);
   //utilizar a funcao para a string
   inverterString(string);

   return 0;
}