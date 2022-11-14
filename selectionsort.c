#include <stdio.h>
#include <stdlib.h>
void printArr(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", Arr[i]);
    }
    printf("\n");
}
void selectionSort(int *Arr, int n)
{
    int Sorting, temp;
    for (int i = 0; i < n - 1; i++)
    {
        Sorting = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j] < Arr[Sorting])
            {
                Sorting = j;
            }
        }
            temp = Arr[i];
            Arr[i] = Arr[Sorting];
            Arr[Sorting] = temp;
        
    }
}
int main()
{
    int Arr[] = {9, 3, 7, 90, 6, 1};
    int n = 6;
    printArr(Arr, n);
    selectionSort(Arr, n);
    printArr(Arr, n);
}
