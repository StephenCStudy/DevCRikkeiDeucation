#include <stdio.h>
#include <string.h>
#include <ctype.h> // thu vien dem ki tu

int main() {
    char c[1000];
    printf("Nhap gmail cua ban: ");
    fgets(c, sizeof(c), stdin); 
    
    int chuso = 0, chucai = 0, datbiet = 0;

    printf("Dem cac thanh phan trong chuoi\n");
    for (int i = 0; i < strlen(c); i++) {
        if (isalpha(c[i])) {
            chucai++;
        } else if (isdigit(c[i])) {
            chuso++;
        } else {
            datbiet++;
        }
    }
    printf("--------------------------------------------\n");
    printf("|So chu cai | So chu so | So ki tu dat biet| \n");
    printf("|    %d     |     %d     |         %d        | ",chucai,chuso,datbiet);
    printf("\n--------------------------------------------\n");
   

    return 0;
}
