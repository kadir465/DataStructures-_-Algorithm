//insertion sort
#include <stdio.h>
void insertionSort(int arr[], int n){
  int i,j,element;
  for(i=1;i<n;i++){
    element=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>element){
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=element;
  }
}
int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  for(int i=0;i<size;i++){
    printf("Enter the %d. element of the array: ",i+1);
    scanf("%d",&arr[i]);
  }
  insertionSort(arr,size);
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);

  }
   return 0;
}