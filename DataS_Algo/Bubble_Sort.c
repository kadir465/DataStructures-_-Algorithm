#include <stdio.h>

#define array_size 5

int main() {
    int array[array_size] = {100, 27, 31, 14, 52};
    int temp;

    for (int i = 0; i < array_size - 1; i++) {
       for(int j = 0; j < array_size - 1 - i; j++){
           if(array[j]>array[j+1]){
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
    }
    for (int i = 0; i < array_size; i++)
        printf("%d ", array[i]);
    return 0;
}
