#include <stdio.h>

int main(){
  
  long int n = 600851475143;
  int i;
  int max = 0;
 
  for( i = 2 ; n > 1 ; i++ )
    {
      while( ( n % i ) == 0 )
	{
	  //printf( "%d ", i );
	  n /= i;
	  max = i;
	}
    } 
  printf( "%d\n", max );
  
  return 0;

}
