#include <stdio.h>

int main (){
	int arr[] = {64,32,16,8,4,2,0};
	int size = sizeof (arr) / sizeof (arr[0]);
	
	//sap xep 
	
	for ( int i =0; i < size -1; i++){
		int num = i;
		for (int j =i +1; j< size ; j++){
			if ( arr[j] < arr[num]){
				num = j;
			}
		}
		int temp = arr[num];
		arr[num] = arr[i];
		arr[i] = temp;
	}
	
	// in mang da duoc sap xep.
	printf("so luong phan tu da duoc sap xep la: \n");
	for (int i=0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
