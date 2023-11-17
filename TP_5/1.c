#include <stdio.h>
# define N 10
void cocktail_shaker(int query_table[N]);
void swapper(int *a,int *b);
int main(){
    int list[N] = {1, 2, 78,5,6,7,8,9,4,0};
    printf("Original List : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d,",list[i]);
    }
    printf("\n");
    cocktail_shaker(list);
    printf("Sorted List   : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d,",list[i]);
    }
    printf("\n");
}

/**
 * Sorts an array of integers using the cocktail shaker sort algorithm.
 * 
 * @param query_table The array of integers to be sorted.
 */
void cocktail_shaker(int query_table[N]){
    int swapped;
    do{    
        swapped = 0;
        // Swap going forward
        for(int i = 0; i < N-1;i++){
            if(query_table[i] > query_table[i+1]){
                swapper(&query_table[i],&query_table[i+1]);
                swapped = 1;
            }
        }
        // If no swaps breakout
        if(swapped == 0){
            break;
        }
        // Reset the condition to false
        swapped = 0;
        // Swap Backwards
        for(int j = N-1; j >= 0;j--){
            if(query_table[j] < query_table[j-1]){
                swapper(&query_table[j],&query_table[j-1]);
                swapped = 1;
            }
        }
    } while (swapped);
}

/**
 * Swaps the values of two integer pointers.
 * 
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swapper(int *a, int *b) {
    // TODO:More explanations of pointers needed or exercises
    int temp = *a;
    *a = *b;
    *b = temp;
}
