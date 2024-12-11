#include <stdio.h>

int main() {

    int month;

    printf("Nhap vao so thang: ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("thang %d co 31 ngay.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            printf("Thang 2 co 29 hoac 28 ngay.\n");
            break;
        default:
            printf("Chi co 12 thang.\n");
            break;
    }

    return 0;
}
