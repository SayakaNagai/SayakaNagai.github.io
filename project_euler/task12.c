//角数の数列は自然数の和で表わされ, 7番目の三角数は 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28 である. 三角数の最初の10項は:
//1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ... となる.
//500個より多く約数をもつ最初の三角数はいくつか.

#include <stdio.h>

long int triangle( int num ){
  
  int i;
  long int sum = 0;
  
  for(i=1;i<=num;i++){
    sum += i;
  }
  
  return sum;
}

int yakusuNum( long int triangle_num ){
  
  int i, num = 0;
  
  for(i=1; i<=triangle_num; i++){
    if( triangle_num % i == 0 ) num++;
  }

  return num;
}

int main(){

  int i = 1;
  long int tri_num = 0;
  int yakusu_num = 0;

  while(1){
    
  tri_num = triangle(i);
  yakusu_num = yakusuNum(tri_num);
  if( yakusu_num >= 500 ) break;

  i++;
  }
 
  printf("%ld\n", tri_num);
  printf("%d\n", yakusu_num);

  return 0;

}
