#include<stdio.h>

void linearSearch(int arr , int size , int element){
    for(i = 0; i < size; i++){
        if(arr[i] = element){
            return i
        }
    }
    return -1
}

int main(){
    arr = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size = sizeof(arr)/sizeof(int);
    int element = 56;
    int searchIndex = linearSearch(arr, size, element);
    printf("the element %d found at index %d \n", element, searchIndex);
    return 0 ;
}