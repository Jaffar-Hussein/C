#include <stdio.h>

int main(){
    int anne = 2000;

    if (anne % 4 == 0 && anne % 100 != 0 &&  anne % 400 == 0)
		  printf("Leap year");
    else
	    printf("Not Leap");
}