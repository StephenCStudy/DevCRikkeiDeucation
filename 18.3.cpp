#include <stdio.h>
#include <string.h>

int main() {
    struct sinhvien {
        char name[50];
        int age;
        long long phoneNumber;
    };

    struct sinhvien sinhvien01[5];
    for(int i = 0; i < 5; i++) {
    	printf("\n>>>> Nhap cac thong tin cho sinh vien[%d] >>>> \n",i+1);
    	
        printf("Nhap ten sinh vien: ");
        fgets(sinhvien01[i].name, 50, stdin);
        size_t length = strlen(sinhvien01[i].name);
        if (length > 0 && sinhvien01[i].name[length-1] == '\n') {
            sinhvien01[i].name[length-1] = '\0';
        }
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sinhvien01[i].age);
        printf("Nhap sdt sinh vien: ");
        scanf("%lld", &sinhvien01[i].phoneNumber);
        while (getchar() != '\n');  
        
    }

    printf("\n>>>> Thong tin ban vua nhap la >>>> \n");
    for (int i = 0; i < 5; i++) {
    	printf("\n cac thong tin cua sinh vien [%d] la  \n",i+1);
    	
        printf("Ten sinh vien: %s\n", sinhvien01[i].name);
        printf("Tuoi sinh vien: %d\n", sinhvien01[i].age);
        printf("SDT sinh vien: 0%lld\n", sinhvien01[i].phoneNumber);
    }

    return 0;
}
