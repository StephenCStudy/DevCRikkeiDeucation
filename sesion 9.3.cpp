#include <stdio.h>

int main() {
    int arr[100]; 
    int currentLength = 0;     
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &currentLength);
    if (currentLength > 100 || currentLength < 1) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    
    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	  
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

    return 0;
}
