#include <stdio.h>
main(){
	int n,i,j;
	printf("Enter the rows of half Pyramind:");
	scanf("%d",&n);
	for(i=n;n<0;) scanf("%d",&n);
	for(i = 1; i <= n; i++) {
	for(j = 1; j <= i; j++) printf("%d ",j);
	printf("\n");
	}
}

