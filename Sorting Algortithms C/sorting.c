#include <stdio.h>

#define MAX 15
/**
 * @brief Swaps the values of two integers.
 *
 * This function takes in an array and two pointers to integers.
 * It swaps the values of the integers pointed to by the pointers.
 *
 * @param t The array containing the integers.
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void switcher(int t[MAX], int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @param t The array to be sorted.
 */
void bubble_sort(int t[MAX])
{
    int switched = 1;
    while (switched)
    {
        switched = 0;
        for (int i = 0; i < MAX - 1; i++)
        {
            if (t[i] > t[i + 1])
            {
                switcher(t, &t[i], &t[i + 1]);
                switched = 1;
            }
        }
    }
}

/**
 * Sorts an array of integers using the cocktail sort algorithm.
 *
 * @param t The array to be sorted.
 */
void cocktail_sort(int t[MAX])
{
    int switched = 1;
    while (switched)
    {
        int k = 0;
        switched = 0;
        for (int i = 0; i < MAX - 1 - k; i++)
        {
            if (t[i] > t[i + 1])
            {
                switcher(t, &t[i], &t[i + 1]);
                switched = 1;
            }
        }
        k++;
    }
}
/**
 * Sorts an array of integers using the selection sort algorithm.
 *
 * @param t The array to be sorted.
 */
void selection_sort(int t[MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (t[j] < t[i])
            {
                switcher(t, &t[i], &t[j]);
            }
        }
    }
}

/**
 * Sorts an array of integers using the insertion sort algorithm.
 *
 * @param t The array to be sorted.
 */
void insertion_sort(int t[MAX])
{
    for (int i = 1; i < MAX; i++)
    {
        int j = i;
        while (j > 0 && t[j - 1] > t[j])
        {
            switcher(t, &t[j - 1], &t[j]);
            j--;
        }
    }
}

int main()
{
    int t[MAX] = {1, 5, 2, 4, 3, 6, 8, 7, 9, 10, 11, 12, 13, 15, 14};
    int v[MAX] = {1, 5, 2, 4, 3, 6, 8, 7, 9, 10, 11, 12, 13, 15, 14};
    int b[MAX] = {1, 5, 2, 4, 3, 6, 8, 7, 9, 10, 11, 12, 13, 15, 14};
    int c[MAX] = {1, 5, 2, 4, 3, 6, 8, 7, 9, 10, 11, 12, 13, 15, 14};
    selection_sort(t);
    insertion_sort(v);
    bubble_sort(b);
    cocktail_sort(c);
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}