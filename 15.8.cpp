#include <stdio.h>
#include <string.h>

void vietHoaChuCaiDau(char str[]);

int main() {
    char str[1000];
    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    vietHoaChuCaiDau(str);

    printf("Chuoi sau khi viet hoa cac chu cai dau: [%s]\n", str);

    return 0;
}

void vietHoaChuCaiDau(char str[]) {
    int vietHoa = 1; 

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            vietHoa = 1; 
        } else if (vietHoa && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A'; 
            }
            vietHoa = 0; 
        }
    }
}
