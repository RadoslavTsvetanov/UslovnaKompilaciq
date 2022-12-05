#include <stdio.h>
#define ARRAY_SIZE 5
void PrintOnNewLine(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n%d", a[i]);
    }
}
int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
#ifdef ARRAY_SIZE1
    if (ARRAY_SIZE > 0 && ARRAY_SIZE < 10)
    {
        PrintOnNewLine(a, ARRAY_SIZE);
    }
#else
    printf("enter valid array size");
#endif
}