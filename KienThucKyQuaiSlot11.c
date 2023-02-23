#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//sap xep mang tang dan 

void input(int a[], int *n);
void output(int a[], int n);
int findIndex(int a[], int n, int p, int k, int from);
void insert(int a[], int *n, int index, int value);
void del(int a[], int *n, int index);
int check(int n);
void sort_Selection(int a[], int n, int direction); //direct = 0 tang, 1 giam 
void sort_Bubble(int a[], int n, int direction);
void sort_Interchange(int a[], int n, int direction);
main(){
	int a[1000], n, index;
	input(a, &n);
	output(a, n);
	index = findIndex(a, n, 1, 0, 0);
	printf("Tang hay giam");
	scanf("%d",&checkSort);
//	if(index =1) 
//	else 
//	insert(a, &n, index, 50);
//	sort_Selection(a, n, 0);
//	sort_Bubble(a, n, 0);
	sort_Interchange(a, n, 0);
	output(a, n);
	printf("\ncheck sort = %d\n", checkSort(a,n));
}
int checkSort(int a[], int n){
	int i; 
	for(i = 0; i<n-1; i++)
	if(a[i]>a[i+1]) return 0;
	return 1; 
}
void sort_Interchange(int a[], int n, int direction){
	int i,j,temp;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if (a[i]>a[j]){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
void sort_Bubble(int a[], int n, int direction){
	int i,j,temp;
	for (i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if (a[j],a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
void sort_Selection(int a[], int n, int direction){
	int i, j, vtmin, temp;
	for (i = 0; i < n - 1; i++){
		vtmin = i;
		for(j=i+1; j<n; j++){
			if(a[vtmin]>a[j]) vtmin = j;
		}
		temp = a[i];
		a[i] = a[vtmin];
		a[vtmin] = temp; 
	}
}
void del(int a[], int *n, int index){
	int i;
	for(i = index; i < *n-1; i++){
		a[i] = a[i+1];
	}
	*n--;
}
void input(int a[], int *n){
	int i; 
	printf("Input n: ");
	scanf("%d", n);
	srand(time(NULL));
	for(i = 0; i < *n; i++){
		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
    a[i] = rand()%100;
	}
}
void output(int a[], int n){
	int i; 
	printf("\n%d", a[0]);
	for(i = 1; i < n; i++)
		printf(", %d", a[i]);
		printf("\n");
}
int findIndex(int a[], int n, int p, int k, int from){
	int i, count=0;
	for(i=from==0?0:(n-1); from==0?(i<n):(i>=0); i+=(from==0?1:-1)){
		if (check(a[i]))
			count++;
		if (count == p) break;
	}
	return i + k;
}
int check(int n){
	return n % 2 == 0;
}
void insert(int a[], int *n, int index, int value){
	int i; 
	for(i = *n; i>index; i--)
	a[1] = a[i-1];
	a[index] = value;
	*n += 1; 
}
