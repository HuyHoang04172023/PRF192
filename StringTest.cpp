#include <stdio.h>
#include <string.h>
//int checkStrxx(char s[]);
//dinh nghia it nhat 30 loai tu khac nhau, viet ham checkStr xx (00->99) de kiem tra va tra ve chuoi 
//s co thoa man dinh nghia tren hay khong?
//VD: kiem tra xem chuoi s co it nhat, nhieu nhat, chinh xac, 1,2,3 nguyen am
//kiem tra xem chuoi s co bat dau/ket thuc bang nguyen am, viet hoa/thuong

int mystrcmp(char s1[], char s2[]);
void mystrcat(char s1[],char s2[]);
main (){
	char name [31] = "Nguyen Van A";
	char s1[101];
	puts(name); 
	printf("input s1 = ");
	gets(s1);
	mystrcat(name, s1);
	printf("\n%s",name);
//	printf(name);
//	printf("\nTen toi la %s\n", name);
//	printf("Input your name =");
////	scanf("%s",name);
//	gets(name);
//	printf("new name = %s \n", name);
//	printf("leng = %d \n", strlen(name));
//	strcpy(s1,name);
////	strcat(s1,"||");
////	strcat(s1,name);
//	printf("So sanh s va name= %d", strcmp(s1,name));
//	strupr(s1);
//	puts(s1);
//	strlwr(s1);
//	puts(s1);
////	puts(s1);

}


void mystrcat(char s1[],char s2[]){
	char temp[1000];
	int i,j,n;
//	strcpy(temp,s2);
//	strcpy(temp,s1);
//	strcpy(s1,temp);
	for(i=0;i<=strlen(s2);i++)
	temp[i] = s2[i];
	n = strlen(s2);
	for(i=0; i<=strlen(s1);i++)
	temp[i+n] = s1[i];
	strcpy(s1,temp);
}
int mystrcmp(char s1[], char s2[]){
	int i=0;
	while(i<strlen(s1) && i<strlen(s2)){
		if (s1[i] !=s2[i]){
			return s1[i]>s2[i]?1:-1;
		}else i++;
	}
	return strlen(s1)==strlen(s2)?0:(strlen(s1)>strlen(s2)?1:-1);
	
}
