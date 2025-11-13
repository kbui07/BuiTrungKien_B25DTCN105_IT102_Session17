#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100];
    printf("Nhap chuoi A: ");
    fgets(A,100, stdin);
    printf("Nhap chuoi B: ");
    fgets(B,100, stdin);
    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';
    if (strstr(A, B) != NULL) {
        printf("Co\n");
    } else
        printf("Khong\n");  
    return 0;
}

