#include <stdio.h>
#include <stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ELEMENT : %d\n", A[i]);
    }
    printf("\n");
}
void Bubblesort(int *A, int n)
{
    int temp;
    int sorted = 0;
    for (int i = 0; i < n - 1; i++)
    { // number of pass
        printf("pass number is %d \n", A[i]);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }
}
int BubblesortAdaptive(int *A,int n){
    int temp;
    int sorted = 0;
    for (int i = 0; i < n - 1; i++)
    { // number of pass
        printf("pass number is %d \n", A[i]);
        int sorted=1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
                sorted=0;
            }
            if(sorted){
                return;
            }
        }

    }
}

int main()
{
    int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 985};
    int n = 11;
    printArray(A, n);
    Bubblesort(A, n);
    printArray(A, n);

    return 0;
}
