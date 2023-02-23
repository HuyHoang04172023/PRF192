#include <stdio.h>
main (){
	float a, b;  //int if want to print integer
	printf("Enter 2 numbers a and b: ");
	scanf("%f%f",&a, &b);
	printf("Tong: %g \n", a + b);	
	printf("Hieu: %g \n", a - b);	
	printf("Tich: %g \n", a * b);	
	printf("Thuong: %g \n", a / b);	
}
