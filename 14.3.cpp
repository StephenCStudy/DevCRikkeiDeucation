#include <stdio.h>
#include <string.h>

int main (){
	char c[1000] = "RIKKEI EDUCATION";
	int a,flag=0,dem=0;
	printf("nhap vao ki tu bat ki: ");
	scanf("%c", &a);
	
	for(int i=0;i<strlen(c);i++){
		if(c[i] == a){
			dem++;
			flag =1;			
		}					
	}
	if(flag){
		printf("ki tu vua nhap co trong mang, so lan xuat hien: %d ",dem);
	}else{
		printf("ki tu vua nhap khong co trong mang! ");
	}	
	return 0;
}
