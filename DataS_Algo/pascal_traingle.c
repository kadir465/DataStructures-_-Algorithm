#include<stdio.h>
#define Pn 5
unsigned long long int (int a,int b ){
if(b==0)
return a;
else
return obeb(b,a%b);
}

int main(){
int a,b;
  printf("enter the two number");
scanf("%d %d",&a,&b);
printf("the obeb result : ",obeb(a,b));
return 0;
}
