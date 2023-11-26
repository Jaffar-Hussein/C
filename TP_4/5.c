#include <stdio.h>

int recherche_dichotomique(int v,int c,int a[c]);
int main(){
    int array[] = {1,2,3,4,6,7,8,9,10,11};
    printf("The array to search : ");
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        printf("%d",array[i]);
        printf(" ");
    }
    int value;
    printf("\nPlease enter a value: ");
    scanf("%d", &value);
    int index = recherche_dichotomique(value,sizeof(array)/sizeof(array[0]),array);
    
    printf("Its of index : %d\n",index);
}
/**
 * Performs a binary search on an array to find a specific value.
 * 
 * @param v The value to search for.
 * @param c The number of elements in the array.
 * @param a The array to search in.
 * 
 * @return The index of the found value, or -1 if the value is not found.
 */
int recherche_dichotomique(int v,int c,int a[c]){
    int p = 0;
    int m;
    int g = c - 1;
    while(p <= g){
        m = g + p /2;
        if(v > a[m]){
            p = m + 1;
        }else if(v < a[m]){
            g = m - 1;
        }else{
            return m;
        }
    }
    return -1;
}