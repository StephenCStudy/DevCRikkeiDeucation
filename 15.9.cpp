#include <stdio.h>
#include <string.h>

void xoaKyTu(char str[], char kyTu);

int main() {
    char str[1000];
    char kyTu;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kyTu);

    xoaKyTu(str, kyTu);

    printf("Chuoi sau khi xoa ky tu '%c': [%s] \n", kyTu, str);

    return 0;
}

void xoaKyTu(char str[], char kyTu) {
    int lenght = strlen(str);
    int j = 0;
    for (int i = 0; i < lenght; i++) {
        if (str[i] != kyTu) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}
