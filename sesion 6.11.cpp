#include<stdio.h>
#include <math.h>

int main (){
	int n;
	printf("nhap so nguyen duong bat ki: ");
	scanf("%d", &n);
	
	int a = 2;
	
	while (a < n){
		int prime = 1;
		
		for (int i = 2; i <= sqrt(a); i++){
			if (a % i == 0){
				prime = 0;
				break;
			}
		}
		if (prime){
			printf("(%d) \n", a);
		}
		
		a++;
	}
	
		
	return 0;
}

