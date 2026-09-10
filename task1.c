#include <stdio.h>

int main() {
    int arr[5] = {4, 5, 10, 2, 9};
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("min = %d; max = %d; max - min = %d\n", min, max, (max - min));
    return 0;
}
