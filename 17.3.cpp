#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  

#define MAX 100

int menu_show();
void insertString(char **str);
void reverseString(char *str);
void countLetters(char *str);
void compareStrings(char **str);
void toUppercase(char *str);
void concatenateStrings(char **str);

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
                if (string) {
                    printf("\nChuoi vua nhap da duoc dao nguoc la: \n");
                    reverseString(string);
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 3:
                if (string) {
                    countLetters(string);
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 4:
                compareStrings(&string);
                break;
            case 5:
                if (string) {
                    toUppercase(string);
                    printf("\nChuoi sau khi in hoa la: %s\n", string);
                } else {
                    printf("Chua co chuoi nao duoc nhap.\n");
                }
                break;
            case 6:
                concatenateStrings(&string);
                break;
            case 7:
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
    printf("2. Hien thi chuoi dao nguoc.\n");
    printf("3. So luong chu cai trong chuoi.\n");
    printf("4. Nhap vao chuoi moi, so sanh 2 chuoi.\n");
    printf("5. In hoa tat ca chu cai trong chuoi.\n");
    printf("6. Nhap vao chuoi moi, noi 2 chuoi.\n");
    printf("7. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    while ((getchar()) != '\n');  
    return choice;
}

void insertString(char **str) {
    *str = (char *)malloc(MAX * sizeof(char));
    printf("Nhap vao chuoi cua ban: ");
    fgets(*str, MAX, stdin);
    (*str)[strcspn(*str, "\n")] = '\0';  
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void countLetters(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("So luong chu cai trong chuoi la: %d\n", count);
}

void compareStrings(char **str) {
    char temp[MAX];
    printf("Nhap vao chuoi moi: ");
    fgets(temp, MAX, stdin);
    temp[strcspn(temp, "\n")] = '\0';  
    if (*str && strcmp(*str, temp) == 0) {
        printf("Hai chuoi giong nhau.\n");
    } else {
        printf("Hai chuoi khac nhau.\n");
    }
}

void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void concatenateStrings(char **str) {
    char temp[MAX];
    printf("Nhap vao chuoi moi: ");
    fgets(temp, MAX, stdin);
    temp[strcspn(temp, "\n")] = '\0';
    strcat(*str, temp);
    printf("Chuoi sau khi noi la: %s\n", *str);
}
