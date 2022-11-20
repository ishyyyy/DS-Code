#include<stdio.h>
void reverseArray(int arr[],int start,int end){
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
        start++;
        
    }
}
void printArray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int Arr[]={90,67,4,58,5,31};
    int n=6;
    printf("real Array is:\n");
    printArray(Arr,n);
    reverseArray(Arr,0,n-1);
    printf("Reversed Array is:\n");
    printArray(Arr,n);

}
