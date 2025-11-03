#include <stdio.h>
#define array_size 5

int main() {
    int array[array_size] = {100, 27, 31, 14, 52};

    // Selection sort
    for (int i = 0; i < array_size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < array_size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        // Yer değiştirme (swap)
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    // Sonuçları yazdır
    printf("Sıralanmış dizi: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
