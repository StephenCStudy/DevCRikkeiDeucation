#include <stdio.h>
 
int main (){
  	int so1,so2,so3,so4,so5;
  	int tong = 0;
  	
  		printf("nhap vao so nguyen duong :"  );
  		scanf("%d", &so1);
  		printf("nhap vao so nguyen duong :"  );
  		scanf("%d", &so2);
  		printf("nhap vao so nguyen duong :" );
  		scanf("%d", &so3);
  		printf("nhap vao so nguyen duong :" );
  		scanf("%d", &so4);
  		printf("nhap vao so nguyen duong :" );
  		scanf("%d", &so5);
		
  		
  		if (so1 % 2 != 0){  
			tong = tong + so1;
	    	}  if (so2 % 2 != 0){
	    		tong = tong + so2;
			} if (so3 % 2 != 0){
			    tong = tong + so3;	
			} if (so4 % 2 != 0){
				tong = tong + so4;
			} if (so5 % 2 != 0){
				tong = tong + so5;
			}
	
    printf(" \n \n \n \n Tong cac so le vua nhap la: %d \n",tong);
    
  	return 0;
  }
