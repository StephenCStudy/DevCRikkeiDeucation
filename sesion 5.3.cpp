#include <stdio.h>
 
  int main (){
  	int a;
  	int i=0;
  	printf("nhap vao mot so nguyen duong: \n");
  	scanf("%d", &a);
  	while(i<=a){
  		printf("(%d) \n",i);
  		++i;
	  }
  	return 0;
  }