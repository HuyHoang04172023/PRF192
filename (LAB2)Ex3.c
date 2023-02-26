#include <stdio.h>
main (){
	int x,sum = 0;
	printf("Enter numbers: ");
	do {
		scanf("%d", &x);
		if(x!=0) sum = sum + x;
	}
	while (x!=0);
	printf("Sum: %d", sum);
}
