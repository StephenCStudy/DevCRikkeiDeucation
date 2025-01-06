#include <stdio.h>

int main (){
	int n;
	printf("Nhap phan tu N: ");
	scanf("%d", &n);
	int *prt;
	prt = &n;		
	printf("gia tri cua bien: %d",n);
	printf("\nDia chi cua bien: %d",prt);
	return 0;
}
