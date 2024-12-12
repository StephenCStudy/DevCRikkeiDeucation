#include <stdio.h>
#include <math.h>

 int main (){  
 	float luong_theo_gio;
 	int so_gio_lam;
 	
 	printf ("nhap so gio lam viec: ");
 	scanf("%d", &so_gio_lam);
 	printf("nhap luong theo goi: ");
 	scanf("%f", &luong_theo_gio);
 	 float luong= luong_theo_gio * so_gio_lam;
	 if (so_gio_lam > 160){
	 	float phu_cap = luong * 0.1;
	 	printf("tien phu cap ( neu co ) la: %f \n", phu_cap);
	 }else {
	 	printf("khong co tien luong phu cap! \n");
	 }
	printf("Tong tien luong la: %f \n",luong);
 	return 0;
 }