#include <stdio.h>
#include <string.h>
main (){
	char name [31] = "Nguyen Van A";
	char s1[101];
	puts(name); 
	printf(name);
	printf("\nTen toi la %s\n", name);
	printf("Input your name =");
//	scanf("%s",name);
	gets(name);
	printf("new name = %s \n", name);
	printf("leng = %d \n", strlen(name));
	strcpy(s1,name);
//	strcat(s1,"||");
//	strcat(s1,name);
	printf("So sanh s va name= %d", strcmp(s1,name));
	strupr(s1);
	puts(s1);
	strlwr(s1);
	puts(s1);
//	puts(s1);
}
