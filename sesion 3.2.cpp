#include<stdio.h>;
int main (){
	int nhietDo;
	printf("nhap vao nhiet do theo Celsius: ");
	scanf("%d", &nhietDo);
	int Fa = ( (nhietDo*1.8) +32 );
	
	printf("nhiet do theo Fahrenheit la %d",Fa );
	
	return 0;
}