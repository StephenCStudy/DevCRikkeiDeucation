#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap chieu dai: ");
    scanf("%d", &n);
    printf("Nhap chieu rong: ");
    scanf("%d", &m);
    int arr[n][m];

    // Nhap phan tu tu ban phim
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Sap xep tung cot theo chieu tang dan
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i][j] > arr[k][j]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }

    // In ra mang duoc sap xep
    printf("Mang duoc sap xep la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
