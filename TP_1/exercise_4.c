#include <stdio.h>
#include <math.h>

int main(){
    int a = 1,b =10,c = 4;
    int delta = b * b - ( 4 * a * c );
    if (delta < 0){
        printf("No solution");
    }else if (delta == 0){
        float solution = -b / (2*a);
        printf("solution = %f\n", solution);
    }else{
        float solution1 = ( -b + sqrt(delta) ) / (2*a);
        float solution2 =( -b - sqrt(delta) ) / (2*a);
        printf("solution1 = %f\nsolution2 = %f\n", solution1,solution2);
    }
}