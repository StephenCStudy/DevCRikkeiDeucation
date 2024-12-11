#include <stdio.h>

void hienThiMenu() {
    printf("\nCALCULATOR\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
    printf("lua chon cua ban: ");
}

int main() {
    int luaChon;
    double so1, so2;

    printf("nhap vao so thu nhat: ");
    scanf("%lf", &so1);
    printf("nhap vao so thu hai: ");
    scanf("%lf", &so2);

    do {
        hienThiMenu();
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Tong cua %.2lf va %.2lf la: %.2lf\n", so1, so2, so1 + so2);
                break;
            case 2:
                printf("Hieu cua %.2lf va %.2lf la: %.2lf\n", so1, so2, so1 - so2);
                break;
            case 3:
                printf("Tich cua %.2lf va %.2lf la: %.2lf\n", so1, so2, so1 * so2);
                break;
            case 4:
                if (so2 != 0)
                    printf("Thuong cua %.2lf va %.2lf la: %.2lf\n", so1, so2, so1 / so2);
                else
                    printf("ERROS: khong the chia cho 0.\n");
                break;
            case 5:
                printf("-----------END-----------\n");
                break;
            default:
                printf("Vui long chon lai.\n");
        }
    } while (luaChon != 5);

    return 0;
}
