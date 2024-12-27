#include <stdio.h>

int Is_prefect(int n);


int main (){
	int num;
	printf("Nhap vao so nguyen bat ki:");
	scanf("%d", &num);
	
		if (Is_prefect(num)){
			printf("%d la so hoan hao!", num);
		}else{
			printf("%d khong phai so hoan hao!", num);
		}
	
	return 0;
}


int Is_prefect(int n){
	int sum = 0;
	for(int i=1;i<= n/2;i++){
		if (n % i ==0){
			sum += i;
		}
	}
	return n == sum;
	
	
}
