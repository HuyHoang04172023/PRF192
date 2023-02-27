#include <stdio.h>
int check(int n){
	int t1=1,t2=2,f=1;
	if (n==1) printf("n is fibonancci element");
	while (f<n){
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	if (n==f) printf("n is fibonancci element");
 	else printf("n is not fibonancci element");
}

int main(){
	int n,e;
	e:;
	printf("enter the positive integer: ");
	scanf("%d",&n);
		if (n>0){} else {printf("negative number ! please re-enter\n");goto e;
	}
	if(check(n));
}
