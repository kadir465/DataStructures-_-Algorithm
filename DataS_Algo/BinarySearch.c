#include <stdio.h>
#define array_size 5

int main() {
    int array[array_size] = {5, 45, 48, 65, 100}; // sıralı dizi
    int low = 0;
    int high = array_size - 1;
    int searching;
    int found = 0;

    printf("Enter the number you want to search (1-100): ");
    scanf("%d", &searching);

    while (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == searching) {
            printf("Number found at index %d (position %d)\n", mid, mid + 1);
            found = 1;
            break;
        } else if (array[mid] < searching) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
