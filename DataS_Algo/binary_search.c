#include<stdio.h>
#define array_size 7
int main(){
  int array[array_size]={4,5,78,25,65,19,97};
  int aranan;
  printf("aranan değeri giriniz :");
  scanf("%d",&aranan);
  int low=0;
  int height=aranan_size-1;
  int found=0;
  while(low<=height){
    int mid=(low+height)/2;
    if(array[mid]==aranan){
      printf("aranan değer %d , %d .ninci indexte bulundu",aranan,mid+1);
      found=1;
      break 0;
    }
    else if{array[mid]<aranan)
            low=mid+1;
    else 
          height=mid-1;
  }
if(!found)
  printf("aranan değer dizide bulunamadı");

  return 0;
}
