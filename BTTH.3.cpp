#include<stdio.h>
#include <iostream>
int menu();

int main(){
	long long VND, USD, EUR, GBP, JPY;
	while (true)
{
	int chose = menu();
	system("cls");
	switch(chose){
	  case 1:
	printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &USD);
	VND = USD * 23000;
	printf("so tien USD to VND la: (%lld) \n", VND);
	   break;
	  case 2:
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &EUR);
	VND = EUR * 26000;
	printf("so tien EUR to VND la: (%lld) \n", VND);
	   break;
	  case 3:
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &GBP);
	VND = GBP * 32000;
	printf("so tien GBP to VND la: (%lld) \n", VND);
	   break;
	  case 4:
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &JPY);
	VND = JPY * 167000;
	printf("so tien JPY to VND la: (%lld) \n", VND);
	   break;
	  case 5:
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &VND);
	USD = VND / 23000;
	printf("so tien VND to USD la: (%lld) \n", USD);
	   break;
	   case 6: 
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &VND);
	EUR = VND / 26000;
	printf("so tien VND to EUR la: (%lld) \n", EUR);
	   break;
	  case 7:
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &VND);
	GBP = VND / 32000;
	printf("so tien VND to GBP la: (%lld) \n", GBP);
	   break;
	  case 8:
	  printf("nhap so tien muon chuyen doi: ");
	scanf("%lld", &VND);
	JPY = VND / 167000;
	printf("so tien VND to JPY la: (%lld) \n", JPY);
	   break;
	  default:
	printf("nhap sai thong tin! \n");  	
	}
}
	return 0;
}











int menu()
{
	int chose;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("                     1. USD to VND\n");
	printf("                     2. EUR to VND\n");
	printf("                     3. GBP to VND\n");
	printf("                     4. JPY to VND\n");
	printf("                     5. VND to USD\n");
	printf("                     6. VND to EUR\n");
	printf("                     7. VND to GBP\n");
	printf("                     8. VND to JPY\n");
	printf("Nhap don vi tien te muon chuyen doi (1-8)?: ");
    scanf("%d", &chose);
	return chose;
}
