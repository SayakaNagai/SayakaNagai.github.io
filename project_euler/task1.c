#include <stdio.h>

int main()
{
  int ans = 0;
  int i = 0;
  for ( i = 1; i < 1000; i++ ) {
    if( i % 3 == 0 ) ans += i;
    if( i % 5 == 0 ) ans += i;
    if( i % 15 == 0 ) ans -= i;
  }
  printf( "%d\n", ans );
 
  return 0;
}
