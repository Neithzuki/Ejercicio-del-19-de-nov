/*Cristian Ariel Lopez Santiago 
ejercicio de aparatos electronicos*/

#include <stdio.h>

int max(int arr[]), int i);

void main ()
{
  int comp[100], cant[10], m; 
  /// inicializar
  for (int i = 0; i < 100; i++)
  {
    comp[i] = 0;
  }

for(int j = 0; j < 10; j++)
{
  printf("Dame el numero de componentes del aparato %d: ", j+1);
  scanf("&d", &cant[j]);
}

//longitud del arreglo

 max = sizeof(comp) / sizesof(comp[0]);
 printf("max: %d\n, max);
   }
  m = max(cant, 10);
  int max[10][m];
 for(int i = 0; i<10; i++)
   { for(int j = 0; j<m; j++)
     {
     aparat[i][j] = 0;
     }
   }

   for(int i = 0; i<10; i++)
   { for(int j = 0; j<cant[i]; j++)
     {
       printf("Dame el componente No.%d del aparato %d: ", j+1, i+1);
     }
   }
  printf("Max: %d\n, max);
    
int max(int arr[]), int n)
{
  int m = 0, n;


  for(int i = 0; i < l; i++)
    {
      if(arr[i}> m)
      {
        m = arr[i];
      }
    }
  return m;
  
        
}
