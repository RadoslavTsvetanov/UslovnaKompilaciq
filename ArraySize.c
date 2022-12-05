#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 5
void PowerOf2(int *a)
{
    {
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            a[i] = pow(2, i);
        }
    }
}
int main(void)
{
    int a[5] = {1, 2, 3, 5, 4};
#if defined ARRAY_SIZE && ARRAY_SIZE < 10 && ARRAY_SIZE > 0
    PowerOf2(a);
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
#else
    printf("\nWrong array size");
#endif
}