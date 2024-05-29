#include <iostream>
using namespace std;

//for left occ
int firstOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        
        mid=(s+e)/2;
    }
    return ans;
}

//for right occ


int lastOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int brr[10]={1,2,3,4,5,6,6,6,6,6};
    int keyFinder= firstOcc(brr,10,6);
    int keyFinder2= lastOcc(brr,10,6);
    cout<<"first occ of 6 is at index " << keyFinder <<endl;
    cout<<"last occ of 6 is at index " << keyFinder2 <<endl;


}

//for total no of occurence = (lastindex-firstindex)+1