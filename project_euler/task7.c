//素数を小さい方から6つ並べると 2, 3, 5, 7, 11, 13 であり, 6番目の素数は 13 である.
//10001 番目の素数を求めよ.

#include <stdio.h>

int main(){
  
  int i;
  int n = 3;
  int ans = 0;
  int counter = 2;
  int prime[10001]={2,0};
  int flag = 0;
  
  //more than 2
  while( counter <= 10001 ){
    for(i=2;i<=n-1;i++){
      if( n%i == 0 ) { flag = 1; break; }
    }
    if( flag == 0 ){
      prime[counter-1] = n;
      counter++;
    }
    flag = 0;
    n++; 
  }

  printf("%d\n",prime[10000]);
  return 0;
}

