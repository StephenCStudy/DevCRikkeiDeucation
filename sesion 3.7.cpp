#include <stdio.h>

int main() {
    int so;
	int tong = 0;

    printf("nhap mot so nguyen to co 4 chu so: ");
    scanf("%d", &so);

    if (so >= 1000 && so <= 9999) {
        
        if (so != 0) {
            tong += so % 10;
            so /= 10;
            tong += so % 10;
            so /= 10;
            tong += so % 10;
            so /= 10;
            tong += so % 10;
            so /= 10;
        }

        
        printf("tong cac chu so la: %d\n", tong);
    } else {
        printf("so nhap vao khong phai so co 4 chu so.\n");
    }

    return 0;
}
