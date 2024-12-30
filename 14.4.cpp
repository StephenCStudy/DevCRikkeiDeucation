#include <stdio.h>
#include <string.h>

int demSoTu(char str[]);

int main() {
    char str[100] = "Hello World";
    
    str[strcspn(str, "\n")] = '\0';
    
    int soTu = demSoTu(str);
    
    printf("So tu trong chuoi la: %d\n", soTu);
    
    return 0;
}

int demSoTu(char str[]) {
    int dem = 0;
    char *tu = strtok(str, " ");
    
    while (tu != NULL) {
        dem++;
        tu = strtok(NULL, " ");
    }
    
    return dem;
}
