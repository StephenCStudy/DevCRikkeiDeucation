#include <stdio.h>

void swap(int *input1, int *input2);

int main (){
	int a,b;
	printf("Nhap vao gia tri cho 2 bien trc khi doi cho[a] va [b]: ");
	scanf("%d %d",&a,&b);
	
	swap(&a,&b);
	
	printf("Sau khi doi cho 2 phan tu: %d %d",a,b);
	
	return 0;
}

void swap(int *input1, int *input2){
	int temp = *input1;
	*input1 = *input2;
	*input2 = temp;
	
}


