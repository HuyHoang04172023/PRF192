//Them phan tu vao vi tri xac dinh trong mot mang xac dinh
#include <stdio.h>
main (){
	int a[1000];
	int n,i,value,index;
	printf("Input size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Array: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
	printf("Input value: ");
	scanf("%d",&value);
	printf("Input index: ");
	scanf("%d",&index);
	for(i=n;i>=index;i--) a[i]=a[i-1];
	a[index-1] = value;
	n++;
	printf("New array: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
}



//Them phan tu vao vi tri xac dinh trong mot mang bat ky
#include <stdio.h>
main (){
	int a[1000];
	int id,n=0,i,value,index;
	printf("Input student ID: ");
	scanf("%d",&id);
	for(i=id;i!=0;i=i/10) n++;
	for(i=n-1;i>=0;i--){
		a[i]=id%10;
		id=id/10;
	}
	printf("Array: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
	printf("Input value: ");
	scanf("%d",&value);
	printf("Input index: ");
	scanf("%d",&index);
	for(i=n;i>=index;i--) a[i]=a[i-1];
	a[index-1] = value;
	n++;
	printf("New array: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
}


















