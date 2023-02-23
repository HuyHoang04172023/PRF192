#include <stdio.h>
main (){
	int n,i;
	int a[1000];
	printf("Input size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d] =", i);
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT\n");
	for(i=0;i<n;i++){
		printf("%d: ",a[i]);
	} 
	printf("%d",a[i]);
	printf("\n");
	system("pause");
}


//Vi du 1 and 2 
#include <stdio.h>
main(){
	int n,i;
	int a[1000];
	printf("Size of array: ");
	scanf("%d", &n);
	for (i=0;i<n;i++){
		printf("a[%d] =", i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++) {
		if (i==n-1) printf("%d" ,a[i]);
		else printf("%d : ",a[i]);
	}
}

//Vi du 3 va 4
#include <stdio.h>
main(){
	int n,i;
	int a[1000];
	printf("Size of array: ");
	scanf("%d", &n);
	for (i=0;i<n;i++){
		printf("a[%d] =", i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++) {
		if (a[i]%2==0) {
			if () printf("%d ",a[i]);
			else printf("%d :",a[i]);
		}
	}
}
