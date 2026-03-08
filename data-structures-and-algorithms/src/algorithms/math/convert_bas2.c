#include<stdio.h>
int base(int n){
  if (n<2)
    print( "%d",n);
  else{
    base(n/2);
    print("%d",n%2);
  }
}
int main(){
  int n=13;
  base(n);
  return 0;
}
