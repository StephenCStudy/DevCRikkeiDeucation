#include <stdio.h>

void col(int *n, int *m);
void printArray(int n, int m);
int arr[100][100];

int main() {
    int n, m;
    
    col(&n, &m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap vao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printArray(n, m);
    
    return 0;
}

void col(int *n, int *m) {
    printf("Nhap so hang: ");
    scanf("%d", n);
    printf("Nhap so cot: ");
    scanf("%d", m);
}

void printArray(int n, int m) {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
