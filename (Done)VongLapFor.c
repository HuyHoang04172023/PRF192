// Nhap vao 1 so nguyen n, in ra so doi xung cua no
#include <stdio.h>
main() {
    int n, remainder, reversed = 0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for (;n!=0;remainder=n%10,reversed = reversed * 10 + remainder,n = n / 10);
    printf("The reverse of the original number is: %d", reversed);
    return 0;
}



// Nhap vao 1 so nguyen n, tinh tong cac chu so xuat hien trong n
#include <stdio.h>
main() {
    int n, sum = 0;
    printf("Enter one number:");
    scanf("%d", &n);
    for(;n;sum += n%10, n/=10);
    printf("Sum: %d\n", sum);
    return 0;
}



// Hay tinh va tra ve tong 5 so nguyen chan gan voi n va nho hon n
#include <stdio.h>
main (){
	int n,i,tong = 0;
	printf("Enter number n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++) if(n-i<=9) (i%2==0)? tong = tong + i : tong = tong;
	printf("Tong:%d",tong);
} 



// Hay tinh va tra ve tong cac so chan (le) trong khoang tu 0 cho den n
#include <stdio.h>
main (){
	int n,i,tong=0;
	printf("Enter number n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++) (i%2!=0)? tong = tong + i : tong = tong;
	printf("Tong:%d",tong);
} 
