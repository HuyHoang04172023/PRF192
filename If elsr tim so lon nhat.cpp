#include<Stdio.h>
main (){
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d",&a);
	printf("Nhap vao so b:");
	scanf("%d",&b);
	if(a>b){
		printf("So lon la:%d \n", a);
		printf("So be la:%d \n", b);
	}
	else{
		printf("So lon la:%d \n", b);
		printf("So be la:%d \n", a);
	}
} 
