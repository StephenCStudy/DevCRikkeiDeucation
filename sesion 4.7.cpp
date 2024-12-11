#include <stdio.h>
int main (){
	printf("nhap vao so nam:");
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		printf("nam %d la nam nhuan.", year);
	}else {
		printf("nam %d khong la nam nhuan.", year);
	}
	
	return 0;
}