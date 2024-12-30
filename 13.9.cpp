#include <stdio.h>
#include <iostream>

int arr[100][100];
int n, m;

void nhapMang();
void inMang();
void inGoc();
void inBien();
void inCheo();
void inNguyenTo();
int kiemTraNguyenTo(int num);

int main() {
    int choice;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    system("cls");
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        system("cls");
        
        switch (choice) {
            case 1:
                nhapMang();
                break;
            case 2:
                inMang();
                break;
            case 3:
                inGoc();
                break;
            case 4:
                inBien();
                break;
            case 5:
                inCheo();
                break;
            case 6:
                inNguyenTo();
                break;
            case 7:
            	printf("Ket thuc chuong trinh !");
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }
}

void nhapMang() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap vao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMang() {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void inGoc() {
    printf("Cac phan tu o goc la: %d %d %d %d\n", arr[0][0], arr[0][m-1], arr[n-1][0], arr[n-1][m-1]);
}

void inBien() {
    printf("Cac phan tu nam tren duong bien la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inCheo() {
    printf("Cac phan tu nam tren duong cheo chinh va cheo phu la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inNguyenTo() {
    printf("Cac phan tu la so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (kiemTraNguyenTo(arr[i][j])) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int kiemTraNguyenTo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
