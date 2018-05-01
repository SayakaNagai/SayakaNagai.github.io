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
