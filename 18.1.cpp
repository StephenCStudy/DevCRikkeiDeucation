#include <stdio.h>
#include <string.h>

int main() {
    struct sinhvien {
        char name[20];
        int age;
        long phoneNumber;
    };

    struct sinhvien sinhvien01 = {"Tran Duc Anh", 18, 389759625}; 

    printf("ten sinh vien: %s \n", sinhvien01.name);
    printf("tuoi sinh vien: %d \n", sinhvien01.age);
    printf("sdt sinh vien: 0%ld \n", sinhvien01.phoneNumber);

    return 0;
}
