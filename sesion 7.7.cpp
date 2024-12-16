#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int i = 0;

    while (i < n) {
        int temp;
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &temp);

        if (temp % 2 != 0) {
            arr[i] = temp;
            i++;
        } else {
            printf("Phan tu phai la so le. Vui long nhap lai.\n");
        }
    }

    printf("Mang vua nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
