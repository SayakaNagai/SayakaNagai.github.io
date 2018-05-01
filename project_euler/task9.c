//(9)ピタゴラス数(ピタゴラスの定理を満たす自然数)とは a < b < c で以下の式を満たす数の組である.
//a2 + b2 = c2.例えば, 32 + 42 = 9 + 16 = 25 = 52 である.
//a + b + c = 1000 となるピタゴラスの三つ組が一つだけ存在する.これらの積 abc を計算しなさい.

#include <stdio.h>

int main(){
  
  int a,b,c;
  int ans = 0;
  
  for(c=1;c<=1000;c++){
    for(b=1;b<=1000;b++){
      for(a=1;a<=500;a++){
	if(a*a+b*b==c*c && a+b+c == 1000 && a<b && b<c ) 
	  ans = a*b*c;
      }
    }
  }
  printf("%d\n",ans);
  
  return 0;

}
