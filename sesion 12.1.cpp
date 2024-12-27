#include <stdio.h>

int CalculateSum(int number1, int number2);

int main (){
	int a,b;
	printf("nhap 2 so a va b: ");
	scanf("%d", &a);
	scanf("%d", &b);
	int sum =CalculateSum(a,b);
	printf("tong hai so a va b la: %d", sum);
	return 0;
}
int CalculateSum(int number1, int number2){
	int sum = number1 + number2;	
	return sum;
}
