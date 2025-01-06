#include <stdio.h>

int arr[100];
int n;
void inputArr();
void printArr();

int main() {
    inputArr();
    printArr();  
    return 0;
}

void inputArr() {  
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu[%d] cho mang: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void printArr() {
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}
