#include <stdio.h>
#include <stdlib.h> 
#define MAX 10

void updateArray(int *arr, int newValue, int index);

int main() {
    int size = MAX;
    int *array = (int *)malloc(size * sizeof(int)); 

    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d \n", array[i]);
    }
    printf("\n");
    
    
    int index;
    int newValue;
    printf("\nVi tri muon cap nhat (0-%d): ", size);
    scanf("%d", &index);
    printf("\nphan tu muon cap nhat: ");
	scanf("%d", &newValue);
    
    updateArray(array, newValue, index);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    
    free(array);

    return 0;
}

void updateArray(int *arr, int newValue, int index) {
    *(arr + index) = newValue;
}
