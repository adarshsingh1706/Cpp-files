#include <iostream>
using namespace std;
 bool search(int arr[],int size,int key){
    for(int i=0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
 }

 int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    cout<<"Enter the key to search for"<< endl;
    int key;
    cin>>key;
    
    bool a = search(arr,10,key);
    if(a){
        cout<<"key is present"<< endl;
    }
    else{
        cout<< "key not found" << endl;
    }
    return 0;


 }