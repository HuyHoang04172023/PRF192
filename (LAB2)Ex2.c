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
