#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define MAX 100

int menu_show();
void inputArr(int *arr, int *n);
void ShowArr(int *arr, int n);
bool is_prime(int num);
void showPrimeNumbers(int *arr, int n);
int sumArr(int *arr, int n);
int maxArr(int *arr, int n);
void reverseArray(int *arr, int n);
void sortArrayAscending(int *arr, int n);
void sortArrayDescending(int *arr, int n);
int findElement(int *arr, int n, int element);
int sorting_menu();
int size = MAX;

int main (){
    
    int n = 0;
    int *array = (int *)malloc(size * sizeof(int)); 
    while(1){
        int choice = menu_show();
        system("cls");
        switch (choice) {
            case 1:
                inputArr(array, &n);
                break;
            case 2:
                ShowArr(array, n);
                break;
            case 3:
                showPrimeNumbers(array, n);
                break;
            case 4:
                reverseArray(array, n);
                printf("Mang sau khi dao nguoc:\n");
                ShowArr(array, n);
                break;
            case 5: {
                int sorting_choice = sorting_menu();
                if (sorting_choice == 1) {
                    sortArrayAscending(array, n);
                    printf("Mang sau khi sap xep tang dan:\n");
                } else if (sorting_choice == 2) {
                    sortArrayDescending(array, n);
                    printf("Mang sau khi sap xep giam dan:\n");
                } else {
                    printf("Lua chon khong dung, vui long nhap lai!\n");
                }
                ShowArr(array, n);
                break;
            }
            case 6: {
                int element;
                printf("Nhap vao phan tu can tim: ");
                scanf("%d", &element);
                int index = findElement(array, n, element);
                if (index != -1) {
                    printf("Phan tu %d tim thay tai vi tri: %d\n", element, index + 1);
                } else {
                    printf("Khong tim thay phan tu %d trong mang.\n", element);
                }
                break;
            }
            case 7:
                printf("Ket thuc chuong trinh!\n");
                free(array);
                return 0;
            default:
                printf("Lua chon khong dung, vui long nhap lai!\n");
                break;
        }
    }
    free(array);
    return 0;
}

int menu_show(){
    int choice;
    printf("----- MENU -----\n");
    printf("1. Nhap so luong va cac phan tu vao mang.\n");
    printf("2. Hien thi cac phan tu la so chan.\n");
    printf("3. Hien thi cac phan tu la so nguyen to.\n");
    printf("4. Dao nguoc mang.\n");
    printf("5. Sap xep mang.\n");
    printf("6. Tim phan tu trong mang.\n");
    printf("7. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    
    return choice;
}

void inputArr(int *arr, int *n){
    printf("Nhap so luong phan tu vao mang: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++){
        printf("Nhap vao phan tu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }           
}

void ShowArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("Phan tu [%d]: %d\n", i + 1, arr[i]);
    }
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void showPrimeNumbers(int *arr, int n) {
    printf("Cac so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            printf("Phan tu [%d]: %d\n", i + 1, arr[i]);
        }
    }
}

int sumArr(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int maxArr(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void reverseArray(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void sortArrayAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortArrayDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int sorting_menu() {
    int choice;
    printf("----- SAP XEP -----\n");
    printf("1. Sap xep tang dan.\n");
    printf("2. Sap xep giam dan.\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    return choice;
}

int findElement(int *arr, int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}
