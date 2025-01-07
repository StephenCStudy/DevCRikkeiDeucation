#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int menu_show();
void insertString(char **str);
int count_digits(const char *str);
int count_alpha(const char *str);
int count_special(const char *str);

int main() {
    char *string = NULL;
    while (1) {
        int choice = menu_show();
        system("cls");
        switch (choice) {
            case 1:
                insertString(&string);
                break;
            case 2:
                printf("\nChuoi vua nhap la: \n");
                if (string) {
                    printf("%s\n", string);
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 3:
                if (string) {
                    printf("So luong chu cai trong chuoi la: %d\n", count_alpha(string));
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 4:
                if (string) {
                    printf("So luong chu so trong chuoi la: %d\n", count_digits(string));
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 5:
                if (string) {
                    printf("So luong ky tu dac biet trong chuoi la: %d\n", count_special(string));
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 6:
                printf("Ket thuc chuong trinh!\n");
                free(string);
                return 0;
            default:
                printf("Lua chon khong dung, vui long nhap lai!\n");
                break;
        }
    }
    free(string);
    return 0;
}

int menu_show() {
    int choice;
    printf("----- MENU -----\n");
    printf("1. Nhap vao chuoi.\n");
    printf("2. Hien thi chuoi.\n");
    printf("3. So luong chu cai trong chuoi.\n");
    printf("4. So luong chu so trong chuoi.\n");
    printf("5. So luong ki tu dac biet trong chuoi.\n");
    printf("6. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    while ((getchar()) != '\n');  // xoa enter
    return choice;
}

void insertString(char **str) {
    *str = (char *)malloc(MAX * sizeof(char));
    printf("Nhap vao chuoi cua ban: ");
    fgets(*str, MAX, stdin);
    (*str)[strcspn(*str, "\n")] = '\0';  
}

int count_alpha(const char *str) {
    int letter_count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letter_count++;
        }
    }
    return letter_count;
}

int count_digits(const char *str) {
    int digit_count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digit_count++;
        }
    }
    return digit_count;
}

int count_special(const char *str) {
    int special_count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
            special_count++;
        }
    }
    return special_count;
}
