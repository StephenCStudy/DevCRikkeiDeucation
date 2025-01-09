#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    int age;
    char phone[15];
};

void menu();
void show_students(struct Student students[], int count);
void add_student(struct Student students[], int *count);
void update_student(struct Student students[], int count);
void remove_student(struct Student students[], int *count);
void search_student(struct Student students[], int count);
void sort_students(struct Student students[], int count);

int main() {
    struct Student students[MAX];
    int count = 0;
    int choice;
    int continue_choice;

    while (1) {
        menu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                show_students(students, count);
                break;
            case 2:
                add_student(students, &count);
                break;
            case 3:
                update_student(students, count);
                break;
            case 4:
                remove_student(students, &count);
                break;
            case 5:
                search_student(students, count);
                break;
            case 6:
                sort_students(students, count);
                break;
            case 7:
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }

        printf("Ban co muon tiep tuc khong? (1 de tiep tuc / 0 de thoat): ");
        scanf("%d", &continue_choice);
        getchar(); 
        if (continue_choice == 0) {
            break;
        }
    }
    return 0;
}

void menu() {
    printf("========== MENU ==========\n");
    printf("1. Hien thi sinh vien\n");
    printf("2. Them sinh vien\n");
    printf("3. Sua sinh vien\n");
    printf("4. Xoa sinh vien\n");
    printf("5. Tim kiem sinh vien\n");
    printf("6. Sap xep sinh vien\n");
    printf("7. Thoat\n");
    printf("==========================\n");
}

void show_students(struct Student students[], int count) {
    if (count == 0) {
        printf("Khong co sinh vien nao.\n");
        return;
    }
    printf("%-4s %-30s %-4s %-15s\n", "ID", "Ten", "Tuoi", "SDT");
    for (int i = 0; i < count; i++) {
        printf("%-4d %-30s %-4d %-15s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
    }
}

void add_student(struct Student students[], int *count) {
    struct Student new_student;
    new_student.id = *count + 1;

    printf("Nhap ten: ");
    fgets(new_student.name, 50, stdin);
    new_student.name[strcspn(new_student.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &new_student.age);
    getchar(); 

    printf("Nhap SDT: ");
    fgets(new_student.phone, 15, stdin);
    new_student.phone[strcspn(new_student.phone, "\n")] = '\0';

    students[*count] = new_student;
    (*count)++;
    printf("Them sinh vien thanh cong.\n");
}

void update_student(struct Student students[], int count) {
    if (count == 0) {
        printf("Khong co sinh vien nao.\n");
        return;
    }

    int id;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);
    getchar(); 

    if (id <= 0 || id > count) {
        printf("ID khong hop le!\n");
        return;
    }

    id--; 

    printf("Nhap ten moi: ");
    fgets(students[id].name, 50, stdin);
    students[id].name[strcspn(students[id].name, "\n")] = '\0';

    printf("Nhap tuoi moi: ");
    scanf("%d", &students[id].age);
    getchar(); 

    printf("Nhap SDT moi: ");
    fgets(students[id].phone, 15, stdin);
    students[id].phone[strcspn(students[id].phone, "\n")] = '\0';

    printf("Sua thong tin sinh vien thanh cong.\n");
}

void remove_student(struct Student students[], int *count) {
    if (*count == 0) {
        printf("Khong co sinh vien nao.\n");
        return;
    }

    int id;
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &id);
    getchar(); 

    if (id <= 0 || id > *count) {
        printf("ID khong hop le!\n");
        return;
    }

    for (int i = id - 1; i < *count - 1; i++) {
        students[i] = students[i + 1];
    }
    (*count)--;

    printf("Xoa sinh vien thanh cong.\n");
}

void search_student(struct Student students[], int count) {
    if (count == 0) {
        printf("Khong co sinh vien nao.\n");
        return;
    }

    char name[50];
    printf("Nhap ten can tim: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("%-4s %-30s %-4s %-15s\n", "ID", "Ten", "Tuoi", "SDT");
    for (int i = 0; i < count; i++) {
        if (strstr(students[i].name, name) != NULL) {
            printf("%-4d %-30s %-4d %-15s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
        }
    }
}

void sort_students(struct Student students[], int count) {
    if (count == 0) {
        printf("Khong co sinh vien nao.\n");
        return;
    }

    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Da sap xep sinh vien theo ten.\n");
    show_students(students, count);
}
