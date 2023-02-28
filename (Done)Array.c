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
	for(i=0;i<n;i++) printf("%d: ",a[i]);
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
	for(i=0;i<n;i++) printf(i==0?"%d ":": %d " ,a[i]);
}


//Vi du 3
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
	for(i=0;i<n;i++) printf("%d :",a[i]);
}


//Vi du 4
#include <stdio.h>
main(){
	int n,i;
	int a[1000];
	printf("Size of array: ");
	scanf("%d", &n);
	for (i=0;i<n;i++) printf("a[%d] =", i),scanf("%d", &a[i]);
	int chan=0;
	for(i=0;i<n;i++) if (a[i]%2==0) printf(chan==0?"%d ":": %d ",a[i]),chan++;
}



//Vi du 5 va 6
#include <stdio.h>
main (){
	int a[1000];
	int n,i,max=a[0],min=a[0];
	printf("Enter size of array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) if(a[i]>max) max=a[i];
	for (i=0;i<n;i++) if(a[i]<min) min=a[i];
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("First value: %d\n", a[0]);
	printf("Final value: %d\n", a[n-1]);
}

//Vi du 7 va 8
#include <stdio.h>
main (){
	int a[1000];
	int n,i,trungbinh=0;
	float average=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (a[i]%2==0) {
			average=average + a[i];
			trungbinh++;
		}
	}
	average = average/trungbinh;
//	average = average/n; //chia trung binh ca mang
	printf("The average value of the array: %f\n", average);
}
