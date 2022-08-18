#include <stdio.h>
int v = 5;
void initadjmatrix(int Arr[][v])
{
    for (int i = 0; i < v; ++i)

        for (int j = 0; j < v; ++j)

            Arr[i][j] = 0;
}
void addadjmatrix(int Arr[][v], int n, int m)
{
    Arr[n][m] = 1;
}
void removematrix(int Arr[][v],int n,int m){
    Arr[n][m]=0;
}
void printAdjMatrix(int Arr[][v])
{
    for (int i = 0; i < v; ++i)
    {
        for (int j = 0; j < v; ++j)
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int adjmatrix[v][v];
    initadjmatrix(adjmatrix);
    addadjmatrix(adjmatrix, 0, 2);
    addadjmatrix(adjmatrix, 3, 4);
    addadjmatrix(adjmatrix, 0, 1);
    addadjmatrix(adjmatrix, 0, 3);
    addadjmatrix(adjmatrix, 1, 2);
    addadjmatrix(adjmatrix, 3, 1);
    addadjmatrix(adjmatrix, 1, 1);
    addadjmatrix(adjmatrix, 2, 4);
    addadjmatrix(adjmatrix, 3, 0);
    printf("-----BEFORE REMOVING-----\n");
    printAdjMatrix(adjmatrix);
    printf("-----AFTER REMOVING-----\n");
    removematrix(adjmatrix,0,2);
    removematrix(adjmatrix,1,2);
    printAdjMatrix(adjmatrix);
    


    return 0;
}