#include <stdio.h>
void table_viewer(int n,float table[n]);
int main (){
    float table[100];
    for (int i = 1; i < 101; i++){
        table[i] = i;
    }
    table_viewer(100,table);
}

void table_viewer(int n,float table[n]){
    for (int i = 0; i < n-1; i++){
        printf("%f\n", table[i]);
    }
}