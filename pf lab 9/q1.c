A)#include <stdio.h>

void print_pattern(int N) {
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            printf(" . ");
        }
        for (int k = 0; k < i; k++) {
            printf("o ");
        }
        printf("\n");
    }
    
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < N - i; j++) {
            printf(" . ");
        }
        for (int k = 0; k < i; k++) {
            printf("o ");
        }
        printf("\n");
    }
}

int main() {
    int N = 10;
    print_pattern(N);
    return 0;
}
B)#include<stdio.h>
void printpattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main(){
	int n=5;
	printpattern(n);
	return 0;
}
