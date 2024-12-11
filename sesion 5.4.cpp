#include <stdio.h>

int main() {
    
    int n;
    printf("nhap vao so nguyen duong tu 1 den 10: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 10) {
        printf("Bang cuu chuong cua  (%d):\n", n);
        for (int i = 1; i <= 10; i++) {
        	 int tich = n * i;
              printf("%d x %d = %d\n", n, i, tich);
        }
    } else {
        printf("so nhao khong hop le.\n");
    }

    return 0;
}
