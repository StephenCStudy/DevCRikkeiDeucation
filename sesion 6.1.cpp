#include <stdio.h>
 
  int main (){
  	int so[5];
  	int tong = 0;
  	for (int i=0; i<5; i++){
  		printf("nhap vao so nguyen duong %d:", (i + 1) );
  		scanf("%d", &so[i]);
  		
	  }
	for (int i=0; i<5; i++){
		if (so[i] % 2 != 0){  
			tong = tong + so[i];
	    	}
      }  
    printf(" \n \n \n \n Tong cac so le vua nhap la: %d \n",tong);
    
  	return 0;
  }