#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	
    
	for(int i=0; i<n; i++)
	{
		printf("nhap phan tu [%d] cho mang: ",i);
		scanf("%d", &a[i]);
	}
	
	printf("phan tu vua nhap la:\n");
    for (int i=0; i<n; i++)
    {
    	printf("%d ", a[i]);
	}
	
	return 0;
}