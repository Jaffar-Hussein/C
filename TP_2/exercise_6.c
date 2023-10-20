#include <stdio.h>
void table_search(int n, int table[n],int index);
void table_means(int n, int table[n]);
void table_inverse(int n, int table[n]);
void table_sum(int n, int table[n]);
int main(){
    int table[5] = {1,2,3,4,5};
    table_search(5,table,3);
    table_means(5, table);
    table_inverse(5, table);
    table_sum(5, table);
}

/**
 * Searches for an element in a given table at a specified index and prints it to the console.
 * 
 * @param table The table to search in.
 * @param index The index of the element to search for.
 */
void table_search(int n,int table[n],int index){
    int element = table[index];
    printf("Value in index %d is : %d\n",index,element);
}
/**
 * Calculates the mean of an integer array.
 * 
 * @param n The number of elements in the array.
 * @param table The integer array to calculate the mean of.
 */
void table_means(int n, int table[n]){
    int total = 0;
    for (int i = 0; i < n;i++){
        total += table[i];
    }
    printf("The mean is : %d\n",total / n);
}
/**
 * This function takes an integer n and an array of integers table of size n as input.
 * It creates a new array reverse of size n and fills it with the elements of table in reverse order.
 * Finally, it prints the elements of the reverse array.
 *
 * @param n The size of the array table
 * @param table The array of integers to be reversed
 */
void table_inverse(int n, int table[n]){
    int reverse [n];
    for (int i = 0; i < n;i++){
        reverse[(n-1)-i] = table[i];
    }
    printf("The inverse is : ");
    for (int i = 0; i < n; i++){
        printf("%d,",reverse[i]);
        
    }
    printf("\n");
}
/*
 * Calculates the sum of all elements in an integer array.
 *
 * n: the number of elements in the array
 * table: the integer array to sum
 */
void table_sum(int n, int table[n]){
    int total;
    for (int i = 0; i < n; i++) {
        total += table[i];
    }
    printf("The sum is : %d\n",total);
}