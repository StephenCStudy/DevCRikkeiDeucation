#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void quicksort(struct Student std[], int low, int high);
int partition(struct Student std[], int low, int high);
void swap(struct Student *a, struct Student *b);
void print_std_list(struct Student std[], int size);

int main() {
    struct Student student_list[5] = {
        {1, "BNguyen Van Mot", 18, "0987654321"},
        {2, "DNguyen Van Hai", 19, "0978123456"},
        {3, "CNguyen Van Ba", 20, "0901234567"},
        {4, "ANguyen Van Bon", 21, "0912345678"},
        {5, "HNguyen Van Nam", 22, "0923456789"}
    };

    int currentLength = 5;

    print_std_list(student_list, currentLength);

    quicksort(student_list, 0, currentLength - 1);

    print_std_list(student_list, currentLength);

    return 0;
}

void quicksort(struct Student std[], int low, int high) {
    if (low < high) {
        int pi = partition(std, low, high);
        quicksort(std, low, pi - 1);
        quicksort(std, pi + 1, high);
    }
}

int partition(struct Student std[], int low, int high) {
    struct Student pivot = std[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (strcmp(std[j].name, pivot.name) < 0) {
            i++;
            swap(&std[i], &std[j]);
        }
    }
    swap(&std[i + 1], &std[high]);
    return (i + 1);
}

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void print_std_list(struct Student std[], int size) {
    printf("%-4s %-30s %-15s %10s\n", "ID", "Name", "Age", "Phone_Number");
    for (int i = 0; i < size; i++) {
        printf("%-4d %-30s %-15d %10s\n", std[i].id, std[i].name, std[i].age, std[i].phoneNumber);
    }
}
