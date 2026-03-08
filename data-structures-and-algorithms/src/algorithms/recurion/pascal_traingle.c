#include<stdio.h>
#define Pn 5
unsigned long long int cnr (int a,int b ){
if(a==0 || b==a)
return 1;
else
return cnr(a-1,b-1)+cnr(a-1,b);
}

int main(){
int a,b;
  printf("enter the two number");
scanf("%d %d",&a,&b);
printf("the obeb result : ",cnr(a,b));
return 0;
}
