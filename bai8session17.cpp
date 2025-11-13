#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char pass[100];
    printf("Nhap mat khau: ");
    fgets(pass, 100, stdin);
    pass[strcspn(pass, "\n")] = '\0';
    int length = strlen(pass);
    if (length < 8) {
        printf("Khong hop le\n");
        return 0;
    }
    int upper = 0;
    int lower = 0;
    int number = 0;
    int special = 0;
    for (int i = 0; i < length; i++) {
        char c = pass[i];
        if (isupper(c)) {
            upper = 1;
        } 
        else if (islower(c)) {
            lower = 1;
        } 
        else if (isdigit(c)) {
            number = 1;
        } 
        else {
            special = 1;
        }
    }
    if (upper && lower && number && special) {
        printf("Hop le\n");
    } else {
        printf("Khong hop le\n");
    }
    return 0;
}

