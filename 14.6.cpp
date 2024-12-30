#include <stdio.h>
#include <string.h>
#include <ctype.h> // thu vien dem ki tu

int main() {
    char c[1000] = "RIKKEI EDUCATION 123";
    int dem = 0;

    printf("Dem so ki tu la chu cai trong chuoi \n");
    for (int i = 0; i < strlen(c); i++) {
        if (isalpha(c[i])) {
            dem++;
        }
    }

    printf("So ki tu trong chuoi la: %d\n", dem);

    return 0;
}
