#include <stdio.h>

// ham tinh giai thua
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Khong tinh duoc giai thua cua so am.\n");
    } else {
        printf("Giai thua cua %d la %lld\n", number, factorial(number));
    }

    return 0;
}
