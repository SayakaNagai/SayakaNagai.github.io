//フィボナッチ数列の項は前の2つの項の和である. 最初の2項を 1, 2 とすれば, 最初の10項は以下の通りである.
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//数列の項の値が400万以下の, 偶数値の項の総和を求めよ.

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
