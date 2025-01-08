#include <stdio.h>
#include <string.h>

int main() {
    struct sinhvien {
        char name[50];
        int age;
        long long phoneNumber;
    };

    struct sinhvien sinhvien01;
    printf("Nhap ten sinh vien: ");
    fgets(sinhvien01.name,50,stdin);
    fflush(stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sinhvien01.age);
    printf("Nhap sdt sinh vien: ");
    scanf("%lld", &sinhvien01.phoneNumber);
    
    printf("\n>>>> Thong tin ban vua nhap la >>>> \n");
    
    printf(" ten sinh vien: %s ", sinhvien01.name);
    printf("tuoi sinh vien: %d \n", sinhvien01.age);
    printf(" sdt sinh vien: 0%lld ", sinhvien01.phoneNumber);

    return 0;
}
