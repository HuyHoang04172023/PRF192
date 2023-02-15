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


//Vi du 1 and 3  
//#include <stdio.h>
//main (){
//	int n,i;
//	int a[1000];
//	printf("Input size of array:");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("a[%d] =", i);
//		scanf("%d",&a[i]);
//	}
//	printf("\nOUTPUT\n");
//	for(i=0;i<n;i++){
//		printf("%d: ",a[i]);
//	} 
//}
