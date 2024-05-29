#include<iostream>
using namespace std;

int binarySearch(int array[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;     // s+(e-s)/2

    while(start<=end){
        if(array[mid]==key){
            return mid;
        }
        //agr key ki value zyada hai tb
        if(key>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     mid=(start+end)/2;
    }
    return -1;
   
}


 int main(){
    int arr[6]={2,4,6,8,12,18};
    int brr[9]={1,3,5,7,9,23,45,67,79};

    int ans=binarySearch(arr,6,12);
    cout<< "The index of 12 is " << ans <<endl;
    int getKey=binarySearch(brr,9,79);
    cout<<"The index of 47 is " << getKey << endl;
    return 0;
 }