#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input(int a[], int *n);
void output(int a[], int n);
int findIndex(int a[], int n, int p, int k, int from);
void insert(int a[], int *n, int index, int value);
int check(int n);
main(){
	int a[1000],n,index;
	input(a,&n);
	output(a,n);
	index = findIndex(a,n,3,2,0);
	insert(a,&n,index,500);
	output(a,n);
}
void input(int a[], int *n){
	int i;
	printf("Input n =");
	scanf("%d",n);
	srand(time(NULL));
	for(i=0;i<*n;i++){
		printf("a[%d] =", i);
		//scanf("%d",&a[i]);
		a[i] = rand()%100;
	}
}
void output(int a[],int n){
	int i;
	printf("\n%d",a[0]);
	for(i=1;i<n;i++)
	printf(", %d",a[i]);
	printf("\n");
}
int findIndex(int a[], int n, int p, int k, int from){
	int i, count=0;
	for(i=from==0?0:(n-1); from==0?(i<n):(i>=0);i+=(from==0?1:-1)){
		if (check(a[i]))
			count++;
		if (count ==p) break;
	}
	return i+k;
}
int check(int n){
	return n%2==0;
}
void insert(int a[], int *n, int index, int value){
	int i;
	for(i=*n;i>index;i--)
	a[i] = a[i-1];
	a[index] = value;
	*n +=1;
}














