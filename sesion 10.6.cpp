#include <stdio.h>
#include<iostream>

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
	
//	//sap xep
//	for (int i=0; i<n -1; i++){
//		for (int j=0; j< n -i -1; j++){
//			if (arr[j] > arr[j + 1]){
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr [j + 1] = temp;
//			}
//		}
//	}
//	
//	printf("mang duoc sap xep la: \n");
//	for (int i=0; i < n; i ++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");

// sreach phan tu
    system("cls");	
	int index =0;
	int same[100];
	
	printf("nhap phan tu muon tim kiem trong mang: ");
	scanf("%d", &x);
	for(int i=0; i < n; i++){
		if (arr[i] == x){
			found = 1;
			same[index++] = i + 1;
			break;
			
		}
	} while(!found){
		printf("\nphan tu can tim khong co trong mang! ");
		break;
	}

	// in ra cac phan tu da tim duoc!
	if (found){
		printf("Phan tu %d duoc tim thay o cac vi tri: ",x);
		for (int i=0; i < index;i++){
			printf("[%d] ", same[i]);
		}
	}
	
	return 0;
}
