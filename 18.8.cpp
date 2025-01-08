#include <stdio.h>
#include <string.h>
#include <iostream>

struct sinhvien {
    char name[50];
    int age;
    long long phoneNumber;
};

typedef struct sinhvien sv;

void printAllStudents();
void insertStruct();
void addStudentAtPosition();
void menu();

sv sinhvien01[50];
int n = 5; 

int main() {
    insertStruct();
    menu();
    return 0;
}

void menu() {
    int choice;
    do {
        printf("1: Hien thi tat ca sinh vien hien co\n");
        printf("2: Chen sinh vien vao vi tri bat ky\n");
        printf("0: Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        while (getchar() != '\n');
        system("cls");
        switch(choice) {
            case 1:
                printAllStudents();
                break;
            case 2:
                addStudentAtPosition();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while(choice != 0);
}

void printAllStudents() {
    printf("\n>>>> Danh sach tat ca sinh vien >>>> \n");
    for (int i = 0; i < n; i++) {
        printf("\nCac thong tin cua sinh vien [%d] la:\n", i + 1);
        printf("Ten sinh vien: %s\n", sinhvien01[i].name);
        printf("Tuoi sinh vien: %d\n", sinhvien01[i].age);
        printf("SDT sinh vien: 0%lld\n", sinhvien01[i].phoneNumber);
    }
}

void insertStruct() {
    sv sv1 = {"Nguyen Van A", 18, 389724982};
    sv sv2 = {"Nguyen Van B", 16, 245294534};
    sv sv3 = {"Nguyen Van C", 17, 829348593};
    sv sv4 = {"Nguyen Van D", 22, 520405844};
    sv sv5 = {"Nguyen Van E", 53, 948593955};

    sinhvien01[0] = sv1;
    sinhvien01[1] = sv2;
    sinhvien01[2] = sv3;
    sinhvien01[3] = sv4;
    sinhvien01[4] = sv5;
}

void addStudentAtPosition() {
    if (n >= 50) {
        printf("Khong the them sinh vien vi mang da day.\n");
        return;
    }

    int position;
    printf("Nhap vi tri can chen sinh vien (0 den %d): ", n);
    scanf("%d", &position);
    while (getchar() != '\n');

    if (position < 0 || position > n) {
        printf("Vi tri khong hop le. Vui long chon lai.\n");
        return;
    }

    sv newStudent;
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, 50, stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    while (getchar() != '\n');
    printf("Nhap SDT sinh vien: ");
    scanf("%lld", &newStudent.phoneNumber);
    while (getchar() != '\n');

    for (int i = n; i > position; i--) {
        sinhvien01[i] = sinhvien01[i - 1];
    }

    sinhvien01[position] = newStudent;
    n++;

    printAllStudents();
}
