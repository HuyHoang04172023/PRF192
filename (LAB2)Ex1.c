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
