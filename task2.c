#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = -20 + rand() % 61;
    }

    printf("array =");

    for (int i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    return 0;
}
