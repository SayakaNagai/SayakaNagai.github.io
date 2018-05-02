#include <stdio.h>

int main(){
  
  int i,n;
  int flag = 0;
  long int ans = 5;  

  for(n=5; n<=2000000; n++){
    
    if( n%2 == 0 && n%3 == 0 ){ n++; }

    for(i=2;i<=n-1;i++){
      if( n%i == 0 ) { flag = 1; break; }
    }
    if( flag == 0 ){
      ans += n;
    }
    flag = 0;
   
  }

  printf("%ld\n",ans);

  return 0;

}
