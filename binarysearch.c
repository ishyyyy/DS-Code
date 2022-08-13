#include<stdio.h>
#include<stdlib.h>
int binarysearch(int size,int Arr[],int element){
    int high=size-1;
    int low=0;
    int mid=(high+low)/2;
    while(low<=high){
        if(Arr[mid]==element){
            return mid;
        }
        if(Arr[mid]>element){
           high=mid-1;
        }
        if(Arr[mid]<element){
           low=mid+1;
        }
    }
    return -1;

}
int main(){
    int size=4;
    int Arr[]={20,30,40,50,60};
    int element=30;
    printf("Going for Binary Search using Recursion");
     int searchIndex=binarysearch(size,Arr,element);
     printf("THE ELEMENT %d FOUND AT INDEX %d\n",element,searchIndex);
    return 0;
    
}