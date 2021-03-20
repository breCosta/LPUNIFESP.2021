#include <stdio.h>
#include <string.h>

//funcao que conta qntd de cara e coroa e seus lancamentos
void caraCoroa(char moeda[]){
   int i; //contador
   int cara=0, coroa=0, lancamentos;
   
   //for que passa por todos os elementos da string
   for(i=0; i<(int)strlen(moeda); i++){    
     if(moeda[i]=='K'){
       cara++;
     }
     if(moeda[i]=='C'){
       coroa++;
     }
   }
  printf("Numero de lancamentos: %d\n", cara+coroa);
  printf("Quantidade de cara: %d\n", cara);
  printf("Quantidade de coroa: %d\n", coroa);
}


int main(void) {

   char sequenciaMoeda[100];
   //receber a sequencia de lancamentos
   gets(sequenciaMoeda);
   //utilizar a funcao para calcular os resultados
   caraCoroa(sequenciaMoeda);

   return 0;
}