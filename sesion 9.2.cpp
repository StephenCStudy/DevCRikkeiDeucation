#include <stdio.h>

int main() {  
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int index, newValue;

  // nhap vi tri 
    printf("Nhap vi tri can sua (0-%d): ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

  // nhap gia tri
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[index] = newValue;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
