#include<Stdio.h>
main (){
	float a,b,c;
	printf("Nhap vao 2 so a, b:");
	scanf("%d%d",&a,&b);
	if(a>=0){
		printf("So can tim la:%g \n", -b/a);
	}
	else{
		printf("khong co dap an\n");
	}
} 
