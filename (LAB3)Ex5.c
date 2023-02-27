#include <stdio.h>
double fibo (int n){
	int t1=1,t2=1,f=0,i,s1=1,s2=1;
	printf(" %d %d",s1,s2);
	for (i=3;i<=n;i++){
		f=t1+t2;
		t1=t2;
		t2=f;		
	printf(" %d",f);
	}
	printf("\n");
	printf("fibonancci %dth: %d",n,f);		
	return f;
}

int main () {
	int n,e;
	e:;
	printf("enter the position n : ");
	scanf("%d",&n);
	if(n>0){}else {
	printf("wrong n!\n");goto e;}
	printf("the fibonacci sequence: ");
	(fibo(n));
}
