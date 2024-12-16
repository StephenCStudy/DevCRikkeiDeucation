#include <stdio.h>
#include <math.h>

int is_armstrong(int n) {
    int number = n;
    int sum = 0;

    while (n != 0) {
        int so = n % 10;
        sum += pow(so, 3);
        n /= 10;
    }

    return (sum == number);
}

int main() {
    printf("Cac so Armstrong co 3 chu so:\n");
    for (int i = 100; i < 1000; i++) {
        if (is_armstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
