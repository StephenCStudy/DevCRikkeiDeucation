#include <stdio.h>
#include <string.h>
#include <iostream>
struct sinhvien {
    int id;
    char name[50];
    int age;
    long long phoneNumber;
};
typedef struct sinhvien sv;

void printStruct();
void printAllStudents();
void insertStruct();
int searchIds();
void updateStudent();
void menu();

sv sinhvien01[50]; 
int n;

int main() { 
    insertStruct();
    menu();
    return 0;
}

void menu() {
    int choice;
    do {
        printf("1: Chinh sua ten, tuoi sinh vien bang ID\n");
        printf("2: Hien thi tat ca sinh vien hien co\n");
        printf("0: Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        while (getchar() != '\n');
		 system("cls");
        switch(choice) {
            case 1:
                updateStudent();
                break;
            case 2:
                printAllStudents();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while(choice != 0);
}

void updateStudent() {
    int foundIndex = searchIds();
    if (foundIndex != -1) {
        while (getchar() != '\n'); 
        printf("--- chinh sua ten: ");
        fgets(sinhvien01[foundIndex].name, 50, stdin);
        size_t length = strlen(sinhvien01[foundIndex].name);
        if (length > 0 && sinhvien01[foundIndex].name[length - 1] == '\n') {
            sinhvien01[foundIndex].name[length - 1] = '\0';
        }
        
        printf("--- chinh sua tuoi: ");
        scanf("%d", &sinhvien01[foundIndex].age);
        while (getchar() != '\n'); 
    } else {
        printf("khong tim thay sinh vien voi ID nay.\n");
    }
}

void printStruct(int foundIndex) {
    if (foundIndex != -1) {
        printf("\n>>>> Thong tin sinh vien duoc tim thay >>>> \n");
        printf("ID: %d\n", sinhvien01[foundIndex].id);
        printf("Ten sinh vien: %s\n", sinhvien01[foundIndex].name);
        printf("Tuoi sinh vien: %d\n", sinhvien01[foundIndex].age);
        printf("SDT sinh vien: 0%lld\n", sinhvien01[foundIndex].phoneNumber);
    }
}

void printAllStudents() {
    printf("\n>>>> Danh sach tat ca sinh vien >>>> \n");
    for (int i = 0; i < 5; i++) {
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

int searchIds() {
    int idfind;
    printf("Nhap id sinh vien muon tim kiem: ");
    scanf("%d", &idfind);
    
    for (int i = 0; i < 5; i++) {
        if (sinhvien01[i].id == idfind) {
            printf("sinh vien duoc tim thay.\n");
            return i;
        }
    }
    return -1;
}
