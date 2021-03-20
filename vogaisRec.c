#include <stdio.h>
#include <string.h>

#define MAX 1001

//contar vogais
int vogais(char texto[], int j, char vogal){
  //caso base
  if (texto[j] == '\0')
   return 0;
	
   else if (texto[j] == vogal)
      return 1 + vogais(texto, j+1, vogal);
		
      else
        return vogais(texto, j+1, vogal);
		  
}      

int main() {

  char texto[MAX];
  int a, e, i, o, u;

  scanf("%[^\n]", texto);
  
  a=vogais(texto, 0, 'a');
  e=vogais(texto, 0, 'e');
  i=vogais(texto, 0, 'i');
  o=vogais(texto, 0, 'o');
  u=vogais(texto, 0, 'u');
   
  printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d", a, e, i, o, u);

  return 0;
}
