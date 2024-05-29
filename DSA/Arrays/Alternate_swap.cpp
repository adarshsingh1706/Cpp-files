#include <iostream>
using namespace std;

void swap_alternate(int arr[], int size){
    for(int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }
}

int main(){
   int arr[6]={1,2,3,4,5,6};
   int size=6;
    
    swap_alternate(arr,size);
    printArray(arr,size);
    return 0;
}