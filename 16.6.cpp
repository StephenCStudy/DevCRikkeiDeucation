#include <stdio.h>
#include <stdlib.h> 
#define MAX 10

int searchValue(int *arr, int value);

int main() {
    int size = MAX;
    int *array = (int *)malloc(size * sizeof(int)); 

    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    printf("Mang ban dau: \n");
    for (int i = 0; i < size; i++) {
        printf("%d \n", array[i]);
    }
    printf("\n");
    
    int value;   
    printf("\nPhan tu muon tim: ");
    scanf("%d", &value);
    
    int index = searchValue(array, value);
    if (index != -99) {
        printf("Vi tri cua phan tu trong mang la: %d\n", index );
    } else {
        printf("Khong tim thay phan tu trong mang\n");
    }
  
    free(array);

    return 0;
}

int searchValue(int *arr, int value) {
    for (int i = 0; i < MAX; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -99;
}
