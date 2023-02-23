#include<Stdio.h>
main (){
	int a,b,c, max, min;
	printf("Enter 3 numbers a,b,c:");
	scanf("%d %d %d",&a, &b, &c);	
	max = a>c?(a>b?a:b):(c>b?c:b);
	min = a<c?(a<b?a:b):(c<b?c:b);
	printf("Max:%d\n", max);
	printf("Min:%d", min);
}

//#include<Stdio.h>
//main (){
//	int a,b,c, max;
//	printf("Enter 3 numbers a,b,c:");
//	scanf("%d %d %d",&a, &b, &c);
//	if(a>b) max = a>c?a:c;
//	else max = b>c?b:c;
//	printf("Max:%d", max);
//}
