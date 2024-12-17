#include <stdio.h>
int main (){
	int n = 3;
	
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
int max = arr[0][0];
	for (int i=0; i < n; i++){
		for (int j= 0; j < n; j++){
			if (arr[i][j] > max){
				max =arr[i][j];				
			}			
		}			
	}
	printf("%d",max);
return 0;	
}