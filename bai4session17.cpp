#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char n;
	printf("Nhap chuoi: ");
	fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';
	printf("Nhap ky tu can xoa: ");
	scanf("%c",&n);
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if (str[i]==n) {
			for(int j=i;j<len;j++) {
				str[j]=str[j+1];
			}
			i--;
			len--;
		}
	}
	printf("%s",str);
	return 0;
}
