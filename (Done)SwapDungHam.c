#include <stdio.h>
void swap(int *a, int *b){	
	int temp = *a;
	*a = *b;
	*b = temp;
}
main (){
	int a,b;
	printf("Enter 2 numbers want swap: ");
	scanf ("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swap a = %d, b = %d ", a,b);
}
 
