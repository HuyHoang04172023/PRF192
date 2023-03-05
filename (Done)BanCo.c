//In tung dong theo i
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

//In tung dong theo n(lay i de tinh dong)
#include <stdio.h>
main () {
	int n,i,j;
	printf("Input = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=n;j++) printf(j==n?"+\n":"+ - ");
		for(j=0;j<=n;j++) printf(j==n?"|\n":"|   ");
	}
	for(j=0;j<=n;j++) printf(j==n?"+":"+ - ");
}



//In tung dong theo n(lay j de tinh dong)
#include <stdio.h>
main () {
	int n,i,j;
	printf("Input = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=0;j<n;j++) printf("+ - "); printf("+\n");
		for (j=0;j<n;j++) printf("|   "); printf("+\n");
	}
	for (j=0;j<n;j++) printf("+ - "); printf("+");
}


