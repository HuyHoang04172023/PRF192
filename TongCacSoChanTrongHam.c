#include <stdio.h>
main(){
	int a[10],sum=0,i;
	for(i=0;i<6;i++) scanf("%d",&a[i]);
	for(i=0;i<6;i++) if(a[i]%2==0) sum += a[i];
	printf("%d",sum);
}
