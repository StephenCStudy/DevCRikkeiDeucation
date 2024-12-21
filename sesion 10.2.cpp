#include <stdio.h>

int main (){
	
//	int n;
	int arr[] = {64,32,16,8,4,2,0};
	
//	// nhap phan tu
//	printf("nhap so luong phan tu cho mang: ");
//	scanf("%d", &n);
//	
//
//	for (int i=0; i<n;i++){
//		printf("nhap phan tu [%d] vao mang: ", i);
//		scanf("%d", &arr[i]);
//	}
	
	//sap xep 
	int size = sizeof (arr) / sizeof (arr[0]);
	for ( int i =0; i < size -1; i++){
		for (int j =0; j< size -i -1; j++){
			if ( arr[j] > arr[ j + 1]){
				int temp = arr[j];
				arr[j] = arr[j +1];
				arr[j +1] = temp;
			}
		}
	}
	// in mang da duoc sap xep.
	printf("so luong phan tu da duoc sap xep la: \n");
	for (int i=0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
