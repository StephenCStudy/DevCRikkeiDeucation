#include <stdio.h>
 
  int main (){
  	int mk = 1966;
  	 while (true){
  	 	printf ("Nhap mat khau: ");
  	 	scanf("%d", &mk);
  	 	 if (mk == 1966){
  	 		printf("\n -----dung mat khau!-----\n");
  	 		break;
		   }else {
		   	printf("\n -----mat khau khong dung, nhap lai mat khau----- \n");
		   }
	   }
  	return 0;
  }