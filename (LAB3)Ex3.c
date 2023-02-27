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
	

