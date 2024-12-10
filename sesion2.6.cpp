#include <stdio.h>

int  main (){
	
	float Pi = 3.14;
	int R = 5;
	int S = ((R*R)*Pi); 
	int C = (2*R*Pi);
	
	printf("Dien tich hinh tron la: %d \n",S,R,Pi);
	printf("Chu vi hinh tron la: %d \n",C,R,Pi);
	return 0;
}