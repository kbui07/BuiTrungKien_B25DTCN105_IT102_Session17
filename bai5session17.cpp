#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int flag = 1;
    printf("Nhap chuoi thu nhat: ");
    fgets(str1, 100, stdin);
    printf("Nhap chuoi thu hai: ");
    fgets(str2, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (strlen(str1) != strlen(str2)) {
        printf("Khac nhau\n");
        return 0;
    }
    for (int i = 0; i < strlen(str1); i++) {
        if (toupper(str1[i]) != toupper(str2[i])) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("Giong nhau\n");
    } else
        printf("Khac nhau\n");
    return 0;
}

