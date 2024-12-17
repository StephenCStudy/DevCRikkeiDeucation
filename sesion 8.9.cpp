#include <stdio.h>
int main() {
	int n = 3;
	int ngang =3;
	int doc =3;
	 int arr[3][3] = {
		{1,2,3},
		{4,1,2},
		{2,8,1},
	 }; 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j=0; j < n; j++){
        	if (i==0 || i == ngang -1 || j==0 || j == doc -1){
        	 continue;
			}if(arr[i][j] == 1){
        		 printf("[%d]", arr[i][j]);
		  }if(arr[i][j] == 2){
		  	printf("[%d]", arr[i][j]);
		  }
		}
     }

    return 0;
}