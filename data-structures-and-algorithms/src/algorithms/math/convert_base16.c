#include<stdio.h>
int base16(int n){
  if(n<16){
    if(n<10)
      printf("%d",n);
    else
      printf("%c",n-10+'A');
  }
  else
  {
      base16(n/16);
        int remindar=n%16;
        if(remindar<10)
          printf("%d",remindar);
        else
          printf("%c",remindar-10+'A');
  }
}
int main(){
  int n =13;
  base16(n);
  return 0;
}
