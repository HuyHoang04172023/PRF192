#include <stdio.h>
main(){
	int t;
	printf("Nhap vao goc phan tu muon in:");
	scanf("%d",&t);
	switch (t)
	{
		case 1:
			{
				int n,i,j;
   				printf("Ve tam giac sao vuong can:");
   				scanf("%d",&n);
   				for(i = 1; i <= n; i++) {
      				for(j = 1; j <= i; j++) printf("* ");
      				printf("\n");
			 	}
			 	break;
			}
		case 2:
			{
				int n,i,j;
				printf("Ve tam giac sao vuong can:");
				scanf("%d",&n);
				for(i = n; i >= 0; i--) {
					for(j=0; j<i ; j++) printf("  ");
					for(j=i; j < n; j++) printf(" *");
					printf("\n");
			    }
			    break;  
			}
		case 3:
			{
				int n, i, j;
				printf("Ve tam giac sao vuong can:");
				scanf("%d",&n);
				for(i = 0; i < n; i++) {
					for(j=0; j<i; j++) printf("  "); 
					for(j=i; j < n; j++) printf(" *");
					printf("\n");
				}
				break;
		    }
		case 4:
			{
				int n, i, j;
				printf("Ve tam giac sao vuong can:");
   				scanf("%d",&n);
   				for(i = n; i >= 1; i--) {
   					for(j = 1; j <= i; j++) printf("* ");
   					printf("\n");
				}
				break;
			}
	}
}
