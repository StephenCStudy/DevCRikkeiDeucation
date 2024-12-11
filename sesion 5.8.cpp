#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("nhap vao so nguyen duong (a): ");
    scanf("%d", &num1);
    printf("nhap vao so nguyen duong (b): ");
    scanf("%d", &num2);

    int BCNN = lcm(num1, num2);

    printf("BCNN cua %d va %d la: %d\n", num1, num2, BCNN);

    return 0;
}
