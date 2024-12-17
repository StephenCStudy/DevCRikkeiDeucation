#include <stdio.h>
int main (){
	int n;
	
	printf("nhap so nguyen bat ki:");
	scanf("%d", &n);
	
	int arr[n][n];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) { 
	         printf("Nhap phan tu [%d][%d]: ", i, j); 
	         scanf("%d", &arr[i][j]);
	    }
    }
	for (int i=0; i < n; i++){
		for (int j= 0; j < n; j++){
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	
return 0;	
}