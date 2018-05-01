#include <stdio.h>
#include <math.h>

int main(){
  
  long int sum = 0;
  long int sum2 = 0;
  int i;
  int ans = 0;
  
  for(i=1;i<=100;i++){
    sum += i;
    sum2 += pow(i,2);    
  }

  printf("%ld\n",(long)pow(sum,2)-sum2);
  
  return 0;
}
