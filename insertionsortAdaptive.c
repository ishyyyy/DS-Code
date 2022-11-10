#include <stdio.h>
void linkedListTraversal(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ELEMENTS : %d\n", Arr[i]);
    }
    printf("/n");
}
void insertionSort(int *Arr, int n)
{
    int j, key;
    for (int i = 0; i < n - 1; i++)
    {
        j = i - 1;
        key = Arr[i];

        while (j >= 0 && Arr[j]>key)
        {
            Arr[j+1] = Arr[j];
            j--;
        }
        Arr[j + 1] = key;
    }
}
int main()
{
    int Arr[] = {10, 78, 90, 7, 99, 87};
    int n = 6;
    linkedListTraversal(Arr, n);
   
    printf("linked list after sorting becomes \n");
     insertionSort(Arr, n);
    linkedListTraversal(Arr, n);
    return 0;
}
