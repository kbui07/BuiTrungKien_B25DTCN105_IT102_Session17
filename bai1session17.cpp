#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char reverse[100];
	printf("Nhap chuoi: ");
	fgets(str,100,stdin);
	str[strcspn(str, "\n")]='\0';
	strcpy(reverse, str);
	strrev(reverse);
	if (strcmp(str, reverse) == 0)
        printf("La palindrome");
    else
        printf("Khong phai palindrome");

	return 0;
}
