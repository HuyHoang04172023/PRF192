#include <stdio.h>  
int main()  
{  
    int i = 0;
    char ch;
	for(i=0;i<=255;i++){	       
		printf("%c:     %d     %o     %x \n",i,i,i,i);
		if(i!=0 && i%20==0) getchar();
	}
	return 0;   
}  
