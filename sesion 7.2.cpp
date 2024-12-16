#include <stdio.h>

int main (){
    int n = 5;
    int a[n];
    	printf("nhap  5 phan tu cho list! \n");
    
    for(int i=1; i<=n; i++)
    {
    	printf("nhap phan tu[%d] cho list :", i);
    	scanf("%d", &a[i]);
    	
	}
    printf("list vua nhap la:\n");
    for (int i=1; i<=n; i++)
    {
    	printf("%d\n", a[i]);
	}
	return 0;
}