#include <stdio.h>;

 int main(){
 	int N;
 	printf("Moi nhap vao mot so nguyen: \n");
 	scanf("%d", &N);
 	if ( (N % 3 == 0  && N % 5 == 0) ){
 		printf(" %d chia het cho 3 va 5 \n", N);
	 } else if ( N % 3 == 0){
	 	printf(" %d chia het cho 3 \n", N);
	 }else if ( N % 5 == 0){
	 	printf(" %d chia het cho 5 \n", N);
	 }else {
	 	printf(" %d khong chi het cho 3 va 5 \n", N);
	 }
	 
 	return 0;
 }