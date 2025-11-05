#include<stdio.h>
int base9(int n){
  if(n<9)
    printf("%d",n);
  else
    base9(n/9);
  printf("%d",n%9);
}
int main(){
  int n=15;
  base9(n);
  return 0;
}
