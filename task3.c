#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n;
    printf("write size of array:\n");
    scanf("%d", &n);

    int* arr;
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        arr[i] = -20 + rand() % 61;
    }

    printf("array =");

    for (int i = 0; i < n; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
