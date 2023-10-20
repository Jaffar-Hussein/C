#include <stdio.h>
#define MAX 20
int sum_grinder(int table[MAX]);
void table_adder(int t1[MAX], int t2[MAX]);
int table_scalar(int t1[MAX], int t2[MAX]);

int main(){
    int t1[MAX],t2[MAX];
    for (int i=0; i < 39; i++){
        if ( i % 2 == 0){
            t1[i] = i;
            printf("%d ", t1[i]);
        }
    }
    printf("\n");
    for (int i = 39; i > 0; i--){
        if ( i % 2 != 0){
            t2[i] = i;
            printf("%d ", t2[i]);
        }
    }
    
}


int sum_grinder(int table[MAX]){
    int sum = 0;
    for(int i = 0; i < MAX; i++){
        sum += table[i];
    }
    return sum;
}

void table_adder(int t1[MAX], int t2[MAX]){
    int t3[MAX];
    for (int i = 0; i < MAX; i++){
        t3[i] = t1[i] + t2[i];
        // printf("%d ", t3[i]);
    }
}

int table_scalar(int t1[MAX], int t2[MAX]){
    int scalar;
    for (int i = 0; i < MAX; i++){
        scalar = t1[i] * t2[i];
    }
    return scalar;
}