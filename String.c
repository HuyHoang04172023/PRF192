#include <stdio.h>
main (){
	char name [31] = "Nguyen Van A";
	puts(name); 
	printf(name);
	printf("\nTen toi la %s\n", name);
	printf("Input your name =");
//	scanf("%s",name);
	gets(name);
	printf("new name = %s \n", name);
}
