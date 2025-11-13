#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice;

    printf("Nhap 1 chuoi bat ky: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("----- MENU -----\n");
    printf("1. Chuyen thanh chu hoa\n");
    printf("2. Chuyen thanh chu thuong\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);
    if (choice == 1) {
        for (int i = 0; i < strlen(str); i++) {
            str[i] = toupper(str[i]);
        }
        printf("%s",str);
    } 
    else if (choice == 2) {
        for (int i = 0; i < strlen(str); i++) {
            str[i] = tolower(str[i]);
        }
        printf("%s",str);
    } 
    else {
        printf("Lua chon khong hop le!");
    }
    return 0;
}


