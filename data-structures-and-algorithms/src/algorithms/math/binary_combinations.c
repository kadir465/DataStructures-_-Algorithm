#include<stdio.h>
#define n 5
int main(){
  int i,j;
  char array[n]={" ","a","b","c","d"};
  for(i=0;i<=n-1;i++){
    for(j=i+1;j<=n;j++){
      printf("%c %c",array[i],array[j]);
      printf("%c %c",array[j],arraay[i]);
    }
  }
  return 0;
}
