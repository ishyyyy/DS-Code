#include <stdio.h>
void traversalArray(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
int applylinearsearch(int arr[], int size, int element)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == element)
        {
            printf("element found at index %d\n", i);
        }
    }
    return -1;
}
int applybinarysearch(int arr[], int size, int element)
{
    int low=0;
    int high=size;
    int mid=(high+low)/2;
    while(low<=high){
        if(arr[mid]==element){
           return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else if(arr[mid]>element)
        {
        high=mid-1;
        }
    }
    return -1;

}
int main()
{
    int arr[20] = {50, 60, 70, 80, 90, 100};
    int size = 5;
    int element = 90;
    traversalArray(arr, size);
   // applylinearsearch(arr, size, element);
    applybinarysearch(arr, size, element);
}