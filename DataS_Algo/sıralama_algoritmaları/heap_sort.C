//heap sort
#include <stdio.h>
void heap(int arr[],int key, int root,int bound){
    int largest = root;
  int child;
  while(2*largest<=bound){
    child = 2*largest;
    if(child<bound && arr[child]<arr[child+1]){
      child++;
    }
    if(key>arr[child]){
      break;
    }
    else{
      arr[largest] = arr[child];
      largest = child;
    }
  }
  arr[largest] = key;
}
int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of the array: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=size/2;i>=0;i--){
    heap(arr,arr[i],i,size-1);
  }
  for(int i=size-1;i>=1;i--)
    {
      int temp = arr[0];
      arr[0] = arr[i];
      heap(arr,temp,0,i-1);
      for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
      }
      printf("\n");

    }
}