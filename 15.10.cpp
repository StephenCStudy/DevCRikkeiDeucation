#include <stdio.h>
#include <string.h>

#define MAX 256
void demKyTu(char* str);


int main() {
	char str[200];
	printf("Nhap cac ki tu bat ki: ");
	fgets(str, sizeof(str),stdin);
    
    demKyTu(str);
    return 0;
}


void demKyTu(char* str) {
    int dem[MAX] = {0};
    
    for(int i = 0; str[i]; i++) {
        dem[(int)str[i]]++;
    }
    
    for(int i = 0; i < MAX; i++) {
        if(dem[i] > 0) {
            printf("%c: %d\n", i, dem[i]);
        }
    }
}
