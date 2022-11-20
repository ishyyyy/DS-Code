// maximum-and-minimum-in-an-array DSA
#include <stdio.h>
struct pair
{
    int min;
    int max;
};
struct pair getmaxminArray(int arr[], int n)
{
    int i;
    struct pair minmax;

    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int Arr[] = {23, 8, 9, 90, 876, 76};
    int Arr_size = 6;
    struct pair minmax = getmaxminArray(Arr, Arr_size);
    printf("max ELEMENT =%d\n", minmax.max);
    printf("min ELEMENT =%d\n", minmax.min);
    getchar();
    return 0;
}
