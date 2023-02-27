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
