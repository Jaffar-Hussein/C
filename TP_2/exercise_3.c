#include <stdio.h>
float bmi_calculator(float height,float weight);
void bmi_status(float bmi);
int main(){
    float weight,height;
    printf("Enter your weight in KG: ");
    scanf("%f",&weight);
    printf("Enter your height in meters: ");
    scanf("%f",&height);
    float bmi = bmi_calculator(height,weight);
    bmi_status(bmi);
}

float bmi_calculator(float height,float weight){
    return weight / ( height * height );
}

void bmi_status(float bmi){
    if (bmi < 18.5 ){
        printf("Your bmi is %.1f : Underweight\n", bmi);
    }else if (bmi >= 18.5 & bmi <= 24.9){
        printf("Your bmi is %.1f : Normal\n", bmi);
    }else if (bmi > 24.9 & bmi <= 29.9){
        printf("Your bmi is %.1f : Overweight\n", bmi);
    }else{
        printf("Your bmi is %.1f : Obese\n", bmi);
    }
}