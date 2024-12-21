#include <stdio.h>

int main (){
	int arr[100];
	int n;
	printf("nhap so luong phan tu(1-100).");
	scanf("%d", &n);
	
	
	printf("nhap cac phan tu vao mang! \n");	
	
	for (int i=0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int x, flag = 0;
	printf("nhap phan tu can tim. ");
	scanf("%d", &x);
	
	for (int i=0;i < n; i++){
		if (arr[i] == x) {
			printf("nhap tu can tim la %d o vi tri %d trong mang!\n", x, i+1);
			flag = 1;
	        break;
		}	
	}
	
	if(!flag){
			printf("phan tu can tim khong ton tai.\n");
	
	} 
	
	return 0;
}
