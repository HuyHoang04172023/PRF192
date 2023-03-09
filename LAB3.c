
//EX1
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

//Ex2
#include <stdio.h>
int main(){
	int m,y,d,e,n;
	e:;
	printf("enter the day: ");
	scanf("%d",&n);
	printf("enter the month: ");
	scanf("%d",&m);
	printf("enter the year: ");
	scanf("%d",&y);
	if(n<=31&&n>1&&m>=1&&m<=12){}else 
		{printf("error!please re-enter :\n");goto e;
	}
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{printf(" valid date\n",m);		
	} else if (m==4||m==6||m==9||m==11) 
		{printf(" valid date\n",m);
 }
	else if (m==2){if (n>=1&&n<=28||y%400==0){
	
		printf("valid date") ;}
		else {printf("invalid date");}}

}

//Ex3
#include <stdio.h>
int main(){
	double x,y,r,d2;
	printf("enter the radius r: ");
	scanf("%lf",&r);
	printf("enter the x of the point: ");
	scanf("%lf",&x);
	printf("enter the y of the point: ");
	scanf("%lf",&y);
	printf("the point is (%.2f,%.2f)\n",x,y);
	
	d2=x*x+y*y;
	if(d2>r*r)
		{printf("the point is out of the circle");
	}else if(d2<r*r)
		{printf("the point is in the circle");}
	else if(d2==r*r)
	{printf("the point is on the circle");}
	}

//Ex4
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

//Ex5
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

//Ex6
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

//Ex7
#include <stdio.h>
int sum(int n){
	int s,t=0;
	do {
		s=n%10;
		t=t+s;
		n=n/10;	
}
	while(n>0);
	printf("sum of digits: %d\n",t);
}
int main(){
	int n;
	do{	
	printf("enter the number: ");
		scanf("%d",&n);
		
	if (n<0){
	break;}
		if (sum(n));
}
	while(n>0);
}

//Ex8
#include <stdio.h>
int main() {
	int x,e;
	float s,y;
	e:;
	printf("enter the part: ");
	scanf("%d",&x);
	printf("enter the fraction: ");
	scanf("%f",&y);
	if(y<0) {printf("wrong fraction!re-enter\n");goto e;
	}
	while(y>=1){y=y/10;
	}
	if(x<0){s=x-y;
	}
	else {s=x+y;
	}
	printf("number: %.2f",s);
}


//Ex9
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

//Ex10
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
