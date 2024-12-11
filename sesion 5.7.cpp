#include <stdio.h>

int main() {
   
    int so1, so2;
    printf("Nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap vao so nguyen duong thu hai: ");
    scanf("%d", &so2);

    if (so1 > 0 && so2 > 0) {
        
        while (so1 != so2) {
            if (so1 > so2) {
                so1 = so1 - so2;
            } else {
                so2 = so2 - so1;
            }
        }
        
        printf("UCLN cua hai so la: %d\n", so1);
    } else {
        printf("Vui long nhap hai so nguyen duong.\n");
    }

    return 0;
}
