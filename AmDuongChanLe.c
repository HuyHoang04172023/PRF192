#include <stdio.h>
#include <stdlib.h>

int check_duong_chan(int n){
	return (n>0&&n%2==0)?1:0;
}
int check_duong_le(int n){
	return (n>0&&n%2==1)?1:0;
}
int check_am_chan(int n){
	return (n<0&&n%2==0)?1:0;
}
int check_am_le(int n){
	return (n<0&&n%2==1)?1:0;
}
main(){
	int n;
	printf("Nhap mot so: ");
	scanf("%d",&n);
	printf("Dung: 1   Sai: 0\n");
	printf("So duong chan:%d\n",check_duong_chan(n));
	printf("So duong le:%d\n",check_duong_le(n));
	printf("So am chan:%d\n",check_am_chan(n));
	printf("So am le:%d\n",check_am_le(n));
}
