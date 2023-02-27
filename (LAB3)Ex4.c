#include<stdio.h>
int main(){
	int n,i,e=1;
	f:;
	printf("enter the positive integer n: ");
	scanf("%d",&n);
	if(n<0){printf("re-enter\n");goto f;}
	for (i=1;i<=n;i++){e=e*i;
	}
	printf("the factorials: ");
	printf("%d",e);
}
