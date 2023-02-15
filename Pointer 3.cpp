//Viet chuong trinh doi cho 2 so nguyen dung ham

#include <stdio.h>
#include <stdlib.h>
void swap(int a, int b){  //pass by value
	int t = a;
	a = b;
	b = t;
}
void swap1 (int *a, int *b){  //pass by pointer -- reference
	int t = *a;
	*a = *b;
	*b = *t;
}
void swap2 (int *a, int *b){  //pass by address -- only for C++
	int t = a;
	a = b;
	b = t;
}
main(){
	int x = 5, y =3;
	printf("Before swap x = %d, y = %d\n", x,y);
//	swap(x,y);
	swap1(&x,&y);
	printf("After swap x = %d, y = %d\n",x,y);
}

