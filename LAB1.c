#include <stdio.h>
int n;
double x;
char cl;
int main() {
    int m;
    short s;
    long L;
    float y;
    printf("Code of main: %u\n", &main);
    printf("Variable n, address: %u, memory size: %d\n", &n, sizeof(n));
    printf("Variable x, address: %u, memory size: %d\n", &x, sizeof(x));
    printf("Variable cl, address: %u, memory size: %d\n", &cl, sizeof(cl));
    printf("Variable m, address: %u, memory size: %d\n", &m, sizeof(m));
    printf("Variable s, address: %u, memory size: %d\n", &s, sizeof(s));
    printf("Variable L, address: %u, memory size: %d\n", &L, sizeof(L));
    printf("Variable y, address: %u, memory size: %d\n", &y, sizeof(y));
	getchar();
    return 0;
}

