#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int findMax(int arr[], int size);

int main() {
    srand(time(NULL)); 
    
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n]; 
    
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("Phan tu arr[%d] = %d\n", i+1, arr[i]);
    }

    int max = findMax(arr, n);

    printf("Gia tri lon nhat trong mang la: %d\n", max);

    return 0;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
