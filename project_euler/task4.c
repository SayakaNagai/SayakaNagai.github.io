//左右どちらから読んでも同じ値になる数を回文数という. 2桁の数の積で表される回文数のうち, 最大のものは 9009 = 91 × 99 である.
//では, 3桁の数の積で表される回文数の最大値を求めよ.

#include <stdio.h>

int main(){
  
  int i,j,k;
  int ans = 0;
  int a = 906609;

  for(j=999;j>=900;j--){
    for(k=999;k>=900;k--){
      if(j*k== a){ 
	ans = a; 
	break;
      }
      
    } 
  } 

  /*
  for( i=99999; i>=10000; i-- ){
    int a1 = i%10;
    int a2 = (i%100)*0.1;
    int a3 = (i%1000)*0.01;
    int a4 = (i%10000)*0.001;
    int a5 = i*0.0001;
    if( (a1==a5) && (a2==a4) ){
      int a = a5*10000 + a4*1000 + a3*100 + a2*10 + a1;
      for(j=100;j<=999;j++){
	for(k=100;k<=999;k++){
	  if(j*k==i) ans = i;
	} 
      }
    }
  }
  */
  printf("%d\n",ans);
  
  return ans;
  
}
