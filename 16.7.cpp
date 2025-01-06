#include <stdio.h>
#include <stdlib.h> 
#define MAX 10

void sortValue(int *arr, int size);

int main() {
    int size = MAX;
    int *array = (int *)malloc(size * sizeof(int)); 

    for (int i = 0; i < size; i++) {
        printf("Nhap vao gia tri [%d]: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Mang ban dau: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    sortValue(array, size);

    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);

    return 0;
}

void sortValue(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
