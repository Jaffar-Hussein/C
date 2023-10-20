#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows : ");
    scanf("%d", & N);
    for (int i = 1; i <= N; i++) {
        for (int k = N - i; k >= 0; k--) {
            printf(" ");
        }
        for (int m = i - 1; m > 0; m--) {
            printf("*");
        }
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}