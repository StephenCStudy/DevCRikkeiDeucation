#include <stdio.h>
#include <iostream>

int main() {
	
    int arr[100];
    int currentLength = 0;
    int choice;

    do {
        printf("===== MENU =====\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");	
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        // tat menu hien thi.
        system("cls");

        switch (choice) {
            case 1:
            printf("Nhap so phan tu muon nhap (toi da 100): ");
            scanf("%d", &currentLength);
        if (currentLength > 100 || currentLength < 1) {
            printf("So phan tu khong hop le!\n");
            return 0;
           }
    
        for (int i = 0; i < currentLength; i++) {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
           }
                break;
            case 2:
            printf("Mang da co:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
           }
            printf("\n");
                break;
            case 3:
        int value, addIndex;
            printf("Nhap gia tri muon them: ");
            scanf("%d", &value);
            printf("Nhap vi tri muon them (0-%d): ", currentLength);
            scanf("%d", &addIndex);
        if (addIndex < 0 || addIndex >= 100) {
            printf("Vi tri khong hop le!\n");
             return 1;
           }
     
        if (addIndex >= currentLength) {
           arr[addIndex] = value;
           currentLength = addIndex + 1;
           } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
           }
           arr[addIndex] = value;
           currentLength++;
           }

    
           printf("Mang sau khi them phan tu moi:\n");
        for (int i = 0; i < currentLength; i++) {
           printf("%d ", arr[i]);
           }
           printf("\n");    
                break;
            case 4:
            int index, newValue;
 
           printf("Nhap vi tri can sua (0-%d): ", currentLength - 1);
           scanf("%d", &index);
        if (index < 0 || index >= currentLength) {
           printf("Vi tri khong hop le!\n");
           break;
           }

           printf("Nhap gia tri moi: ");
           scanf("%d", &newValue);
           arr[index] = newValue;
        
                break;
            case 5:
            int  DelIndex;
            printf("Nhap vi tri muon xoa (0-%d): ", currentLength - 1);
            scanf("%d", &DelIndex);

        if (DelIndex < 0 || DelIndex >= currentLength){
	        printf("Vi tri khong hop le!\n"); 
	        return 1;
            }
    
        for (int i = DelIndex; i < currentLength - 1; i++){
	        arr[i] = arr[i + 1]; 
	        } 
	        currentLength--;
    
    
            printf("Mang sau khi xoa phan tu:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
            }
            printf("\n");    
                break;
            case 6:
                return 1;
            default: 
            printf("lua chon lai.\n");
            break;
                
        }
    } while (choice != 6);

    return 0;
}

