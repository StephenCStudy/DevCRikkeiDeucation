#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int menu_show();
void inputArr(int *arr, int *n);
void ShowArr(int *arr, int n);
int sumArr(int *arr,int n);
int maxArr(int *arr,int n);

int main (){
    int size = MAX;
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
                printf("Do dai mang la: %d\n", n);
                break;
            case 4:
                printf("tong cac phan tu la: %d\n",sumArr(array,n));
                break;
            case 5:
            	printf("Phan tu lon nhat trong mang la: %d\n",maxArr(array,n));
            	break;
            case 6:
            	printf("Ket thuc chuong trinh!");
            	free(array);
            	return 0;
            	break;
            default:
                printf("Lua chon khong dung, vui long nhap lai! ");
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
    printf("2. Hien thi cac phan tu trong mang.\n");
    printf("3. Tinh do dai mang.\n");
    printf("4. Tinh tong cac phan tu trong mang.\n");
    printf("5. Hien thi phan tu lon nhat.\n");
    printf("6. Thoat\n");
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
        printf("Phan tu trong mang o vi tri [%d] gom: %d\n", i + 1, *(arr + i));
    }
}
int sumArr(int *arr,int n){
	int sum = 0;
	for(int i=0;i< n;i++){
		sum += *(arr + i) ;
	}	
	return sum;	
}
int maxArr(int *arr,int n){
	int maxnumber = arr[0];
	for(int i=0;i< n;i++){
		if(maxnumber < arr[i]){
			maxnumber = arr[i];
		}
	}		
	return maxnumber;
}
