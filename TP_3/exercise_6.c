#include <stdio.h>
int est_trie(int list[5]);
int main(){
    int list[5]={1,2,3,6,5};
    int response = est_trie(list);
    printf("%d\n",response);
}

/**
 * Checks if an array of integers is sorted in increasing order.
 * 
 * @param list The array of integers to check.
 * @return 1 if the array is sorted in increasing order, 0 otherwise.
 */
int est_trie(int list[5]){
    int test = 0;
    int flag = 1;
    for (int i = 0; i < 5; i++){
        if ( list[i] < test){
            flag = 0;
        }
        test = list[i];
    }
    return flag;
}