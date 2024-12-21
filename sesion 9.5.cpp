#include <stdio.h>
#include <iostream>

int main (){
	
	int arr[100];
	int choice;
	int size = sizeof (arr)/sizeof (arr[0]);
	
	do {
	printf(" ===== MENU ===== \n");
	printf("1. nhap so phan tu - gia tri phan tu");
	printf("2. gia tri cac phan tu");
	printf("3. cac gia tri chan va tong cua no");
	printf("4. gia tri nho nhat/lon nhat cua mang");
	printf("5. cac phan tu la so nguyen to, tong cua chung.");
	printf("6. nhap vao mot so, xem coi so do co bao nhieu phan tu.");
	printf("7. then mot phan tu vao vi tri chi dinh");
	printf("8. thoat");
	
	
	
	switch(choice){
		case 1: 
		
		int soluong;
		printf("nhap so phan tu (khong qua 100)");
		scanf("%d", &soluong );
		if (soluong > 100 || soluong < 1){
			printf("so luong khong hop le!");
			return 0;
		}
		for(int i=0;i<=soluong;i++){
			printf("nhap phan tu thu[%d]", i + 1);
			scanf("%d", &arr[i]);
		}
		
		break;	
		case 2: 
	//			
		break;		
		case 3: 
	//			
		break;				
		case 4: 
	//					
		break;		
		case 5: 
	//					
		break;			
		case 6: 
	//					
		break;			
    	case 7:
	//	
		break;
		case 8:
	//		
		break;
	//	
		default: 
		printf("khong hop le \n");
		break;	
	  } 
	}while(choice != 8);
					
	return 0;
}
