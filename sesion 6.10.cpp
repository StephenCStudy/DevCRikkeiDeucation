#include <stdio.h>
#include <math.h>

int is_songuyento(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("nhap so nguyen bat ki: ");
    scanf("%d", &n);

    if (is_songuyento(n)) {
        printf("%d la so nguyen to!\n", n);
    } else {
        printf("%d khong phai la so nguyen to!\n", n);
    }

    return 0;
}