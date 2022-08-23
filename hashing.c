#include <stdio.h>
#include <stdlib.h>

void init(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = -1;
    }
}
int search(int arr[], int value, int size)
{
    int key = value % size;
    int index = key;
    while (arr[index] != value)
    {
        index = (index + 1) % size;//index of key and (index+1)%size is equal 
        if (index == key)
        {
            return 0;
        }
    }
    return 1;
}

int delete (int arr[], int value, int size)
{
    int key = value % size;
    int index = key;
    while (arr[index] != value)
    {
        index = (index + 1) % size;
        if (index == key)
        {
            return 0;
        }
        arr[index] = -1;
        return 1;
    }
}
int insert(int arr[], int value, int size)
{
    int key = value % size;
    int index = key;
    while (arr[index] != -1)
    {
        index = (index + 1) % size;
        if (index == key)
        {
            printf("hash table is completely full\n");
        }
    }
    arr[index] = value;
    return 1;
}
int main()

{
    int arr[20];
    int size = 21;
    init(arr, size);
    insert(arr, 4, size);
    delete (arr, 50, size);
    search(arr, 77, size);

    return 0;
}