#include <stdio.h>
#include <string.h>

int main (){
	char c[1000] = "RIKKEI EDUCATION";
	
	printf("Xau ki tu vua nhap: ");
	for(int i=0;i< strlen(c);i++){
		printf("%c ", c[i]);
	}
	
	return 0;
}
