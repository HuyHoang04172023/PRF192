#include <stdio.h>
#include <stdlib.h>
main (){
	int a, b, c;
	int *p= &a;
	printf("Input a =");
//	scanf("%d", &a);
	scanf("%d",p); //&a<=>p
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	*p = 20; // a <=> *p
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
}
