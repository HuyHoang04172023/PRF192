#include <stdio.h>
#include <string.h>
void trim(char s[]);
//chuan hoa chuoi, xoa bo cach dau tien va cuoi cung, giua cac tu chi co 1 dau cach
main (){
	char s[10001];
	printf("Input string = ");
	gets(s);
	printf("Before trim s = (%s)\n",s);
	trim(s);
	printf("After trim s = (%s)\n",s);
}
void trim(char s[]){
	int i;
	char *p;
	for (i=0;i<strlen(s);i++) //hinh nhu la xoa tab
	if (s[i]==9) s[i]=32;
	i = 0; //hinh nhu la xoa tab
	while(s[i]==32) i++; //32 ma ASCII cuar space
	//tim ky tu dau tien khong phai la dau cach
	strcpy(&s[0],&s[i]); //string bat dau tu vi tri thu i
	i = strlen(s)-1;
	while(s[i]==32) i--; //tim ky tu cuoi cung khong phai la dau cach
	s[i+1] =0; //cat bo toan bo dau cach o cuoi
	p = strstr(s,"  "); //hai dau cach
	while(p!=NULL){
		strcpy(p,p+1);
		p = strstr(s,"  ");
	}
}










