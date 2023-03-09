//Ex1
#include <stdio.h>
main (){
	double a,b,result;
	char op;
	printf("Enter an expression: ");
	scanf("%lf%c%lf",&a,&op,&b);
	switch (op)
	{
		case '+':
			{
				result=a+b;
				printf("Result: %lf", result);
				break;
			}
		case '-':
			{
				result=a-b;
				printf("Result: %lf", result);
				break;
			}
		case '*':
			{
				result=a*b;
				printf("Result: %lf", result);
				break;
			}
		case '/':
			{
				if(b==0) printf("Error");
				else{
				result=a/b;
				printf("Result: %lf", result);
				break;
				}
			}
		default: printf ("Operator is not supported");
	}
}

//Ex2
#include <stdio.h>
main (){
	double month,income;
	int dep,pa=9000000,pd=3600000;
	printf("Enter your income in one month:");
	scanf("%lf", &month);
	income = month*12;
	printf("Your income of this year: %lf", income);
	printf("\nEnter number dependent:");
	scanf("%d", &dep);
	double tf,ti;
	tf = 12*(pa+dep*pd);
	printf("Tax-free income: %lf", tf);
	ti = income - tf;
	if (ti<0) printf("\nTaxable income: 0");
	else printf("\nTaxable income: %lf", ti);
	double ic;
	if (ti<0) ic=0;
	else if (ti<=5000000) ic = ti*0.05;
	else if (ti<=10000000) ic = ti*0.1;
	else if (ti<=18000000) ic = ti*0.15;	
	else ic = ti*0.2;
	printf("\nIncome tax: %lf", ic);
}

//Ex3
#include <stdio.h>
main (){
	int x,sum = 0;
	printf("Enter numbers: ");
	do {
		scanf("%d", &x);
		if(x!=0) sum = sum + x;
	}
	while (x!=0);
	printf("Sum: %d", sum);
}

//Ex4
#include <stdio.h>
main (){
	int x,y;
	do{
		printf("Enter x, y: ");
		scanf("%d%d", &x,&y);
		int t=x;
		x=y;
		y=t;
		printf("Swap: x= %d, y = %d \n", x,y);
	}
	while (x!=0 && y!=0);
}

//Ex5
#include <stdio.h>
#include <ctype.h>
int main(){
	int a=0,b=0,c=0;
	char ch;
	fflush(stdin);	
	printf("Enter word: ");
	do{	
		ch=getchar();
		ch=toupper(ch);
		if (ch >= 'A'&&ch<= 'Z'){
			switch(ch)
			{			
				case 'U':
				case 'E':
				case 'O':
				case 'A':
				case 'I':
					a++;
					break;
			    default : b++;
			}
		}
		else c++;
	}
	while (ch !='\n');
	printf("The vowel: %d\n",a);
	printf("The consonant: %d\n",b);
	printf("The other: %d",c);	
	return 0;	
}	

//Ex6
#include <stdio.h>  
int main()  
{  
    int i = 0;
    char ch;
	for(i=0;i<=255;i++){	       
		printf("%c:     %d     %o     %x \n",i,i,i,i);
		if(i!=0 && i%20==0) getchar();
	}
	return 0;   
}  

//Ex7
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
