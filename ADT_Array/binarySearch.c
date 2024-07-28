#include<stdio.h>

void binarySearch(int arr , int size , int element){
    int low , high , mid;
    low = 0;
    high = size-1;
    while(low <= high){
        mid = (low + high)/2;
        if(mid = element){
            return mid
        }
        if(mid < element){
            low = mid+1
        }
        else{
            high = mid-1
        }
    }
    return-1
}

int main(){
    arr = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size = sizeof(arr)/sizeof(int);
    int element = 56;
    int searchIndex = binarySearch(arr, size, element);
    printf("the element %d found at index %d \n", element, searchIndex);
    return 0 ;
}