#include <stdio.h>

void table_search(int n,int m,int table[n][m],int index_x,int index_y);
void table_means(int n,int m,int table[n][m]);
void table_inverse(int n, int table[n]);
void table_sum(int n, int table[n]);
int main(){
    int table[2][5] = { 
        {10, 11, 12, 13, 23},
        {14, 15, 16, 17, 34}
        };
    // table_search(2,5,table,1,1);
    // table_means(5, table);
    // table_inverse(5, table);
    // table_sum(5, table);
}


/**
 * Searches for an element in a 2D table and prints its value.
 * 
 * @param n The number of rows in the table.
 * @param m The number of columns in the table.
 * @param table The 2D table to search in.
 * @param index_x The row index of the element to search for.
 * @param index_y The column index of the element to search for.
 */
void table_search(int n, int m, int table[n][m], int index_x, int index_y) {
    int element = table[index_x][index_y];
    printf("Value in index %d , %d is : %d\n", index_x, index_y, element);


}

/**
 * Calculates the mean of an integer array.
 * 
 * @param n The number of elements in the array.
 * @param table The integer array to calculate the mean of.
 */
void table_means(int n,int m,int table[n][m]){
    int total = 0;
    for( int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++ ){
            total += table[i][j];
        }
    }
    printf("The mean is : %d\n",total / (n * m));
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