#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Nhap so luong so Fibonacci: ");
    scanf("%d", &n);

    printf("Day %d so Fibonacci dau tien la:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }

    printf("\n");

    return 0;
}
