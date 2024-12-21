#include <stdio.h>

int main (){
	int arr[] = {64,32,16,8,4,2,0};
	int size = sizeof (arr) / sizeof (arr[0]);
	
	//sap xep 
	
	for ( int i =1; i < size ; i++){
		int key = arr[i];
		int j = i -1;
		
		while(j >=0 && arr[j] > key){
			arr[j + 1] = arr [j];
			j = j - 1;
		}		
		arr[j +1 ] = key;	
	}
	
	// in mang da duoc sap xep.
	printf("so luong phan tu da duoc sap xep la: \n");
	for (int i=0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
