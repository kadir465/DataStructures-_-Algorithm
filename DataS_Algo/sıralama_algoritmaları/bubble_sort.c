//bubbe sort 
#include <stdio.h>
void bubbleSort(int array[],int size){
  int i,j,temp;
  for(i=0;i<size;i++){
    for(j=1;j<size-i;j++){
      if(array[j-1]>array[j]){
        temp=array[j-1];
        array[j-1]=array[j];
        array[j]=temp;
      }
    }
  }
}
int main(){
  int size;
  printf("dizi boyutunu giriniz: ");
  scanf("%d",&size);
  int array[size];
  printf("dizi elemanlarını giriniz");
  for(int i=0;i<size;i++){
    printf("%d. elemanı giriniz  ",i+1);
    scanf("%d",&array[i]);
  }
  bubbleSort(array,size);
  printf("sıralanmış dizi: ");
  for(int i=0;i<size;i++){
    printf("%d ",array[i]);
  }
  return 0;
}