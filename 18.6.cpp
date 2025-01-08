#include <stdio.h>
#include <string.h>

struct sinhvien {
    int id;
    char name[50];
    int age;
    long long phoneNumber;
};
typedef struct sinhvien sv;

void printAllStudents();
void insertStruct();
void addStudent();

sv sinhvien01[50]; 
int n = 5; 

int main() { 
    insertStruct();
    addStudent();
    printAllStudents();
    return 0;
}

void printAllStudents() {
    printf("\n>>>> Danh sach tat ca sinh vien >>>> \n");
    for (int i = 0; i < n; i++) {
        printf("\nCac thong tin cua sinh vien [%d] la:\n", i + 1);
        printf("ID: %d\n", sinhvien01[i].id);
        printf("Ten sinh vien: %s\n", sinhvien01[i].name);
        printf("Tuoi sinh vien: %d\n", sinhvien01[i].age);
        printf("SDT sinh vien: 0%lld\n", sinhvien01[i].phoneNumber);
    }   
}

void insertStruct() {
    sv sv1 = {1, "Nguyen Van A", 18, 389724982};
    sv sv2 = {2, "Nguyen Van B", 16, 245294534};
    sv sv3 = {3, "Nguyen Van C", 17, 829348593};
    sv sv4 = {4, "Nguyen Van D", 22, 520405844};
    sv sv5 = {5, "Nguyen Van E", 53, 948593955};
    
    sinhvien01[0] = sv1;
    sinhvien01[1] = sv2;
    sinhvien01[2] = sv3;
    sinhvien01[3] = sv4;
    sinhvien01[4] = sv5;
}

void addStudent() {
    if (n < 50) { 
        printf("\nNhap thong tin sinh vien moi.\n");
        sinhvien01[n].id = n + 1; 
        
        printf("Nhap ten sinh vien: ");
        fgets(sinhvien01[n].name, 50, stdin);
        size_t length = strlen(sinhvien01[n].name);
        if (length > 0 && sinhvien01[n].name[length - 1] == '\n') {
            sinhvien01[n].name[length - 1] = '\0';
        }
        
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sinhvien01[n].age);
        while (getchar() != '\n'); 
        
        printf("Nhap sdt sinh vien: ");
        scanf("%lld", &sinhvien01[n].phoneNumber);
        while (getchar() != '\n'); 
        
        n++; 
    } 
}
