//2520 は 1 から 10 の数字の全ての整数で割り切れる数字であり, そのような数字の中では最小の値である.
//では, 1 から 20 までの整数全てで割り切れる数字の中で最小の正の数はいくらになるか.
#include <stdio.h>

int main(){

  int i;
  int n = 2521;
  int ans = 0;
  
  while(ans<1){    
    while( n%i == 0 ){
      if(i==20){
	ans = n;
	break;	
      }
      i++;
    }
    n++;
    i=1;
  }
  printf("%d\n",ans);

}
