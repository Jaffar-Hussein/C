#include <stdio.h>

#define MAX 15
void switcher(int t[MAX], int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * Sorts an array of integers using the selection sort algorithm.
 *
 * @param t The array to be sorted.
 */
void selection_sort(int t[MAX])
{
    for (int i =  0; i < MAX; i++)
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
    selection_sort(t);
    insertion_sort(v);
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