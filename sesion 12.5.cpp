#include <stdio.h>

int Is_Prime(int n);


int main (){
	int num;
	printf("Nhap vao so nguyen bat ki:");
	scanf("%d", &num);
	
		if (Is_Prime(num)){
			printf("%d la so nguyen to!", num);
		}else{
			printf("%d khong phai so nguyen to!", num);
		}
	
	return 0;
}


int Is_Prime(int n){
	
	if (n < 2){
	   return 0;
	}
	
    for (int i= 2; i*i <= n; i++){
		if ( i % n == 0){
			return 0;
		}
		
	}
		
	return 1;
}
