#include <stdio.h>
int main() {
	int x,e;
	float s,y;
	e:;
	printf("enter the part: ");
	scanf("%d",&x);
	printf("enter the fraction: ");
	scanf("%f",&y);
	if(y<0) {printf("wrong fraction!re-enter\n");goto e;
	}
	while(y>=1){y=y/10;
	}
	if(x<0){s=x-y;
	}
	else {s=x+y;
	}
	printf("number: %.2f",s);
}
