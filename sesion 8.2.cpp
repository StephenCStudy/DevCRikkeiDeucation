#include <stdio.h>
int main (){
	int n = 10, element, i, flag = 0 ;	
	printf("nhap vao phan tu bat ki:");
	scanf("%d", &element);
	int a[10] ={1,2,3,4,5,6,7,8,9,10,};
	
	
	for (i =0; i < n; i++){
		if (a[i]== element){
			printf("vi tri phan tu trong mang la: %d\n", i);
			flag = 1;
			break;
		}
	}
	
	if (!flag) { 
	printf("Phan tu khong ton tai trong mang.\n"); 
	
	}
	return 0;
	
}