#include <stdio.h>
# define N 10
void cocktail_shaker(int query_table[N]);
void swapper(int *a,int *b);
int main(){
    int list[N] = {1, 2, 3,5,6,7,8,9,4,0};
      for (int i = 0; i < N; i++)
    {
        printf("%d,",list[i]);
    }
    printf("\n");
    cocktail_shaker(list);
   
    printf("\n");
}

void cocktail_shaker(int query_table[N]){
    int swapped;
    do{    
        swapped = 0;
        // Swap going forward
        for(int i = 0; i < N;i++){
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
    } while (swapped != 1);
     for (int i = 0; i < N; i++)
    {
        printf("%d,",query_table[i]);
    }
   

}
void swapper(int *a,int *b){
    // TODO : I need more work on this pointer thing
    int temp = *a;
    *a = *b;
    *b = temp;
}
