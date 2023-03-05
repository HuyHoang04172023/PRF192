#include <stdio.h>
int main() {
    char str[100];
    int i,sum = 0;
    printf("Nhap chuoi ky tu: ");
    gets(str); 
    for (i = 0; str[i] != '\0'; i++) if (str[i] >= '0' && str[i] <= '9') sum += str[i] - '0';
    printf("Tong cac ky tu so trong chuoi la: %d\n", sum);
    return 0;
}

