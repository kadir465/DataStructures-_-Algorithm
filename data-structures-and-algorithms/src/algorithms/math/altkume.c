#include<stdio.h>
#define n 4
int main(){
  int i,j;
    char kume[n]={' ','A','B','C'};
  for(i=1;i<n-1;i++)
    for(j=i+1;j<n;j++){
      printf("%c %c\n",kume[i],kume[j]);
      printf("%c %c\n",kume[j],kume[i]);
    }
    
  return 0;
}
