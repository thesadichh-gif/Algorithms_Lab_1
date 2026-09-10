#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int arr[5][4];
    int r_sum;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = -20 + rand() % 61;
        }
    }
    printf("array:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        r_sum = 0;
        for (int j = 0; j < 4; j++) {
            r_sum += arr[i][j];
        }
        printf("row %d sum - %d\n", (i + 1), r_sum);
    }
    return 0;
}
