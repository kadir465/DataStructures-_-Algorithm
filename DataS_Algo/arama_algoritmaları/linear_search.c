//linear search doğrusal arama
#include <stdio.h>

void linearSearch(int arr[],int size,int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target)
    {
       printf("aranan sayı %d. indekste bulundu",i);
    continue;
    }
    else
    {
      printf("aranan sayı bulunamadı");
continue;
    }
    
  }
}
void makeArray(int arr[],int size){
  for(int i=0;i<size;i++){
    printf("dizinin %d. elemanını giriniz:",i);
    scanf("%d",&arr[i]);
  }
}

int main(){
int size;
printf("dizi boyutunu giriniz:");
scanf("%d",&size);
int arr[size];
makeArray(arr,size);
int target;
printf("aranacak sayıyı giriniz:");
scanf("%d",&target);
linearSearch(arr,size,target);
}