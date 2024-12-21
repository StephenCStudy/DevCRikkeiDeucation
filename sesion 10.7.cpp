#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap chieu dai: ");
    scanf("%d", &n);
    printf("Nhap chieu rong: ");
    scanf("%d", &m);
    int arr[n][m];

    // Nhap phan tu tu ban phim.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Sap xep theo chieu tang dan.
    for (int i = 0; i < n * m - 1; i++) {
        for (int j = i + 1; j < n * m; j++) {
            int a = i / m, b = i % m;
            int c = j / m, d = j % m;
            if (arr[a][b] > arr[c][d]) {
                int temp = arr[a][b];
                arr[a][b] = arr[c][d];
                arr[c][d] = temp;
            }
        }
    }

    // In ra mang duoc sap xep.
    printf("\nMang duoc sap xep la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
