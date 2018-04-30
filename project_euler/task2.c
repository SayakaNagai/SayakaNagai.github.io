#include <stdio.h>

int fibo( int n ){
  if( n == 1 ){ return 1; }
  else if( n == 2 ){ return 2; }
  else{ return fibo(n-1)+fibo(n-2); }
  
}

int main(){
  
  int counter = 1;
  int f = 0;
  int ans = 0;
  while( f < 4000000 ){
    f = fibo(counter);
    if( f % 2 == 0 ){ ans += f; }
    counter++;
  }
  printf("%d\n", ans);
  return 0;

}
