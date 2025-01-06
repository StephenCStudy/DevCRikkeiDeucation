#include <stdio.h>
#include <string.h>


void reverse(char *str);

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; 

    strcpy(reverseString, inputString);

    reverse(reverseString);

    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi da dao nguoc: %s\n", reverseString);

    return 0;
}
void reverse(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
