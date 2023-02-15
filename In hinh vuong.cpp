
//Hay in ra hinh vuong dac co kich thuoc n bang ky tu "*".
//#include <stdio.h>
//int main()
//{
//    int n;
//    printf("Nhap do dai canh: ");
//    scanf("%d", &n);
//    int i, j;
//    for(i = 0; i<n; i++){
//        for(j = 0; j<n; j++){
//            printf("* ");
//        }
//        printf("\n");
//    }
//}


//Hay in ra hinh vuong rong co kich thuoc n xn, bang ky tu "*".
//#include <stdio.h>
//int main()
//{
//    int n;
//    printf("Nhap do dai canh: ");
//    scanf("%d", &n);
//    int i, j;
//    for(i = 0; i<n; i++){
//        for(j = 0; j<n; j++){
//         //Neu nam tren duong vien thi ta in ra ky tu ""
//            if(i == 0 || i == n-1 || j == 0 || j == n-1){
//                printf("* ");
//            }//Nguoc lai ta in ra ky tu khoang trang 
//           else{
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//}


//In ra hinh tam giac vuong can dac o goc phan tu so I, II, III, IV.
#include <stdio.h>
int main(){
	int n,i,j;
	printf("Nhap vao do dai canh cua tam giac vuong can:");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}	
}
