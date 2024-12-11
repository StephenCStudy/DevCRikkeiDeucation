#include <stdio.h>

int main (){
	int canh;
    int cao;
    float dientich = ( (0.5*canh*cao));
	printf("nhap vao canh cua tam giac: \n");
	scanf("%d",&canh);
	printf("nhap vao chieu cao cua tam giac: \n");
	scanf("%d",& cao);
	
	printf("dien tich tam giac la: %f\n",dientich,cao,canh);
	return 0;
}