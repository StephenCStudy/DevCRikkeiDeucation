#include <stdio.h>
 
  int main (){
  	int N;
  	printf("nhap vao so nguyen bat ki:");
  	scanf("%d", &N);
  	 
  	  printf ("cac uoc cua so nguyen (%d) la: \n",N);
  	  
    for (int i=1; i <= N; i++){
    	if( N % i == 0){
    	 printf("- (%d) \n", i);	
		}
		
	} 
  		
  	return 0;
  }