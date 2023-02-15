#include<Stdio.h>
main (){
	int a,b,c;
	printf("Nhap vao 2 so a, b:");
	scanf("%d%d",&a,&b);
	if(a>=0){
		printf("So can tim la:%d \n", -b/a);
	}
	else{
		printf("khong co dap an\n");
	}
} 
