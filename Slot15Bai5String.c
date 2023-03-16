#include <stdio.h>
#include <string.h>
void f3(char s[], int *max, int *min);
main (){
	char s[1000];
	int i,n,max,min;
	printf("Input string = :");
	gets(s);
	f3(s,&max,&min);
	printf("Max = %d\nMin = %d\n",max,min);
}

void f3(char s[], int *max, int *min){
	int i,j,n;	
	int m1 = 1; //max
	int m2 = 1; //min
	m1 = m1<<31; // - vo cung
	m2 = ~m1; // + vo cung
//	m1 = 0b10000000000000000000000000000000;
//	m2 = 0b01111111111111111111111111111111;
	for (i=0;i<strlen(s);i++){
		if (s[i]>47 && s[i]<58){
			n = s[i]-48;
			j = i+1;
			while(s[j]>47 && s[j]<58){
				n = n*10+s[j]-48;
				j++;
			}
			if (n>m1) m1 = n;
			if (n<m2) m2 = n;
		}
	}
	*max = m1;
	*min = m2;
}
