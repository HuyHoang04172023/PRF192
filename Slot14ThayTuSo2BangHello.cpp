#include <stdio.h>
#include <string.h>
void trim(char s[]);
//chuan hoa chuoi, xoa bo cach dau tien va cuoi cung, giua cac tu chi co 1 dau cach
void split(char s[], char w[][31], int *n);
// tach chuoi s thanh mang cac tu w co do dai toi da 31, n la kich thuoc cua mang
void join(char w[][31], int n, char s[]);
//join mang tu w ve chuoi s
int checkStrxx(char s[]);
int checkStrxx(char s[]){
	return strlen(s)>=4;
}

//int checkStrxx(char s[]);
//dinh nghia it chat 30 loai tu khac nhau, viet ham checkStrxx de kiem tra va tra ve tu s co thoa man
//dinh nghia tren hay khong?
void sort(char w[][31],int n, int direction){
	char temp[31];
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (checkStrXX(w[i])&&checkStrXX(w[j])&&strcmp(w[i],w[j])>0){
				strcpy(temp,w[i]);
				strcpy(w[i],w[j]);
				strcpy(w[j],temp);
			}
		}
	}
}
main (){
	char s[10001];
	char w[100][31];
	int i,n;
	printf("Input string = ");
	gets(s);
	split(s,w,&n);
	for (i=0;i<n;i++){
		printf("(%s)\n",w[i]);
	}
//	strcpy(w[1],"Hello");
//	strcpy(w[3],"world");
	sort(w,n,0);
	join (w,n,s);
	printf("\nafter Join string = (%s)\n",s);
//	printf("Before trim s = (%s)\n",s);
//	trim(s);
//	printf("After trim s = (%s)\n",s);
}
void join(char w[][31], int n, char s[]){
	int i;
	if (n==0) s[0]= 0;
	else{
		strcpy(s,w[0]);
		for(i=1;i<n;i++){
			strcat(s," ");
			strcat(s,w[i]);
		}
	}
}
void split(char s[], char w[][31], int *n){
	int i,j,k;
	char s1[10001];
	strcpy(s1,s);
	for (i=0;i<strlen(s1);i++) if (s1[i]==9)s1[i] =32; i=0;
	while(s1[i]==32) i++; strcpy(&s1[0],&s1[i]);
	i = strlen(s1)-1;   while(s1[i]==32) i--;   s1[i+1] =0;
	for (i=0;i<strlen(s1);i++){
		if (s1[i]==32){
			strcpy(w[k],s1);
			w[k++][i] =0;
			j=i;
			while(s1[j]==32) j++;
			strcpy(&s1[0],&s1[j]);
			i=0; //the most important
		}
	}
	strcpy(w[k++],s1);
	*n = k;
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










