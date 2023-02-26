#include <stdio.h>
main (){
	int x,y;
	do{
		printf("Enter x, y: ");
		scanf("%d%d", &x,&y);
		int t=x;
		x=y;
		y=t;
		printf("Swap: x= %d, y = %d \n", x,y);
	}
	while (x!=0 && y!=0);
}
