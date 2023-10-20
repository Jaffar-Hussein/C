#include <stdio.h>
float farhenheit(float temp);
float sol_kelvin(float temp);
/*
Ask the user for temp in degrees celcius trandom to farhenheit
*/
int main(){
    printf("Enter your temp in degrees celcius : ");
    float temp;
    scanf("%f",&temp);
    float sol_farh = farhenheit(temp);
    float kelvin = sol_kelvin(temp);
    printf("%.2f kelvin is %.0f  farhenheit\n", kelvin, sol_farh);
}
float farhenheit(float temp){
    return temp + 32;
}
float sol_kelvin(float temp){
    return temp + 273.15;
}