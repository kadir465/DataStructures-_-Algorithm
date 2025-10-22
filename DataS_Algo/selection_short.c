#include <stdio.h>
#define array_size 5

int main() {
    int array[array_size] = {100, 27, 31, 14, 52};
    int i, j, temp;

    // Selection Sort
    for (i = 0; i < array_size - 1; i++) {
        int min_index = i;
        for (j = i + 1; j < array_size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        // Swap
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    // Sonuçları yazdır
    printf("Sıralanmış dizi: ");
    for (i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
