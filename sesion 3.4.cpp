#include <stdio.h>

int main (){
	float toan;
	float van;
	float anh;
	printf("nhap diem toan: \n");
	scanf("%f", &toan);
	printf("nhap diem van: \n");
	scanf("%f", &van);
	printf("nhap diem anh: \n");
	scanf("%f", &anh);
	
	float tong = ( toan + van + anh );
	float trungbinh = ( (toan + van + anh )/3 ); 
	
	printf("tong diem la: %f \n",tong,toan,van,anh);
	printf("diem trung binh la: %f \n",trungbinh,toan,van,anh);
	
	return 0; 
}