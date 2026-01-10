// Binary Search (İkili Arama)
#include <stdio.h>

void makeArray(int arr[], int size){
  printf("küçükten büyüğe sıralı  giriniz!\n"); 
  for(int i=0; i<size; i++){
    printf("%d. elemani giriniz: ", i+1);
    scanf("%d", &arr[i]);
  }
}

void binarySearch(int arr[], int size, int search){
  int left = 0, right = size - 1, mid;
  int bulunduMu = 0; 

  while(left <= right){
    mid = (left + right) / 2;

    if(arr[mid] == search){
      printf("Aranan sayi %d. indekste bulundu.\n", mid);
      bulunduMu = 1; // Sayıyı bulduk
      break;
    }
    else if(arr[mid] < search){
      left = mid + 1; // Aranan sayı daha büyük, sağ tarafa bak
    }
    else {
      right = mid - 1; // Aranan sayı daha küçük, sol tarafa bak
    }
  }

  // Döngü bittiğinde kontrol et
  if(bulunduMu == 0){
      printf("Aranan sayi dizide bulunamadi.\n");
  }
}

int main(){
  int size, search;
  printf("Dizi boyutunu giriniz: ");
  scanf("%d", &size);

  int arr[size];
  makeArray(arr, size);

  printf("Aranacak sayiyi giriniz: ");
  scanf("%d", &search);

  binarySearch(arr, size, search);

  return 0;
}