#include <stdio.h>

int main (){
	int n;
	int x;
	int arr[100];
//	int size = sizeof (arr) / sizeof ( arr[0]);
	int found =0;
	
	printf("nhap so luong phan tu: ");
	scanf("%d", &n);
	for (int i=0; i<n;i++){
		printf("nhap phan tu thu [%d] vao mang: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	//sap xep
	for (int i=0; i<n -1; i++){
		for (int j=0; j< n -i -1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr [j + 1] = temp;
			}
		}
	}
	
	printf("mang duoc sap xep la: \n");
	for (int i=0; i < n; i ++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	
	// sreach phan tu
	printf("nhap phan tu muon tim kiem trong mang: ");
	scanf("%d", &x);
	for(int i=0; i < n; i++){
		if (arr[i] == x){
			printf("phan tu %d o vi tri %d ",x,i+1);
			found = 1;
			break;
		}
	} while(!found){
		printf("\nphan tu can tim khong co trong mang! ");
		break;
	}
	
	return 0;
}
