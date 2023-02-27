#include <stdio.h>
#include <ctype.h>
int main(){
	int a=0,b=0,c=0;
	char ch;
	fflush(stdin);	
	printf("Enter word: ");
	do{	
		ch=getchar();
		ch=toupper(ch);
		if (ch >= 'A'&&ch<= 'Z'){
			switch(ch)
			{			
				case 'U':
				case 'E':
				case 'O':
				case 'A':
				case 'I':
					a++;
					break;
			    default : b++;
			}
		}
		else c++;
	}
	while (ch !='\n');
	printf("The vowel: %d\n",a);
	printf("The consonant: %d\n",b);
	printf("The other: %d",c);	
	return 0;	
}	
				

