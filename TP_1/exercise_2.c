#include <stdio.h>

int main(){
    int a = 4, b = 3, c = 1;
    if (a < b && b < c){
        printf("%d ", a);
    }else if (b < a && b < c){
        printf("%d ", b);
    }else{
        printf("%d ",c);
    }
}