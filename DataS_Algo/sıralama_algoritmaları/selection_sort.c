//selection sort
#include <stdio.h>
void selectionSort(int arr[], int n){
  int i,j,min_index;
  for(i=0;i<n-1;i++){
    min_index=i;
    for(j=i+1;j<n;j++){
      if(arr[j]<arr[min_index])
        min_index=j;

      int temp=arr[i];
      arr[i]=arr[min_index];
      arr[min_index]=temp;
    }
  }
}
int main()
{
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  for(int i=0;i<size;i++){
    printf("Enter the %d. element of the array: ",i+1);
    scanf("%d",&arr[i]);
  }
  selectionSort(arr,size);
  printf("Sorted array: ");
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
