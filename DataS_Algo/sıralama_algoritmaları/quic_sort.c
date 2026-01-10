//quit sort
#include <stdio.h>
void qsort(int arr[],int left,int right){
  int i,j,pivot,temp;
  i=left;
  j=right;
  pivot=arr[(left+right)/2];
do{
  while(arr[i]<pivot){
    i++;
  }
  while(arr[j]>pivot){
    j--;
  }
  if(i<=j){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
} 
  while(i<=j);
  if(left<j){
    qsort(arr,left,j);
  }
  if(i<right)
    qsort(arr,i,right);
}
int main()
{
  int size;
  printf("dizi boyutunu giriniz: ");
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++){
    printf("%d. elemanı giriniz: ",i+1);
    scanf("%d",&arr[i]);
  }
  qsort(arr,0,size-1);
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
   return 0;
}