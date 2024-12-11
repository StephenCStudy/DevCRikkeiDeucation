#include <stdio.h>

int main() {
    char name[50];

    printf("nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

   
    printf("Xin chao %s \n", name);

    return 0;
}
