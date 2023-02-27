#include <stdio.h>
int gcd(int a,int b){
	while (a!=b){
		if(a>b){a=a-b;
		} else {b=b-a;
		}
		}
		return a;
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
int main(){

	int x,y,e;
	e:;
	printf("enter the positive integer x: ");
	scanf("%d",&x);
	printf("enter the positive integer y: ");
	scanf("%d",&y);
	if (x>0&&y>0){} else {printf("re-enter\n");goto e;
}
	int d,m;
	d=gcd(x,y);
	m=lcm(x,y);
	printf("greatest common divisor: %d\n",d);
	printf("least common multiple: %d",m);
	return 0;
	}
