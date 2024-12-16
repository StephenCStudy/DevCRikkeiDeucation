#include <stdio.h>
#include <math.h>
 
  int main (){
  	float a, b, c;
  	float Delta;
  	
  	printf("nhap vao so a, b va c: ");
  	scanf("%f%f%f", &a, &b, &c);
  	
	  if (a == 0){
	  	printf("\n nhap lai so a ( a > 0 ): ");
	  	scanf("%f", &a);
		  a = a;  
	  }
	
	Delta = b*b - 4 * a * c ;
	
	if ( Delta < 0){
		printf("\n Phuong trinh vo nghiem !");
	}
	
	if ( Delta == 0){
		float x = -b / (2 * a);
	}
	
	if (Delta > 0 ){
		float x1 = (-b + sqrt(Delta) ) / (2 * a);
		float x2 = (-b - sqrt(Delta) ) / (2 * a);
		
		printf(" Phuong trinh co  hai nghiem phan biet:");
		printf (" \n X1 = %.2f", x1);
		printf (" \n X2 = %.2f", x2);
	}
  	return 0;
  }