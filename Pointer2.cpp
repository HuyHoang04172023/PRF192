#include <stdio.h>
#include <stdlib.h>
main (){
	int a=10, b=20, c=30,d=40,e=50,i;
	int *p= &a;
//	a=10; b=20; c=30;
	printf("Address a = %d, b= %d, c=%d, d=%d, e=%d\n", &a, &b, &c,&d,&e);
	printf("Value a = %d, b = %d, c = %d\n", a,b,c);
//	p -=2;
//	*p = 100;
//	printf("Value a = %d. b = %d, c = %d\n",a,b,c);
	for(i=0;i<5;i++){
		printf("%d,",*(p-i));
	}
}
