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

	