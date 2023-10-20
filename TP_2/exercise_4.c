#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pi_estimator(int rounds);
int main(){ 
    int random_points;
    printf("Choose the number of rounds you wanna throw the dart : ");
    scanf("%d",&random_points);
    float pi = pi_estimator(random_points);
    printf("The estimation of pi is : %f\n", pi);
}

/**
 * Calculates an estimate of pi using the Monte Carlo method.
 * 
 * @param rounds The number of rounds to perform the estimation.
 * @return The estimated value of pi.
 */
float pi_estimator(int rounds){
    float total,inside;
    for (int i = 0; i < rounds; i++){
        float x = (float)rand()/(float)(RAND_MAX/2) - 1;
        float y = (float)rand()/(float)(RAND_MAX/2) - 1;

        float distance = sqrt(x*x + y*y);

        if (distance < 1){
            inside += 1;
        }
        total += 1;
    }
    return 4 * (inside / total);
}