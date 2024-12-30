#include <stdio.h>
#include <iostream>
#define MAX 100

int arr[MAX];
int n = 0;

void nhapMang();
void inMang();
void themPhanTu();
void suaPhanTu();
void xoaPhanTu();
void sapXepGiamDan();
void sapXepTangDan();
void timKiemTuyenTinh();
void timKiemNhiPhan();

int main() {
    int choice;
    
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
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
                themPhanTu();
                break;
            case 4:
                suaPhanTu();
                break;
            case 5:
                xoaPhanTu();
                break;
            case 6:
                printf("\n1. Giam dan\n2. Tang dan\n");
                printf("Nhap lua chon cua ban: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    sapXepGiamDan();
                } else if (choice == 2) {
                    sapXepTangDan();
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            case 7:
                printf("\n1. Tim kiem tuyen tinh\n2. Tim kiem nhi phan\n");
                printf("Nhap lua chon cua ban: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    timKiemTuyenTinh();
                } else if (choice == 2) {
                    timKiemNhiPhan();
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            case 8:
            	printf("Ket thuc chuong trinh !");
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }
}

void nhapMang() {
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    if (n > MAX) {
        printf("So phan tu vuot qua gioi han!\n");
        n = MAX;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inMang() {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu() {
    if (n >= MAX) {
        printf("Mang da day, khong the them phan tu!\n");
        return;
    }
    int pos, val;
    printf("Nhap vi tri can them: ");
    scanf("%d", &pos);
    printf("Nhap gia tri can them: ");
    scanf("%d", &val);
    if (pos < 0 || pos > n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}

void suaPhanTu() {
    int pos, val;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &val);
    arr[pos] = val;
}

void xoaPhanTu() {
    int pos;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void sapXepGiamDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan:\n");
    inMang();
}

void sapXepTangDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan:\n");
    inMang();
}

void timKiemTuyenTinh() {
    int val;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &val);
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("Gia tri %d duoc tim thay tai vi tri %d\n", val, i);
            return;
        }
    }
    printf("Gia tri %d khong co trong mang\n", val);
}

void timKiemNhiPhan() {
    int val;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &val);
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == val) {
            printf("Gia tri %d duoc tim thay tai vi tri %d\n", val, mid);
            return;
        }
        if (arr[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Gia tri %d khong co trong mang\n", val);
}
