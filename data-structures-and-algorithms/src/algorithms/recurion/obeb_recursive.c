#include<stdio.h>

int obeb(int number1, int number2){
  if(number1==number2)
    return number1;
  else
    return obeb(number2,number1%number2);
}

int main(){
int number1,number2;
  printf("enter the 1.number");
  scanf("%d",&number1);
  printf("enter the 2.number");
  scanf("%d",&number2);

  printf("this is obeb result %d",obeb(number1,number2));
  return 0;
}
