#include <stdio.h>

int main() {
    int so;
	int nghichDao = 0;

    printf("nhap mot so nguyen to co 4 chu so: ");
    scanf("%d", &so);

    if (so >= 1000 && so <= 9999) {
    	
        while (so != 0) {
            nghichDao = nghichDao * 10 + so % 10;
            so /= 10;
        }

        printf("so nghich dao la: %d\n", nghichDao);
    } else {
        printf("so nhap vao khong phai so co 4 chu so.\n");
    }

    return 0;
}
