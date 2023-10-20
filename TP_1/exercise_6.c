#include <stdio.h>
#include <stdlib.h>

int month_calculator(int date);
int year_calculator(int date);
int day_calculator(int date);
int main(){
    int a = 12102023,b=24022000;
    int year_days = abs(year_calculator(a) - year_calculator(b)) * 365;
    int month_days = abs(month_calculator(a) - month_calculator(b)) * 30;
    int days = day_calculator(a);

    // int month_days = month_calculator(a);
    int total_days = days + month_days + year_days;

    // printf("%d\n",year_days);
    // printf("%d\n",month_days);
    // printf("%d\n",days);
    printf("%d Days\n",total_days);
}

/*
Description:Takes in a number of date and returns the year
*/
int year_calculator(int date){
    return date % 10000;
}
/*
The function return the number of months in a given date
*/
int month_calculator(int date){
    return (date % 1000000) / 10000 ;
}

/*The functions returns the number of days in a given date */
int day_calculator(int date){
    return (date )/1000000;
}
