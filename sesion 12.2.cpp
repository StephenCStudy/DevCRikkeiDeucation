#include <stdio.h>

int printArr( int arr[], int n);

int main (){
	int n;
	printf("Nhap so lhuong phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i <n; i++){
		printf("Nhap phan tu [%d] trong mang: ",i+1 );
		scanf("%d", &arr[i]);
	}
	printf("Phan tu cua mang la: \n");
	printArr(arr,n);
	
	return 0;
}

int printArr(int arr[],int n){
    for(int i=0;i< n;i++){
		printf("%d ", arr[i]);
		
	}
	printf("\n");

	
}
