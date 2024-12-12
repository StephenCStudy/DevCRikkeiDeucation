#include <stdio.h>

int main() {
    int so;
    int tong = 0;
    printf("nhap mot so nguyen to co 4 chu so: ");
    scanf("%d", &so);              
            tong += so % 10;
            so /= 10;
            tong += so % 10;
            so /= 10;
            tong += so % 10;
            so /= 10;
            tong += so % 10;
            so /= 10;      
        printf("tong cac chu so la: %d\n", tong);
   
        printf("so nhap vao khong phai so co 4 chu so.\n");
    return 0;
}
