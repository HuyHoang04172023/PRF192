#include <stdio.h>
main (){
	int n,i,j;
	printf("Input n = ");
	scanf("%d", &n);
	for(i=0;i<2*n+1;i++){
		for (j=0;j<2*n+1;j++){
		if (i%2==0&&j%2==0) printf("+");
		if (i%2==0&&j%2!=0) printf(" - ");
		if (i%2!=0&&j%2==0) printf("|");
		if (i%2!=0&&j%2!=0) printf("   ");
		}
		printf("\n");
	}
		
}

