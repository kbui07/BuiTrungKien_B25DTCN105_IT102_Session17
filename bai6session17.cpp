#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi bat ky: ");
    fgets(str,100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int maxLength = 0;
    char longestWord[100] = "";
    int i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ') i++;
        char word[100] = "";
        int len = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[len] = str[i];
            len++;
            i++;
        }
        word[len] = '\0';
        if (len > maxLength) {
            maxLength = len;
            strcpy(longestWord, word);
        }
    }
    printf("Tu dai nhat: %s\n", longestWord);
    printf("Do dai: %d\n", maxLength);
    return 0;
}

