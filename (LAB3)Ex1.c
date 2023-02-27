#include <stdio.h>
#include <math.h>
int a(int n) {
	int m;
	m=sqrt(n);
	int i;	
	for (i=2;i<=m;i++){
		if(n%i==0) 
		return 0;	
			}
	return 1;
}
int main() {
	int n,e,i;
	e:;
	printf("enter the positive integer: ");
	scanf ("%d",&n);
	if (n>=2) {} else {printf("error! please re-enter\n");goto e;
	}
	printf("the primes between 2 and %d: ",n);
	for (i=2;i<=n;i++){
		if (a(i)) printf(" %d",i);
	}
	

}

