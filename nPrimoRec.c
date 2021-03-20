#include <stdio.h>

/* 
- 'div' conta qnts divisores possui o numero,
caso maior que 1, já n é primo.
- 'a' conta qnts numeros nao restam 0 na divisao, logo se o total for = n-2, o n é primo 
*/

double primo(int n, int j, int div, int a){

   if (div > 1 || n==1)
     return 0;

   if (a == n-2)
      return 1;

   if (n%j==0)
      return primo(n, j-1, div+1, a);

        else
          return primo(n, j-1, div, a+1);
  

}

int main (){
   
   int n;
   double u;
   scanf("%d", &n);

    u = primo(n, n-1, 0, 0);
  
   if(u==0) 
     printf("O numero %d nao e primo!\n", n);
    else
     printf("O numero %d e primo!\n", n);
   
  return 0;
}