#include <stdio.h>

 int main (){
 	
 	int i, j ;
 	printf("nhap so hang trong mang:");
 	scanf("%d", &i);
 	printf("nhap so cot trong mang:");
 	scanf("%d", &j);
 	
 	int arr[i][j];
 	
 	
 	for (int p=0; p<i; p++){
 		for (int q=0; q<j; q++){
 			printf("nhap phan tu arr[%d][%d]:",p,q);
 		    scanf("%d", &arr[p][q]);
		 }
	 }
 	 printf("Ma tran da nhap:\n");
 	for (int p=0; p<i; p++){
 		for (int q=0; q<j; q++){
 			printf("%d:",arr[p][q]);
		 }
		 printf("\n");
	}
 	return 0;
 }