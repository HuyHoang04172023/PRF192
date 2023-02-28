
//Hay in ra hinh vuong dac co kich thuoc n bang ky tu "*".
#include <stdio.h>
int main(){
	int n,i,j;
	printf("Enter the length of the square: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) printf("* ");
		printf("\n");
	}
}


//Hay in ra hinh vuong rong co kich thuoc n xn, bang ky tu "*".
#include <stdio.h>
int main(){
	int n,i,j;
	printf("Enter the length of the square: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){ 
		for(j=0;j<n;j++) printf ((i==0 || i==n-1 || j==0 || j==n-1)?"* ":"  "); 
		printf("\n");
	}
}

