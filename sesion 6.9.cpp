#include <stdio.h>

int main() {
    int num, a, b, c;

    printf("Cac so Armstrong co 3 chu so la:\n");
    for (num = 100; num < 1000; num++) {
        a = num / 100;       
        b = (num / 10) % 10;   
        c = num % 10;          

        if ((a*a*a) + (b*b*b) + (c*c*c) == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
