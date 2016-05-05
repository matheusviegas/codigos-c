#include <stdio.h>
 
int main()
{
   int array[100], n, c, d, posicao, swap;
 
   printf("Numero de Elementos: ");
   scanf("%d", &n);
 
   printf("Insira %d numeros inteiros\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      posicao = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[posicao] > array[d] )
            posicao = d;
      }
      if ( posicao != c )
      {
         swap = array[c];
         array[c] = array[posicao];
         array[posicao] = swap;
      }
   }
 
   printf("Lista ordenada em ordem crescente:\n");
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);
 
   return 0;
}
