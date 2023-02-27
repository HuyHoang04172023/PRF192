#include <stdio.h>
void maxmin(int n){
	int max,min,t;
		t=n%10;
		n=n/10;
		max=min=t;
	while(n>0){
		t=n%10;
		n=n/10;
	if (min>t){min=t;
	}
	if (max<t){max=t;
	}
	}
	printf("max: %d\n",max);
	printf("min: %d",min);	
}
int main(){
	int n,e;
	e:;
	printf("enter the non-negative n: ");
	scanf("%d",&n);
	if (n>0){} else {printf("re-enter\n");goto e;
	}
	maxmin(n);
	
}
