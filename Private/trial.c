#include <stdio.h>
int fonct(int *x, int y)
{
    if (y < 1)
    {
        int i = 2;
        *x = y + i;
    }
    y++;
    return y;
}
int main()
{
    int i;
    i = 0;
    while (i < 2)
    {
        printf("%d", fonct(&i, i));
    }
    printf("\n FIN");
}
