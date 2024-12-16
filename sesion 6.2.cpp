#include <stdio.h>
 
  int main (){
  	int so[5];
  	int chan = 0;
  	int le = 0;
  	for (int i=0; i<5; i++){
  		printf("nhap vao so nguyen duong %d:", (i + 1) );
  		scanf("%d", &so[i]);
  		
	  }
	for (int i=0; i<5; i++){
		if (so[i] % 2 != 0){  
			le = le +1 ;
	    	}

      }  
    for (int i=0; i<5; i++){
    	if (so[i] % 2 == 0){
    		chan = chan + 1;
		}
	}
    printf("\n \n so luong so chan la: %d \n",chan);
    printf("\n \n so luong so le la: %d \n",le);
    
  	return 0;
  }