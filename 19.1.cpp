#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void add_student(struct Student std[], int *size, int id, const char *name, int age, const char *phoneNumber);
void delete_student(struct Student std[], int id, int *size);
void print_student_list(struct Student std[], int size);

int main() {
    struct Student student_list[10]; 
    int currentLength = 0;

    
    add_student(student_list, &currentLength, 1, "Nguyen Van A", 18, "0987654321");
    add_student(student_list, &currentLength, 2, "Nguyen Van B", 22, "0978123456");
    add_student(student_list, &currentLength, 3, "Nguyen Van C", 34, "0901234567");
    add_student(student_list, &currentLength, 4, "Nguyen Van D", 29, "0912345678");
    add_student(student_list, &currentLength, 5, "Nguyen Van AE", 22,"0923456789");

    print_student_list(student_list, currentLength);

    int id_to_delete;
    printf("Nhap vao id muon xoa: ");
    scanf("%d", &id_to_delete);

    delete_student(student_list, id_to_delete, &currentLength);

    print_student_list(student_list, currentLength);

    return 0;
}

void add_student(struct Student std[], int *size, int id, const char *name, int age, const char *phoneNumber) {
    std[*size].id = id;
    strcpy(std[*size].name, name);
    std[*size].age = age;
    strcpy(std[*size].phoneNumber, phoneNumber);
    (*size)++;
}

void delete_student(struct Student std[], int id, int *size) {
    int index = -1;
    for (int i = 0; i < *size; i++) {
        if (std[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Sinh vien id %d khong ton tai.\n", id);
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        std[i] = std[i + 1];
    }
    (*size)--;
    printf("Xoa thanh cong\n");
}

void print_student_list(struct Student std[], int size) {
    printf("%-4s %-30s %-15s %10s\n", "ID", "Name", "Age", "Phone_Number");
    for (int i = 0; i < size; i++) {
        printf("%-4d %-30s %-15d %10s\n", std[i].id, std[i].name, std[i].age, std[i].phoneNumber);
    }
}
