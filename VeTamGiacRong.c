//Goc phan tu thu nhat
#include<stdio.h>
main (){
	int n,i,j;
	printf("Enter the length of triangle:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++) printf ((i==n-1)?"* ":(j==0 || j==i)?"* ":"  ");
		printf("\n");
	}
}

//Goc phan tu thu 2
#include<stdio.h>
main (){
	int n,i,j;
	printf("Enter the length of triangle:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--) printf((i==n-1)?"* ":(j==i || j==0)?"* ":"  ");	
		printf("\n");
	}
}

//Goc phan tu thu 3
#include<stdio.h>
main (){
	int n,i,j;
	printf("Enter the length of triangle:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) printf((i==0)?"* ":(j<i)?"  ":(j==i || j==n-1)?"* ":"  ");
		printf("\n");
	}
}

//Goc phan tu thu 4
#include<stdio.h>
main (){
	int n,i,j;
	printf("Enter the length of triangle:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n;j>0;j--) printf((i==0)?"* ":(j<=i)?"  ":(j==i+1 || j==n)?"* ":"  ");
		printf("\n");
	}
}
