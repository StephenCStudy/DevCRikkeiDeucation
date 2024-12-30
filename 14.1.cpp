#include <stdio.h>
#include <string.h>

int main (){
	char c[1000];
	printf("Nhap xau ki tu: ");
	gets(c);
    printf("Xau vua nhap: %s\n",c);
    printf("  ---------------");
	printf("\ndo dai cua chuoi: %d ky tu\n",strlen(c));
	
	
	return 0;
}
