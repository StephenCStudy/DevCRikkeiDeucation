#include <stdio.h>

int main (){
	int R;
	float Pi = 3.1415926535897932384626433;
	printf("nhap ban kinh hinh tron: \n");
	scanf("%d", &R);
	float C = (2*R*Pi);
	float S = (Pi*(R*R));
	printf("dien tich hinh tron la: %f \n",S,Pi,R);
	printf("chu vi hinh tron la: %f \n",C,Pi,R);
	return 0;
}