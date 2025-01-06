#include <stdio.h>

int sum(int *input1, int *input2);

int main (){
	int a,b;
	printf("Nhap vao gia tri cho 2 bien [a] va [b]: ");
	scanf("%d %d",&a,&b);
	
    int tong = sum(&a,&b);
	
	printf("Tong 2 phan tu vua nhap: %d",tong);
	
	return 0;
}

int sum(int *input1, int *input2){
	int sum = *input1 + *input2;
	return sum;
}

