#include <stdio.h>
#define SIZE 5
#define DEBUG
int sort(int *a, int size)
{
    int sumOfIndex3 = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int ValueHolder = a[j];
                a[j] = a[j + 1];
                a[j + 1] = ValueHolder;
            }
        }
    }

    for (int i = 1; i < size; i++)
    {
        if (i % 3 == 0)
        {
            sumOfIndex3 += a[i];
        }
    }
    return sumOfIndex3;
}
int main(void)
{
    int a[SIZE] = {1, 3, 2, 4, 1};
    int b = sort(a, SIZE);
    printf("sum:%d\n", b);
#ifdef DEBUG
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 1; i < SIZE; i++)
    {
        if (i % 3 == 0)
        {
            printf("\n3rd elements:%d ", a[i]);
        }
    }
#endif
}