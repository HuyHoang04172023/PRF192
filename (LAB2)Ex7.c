#include<stdio.h>
int main(){
	char c1,c2,t,c;
	int d;
	printf("Enter the character 1: ");
	scanf(" %c",&c1);
	printf("Enter the character 2: ");
	scanf(" %c",&c2);
	if(c1>c2){
		t=c1;
		c1=c2;
		c2=t;
	}
	d=c2-c1;
	printf("Output: %d\n",d);
	for (c=c1;c<=c2;c++){
	printf("character: %c , decimal: %d , octal: %o , hexadecimal: %x\n",c,c,c,c);
	}
return 0;

}
