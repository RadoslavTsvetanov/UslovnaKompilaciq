#include <stdio.h>
#define SIZE 8
#define MACOS 1
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *a, int Size)
{
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - i - 1; j++)

            if (a[j] > a[j + 1])
            {
                int valueHolder = a[j];
                a[j] = a[j + 1];
                a[j + 1] = valueHolder;
            }
    }
}
void selectionSort(int *a, int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_idx])
                min_idx = j;
        if (min_idx != i)
        {
            Swap(&a[min_idx], &a[i]);
        }
    }
}
void insertionSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int valueHolder = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > valueHolder)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = valueHolder;
    }
}
void swap(int *a, int size)
{
    for (int i = 0, j = size - 1; i != j; i++, j--)
    {
        int valueHolder = a[i];
        a[i] = a[j];
        a[j] = valueHolder;
    }
}
int main(void)
{
#ifdef SIZE
    if (SIZE > 0 && SIZE < 10)
    {
        int a[SIZE] = {1, 3, 2, 4, 3, 2, 1, 3};
        int Swap = 0;
#ifdef WINDOWS
        bubbleSort(a, SIZE);
        Swap = 1;
#elif LINUX
        selectionSort(a, SIZE);
        Swap = 1;
#elif MACOS
        insertionSort(a, SIZE);
        Swap = 1;
#endif
        if (Swap == 0)
        {
            swap(a, SIZE);
        }
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("\n enter valid array size");
    }
#else
    printf("\n enter valid array size");
#endif
}