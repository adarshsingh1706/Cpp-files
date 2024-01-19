#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,6};
    int a=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[i]);i++){
        for(int j=i+1;j<sizeof(arr)/sizeof(arr[i]);j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                a=1;
            }
            
        }
    }
if(a==0){
    cout<<"duplicate not found";
}
    }

//////////


//     int findDuplicate(vector<int> &arr) 
// {
//     int ans=0;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     for(int j=1;j<n;j++){
//         ans=ans^j;
//     }
//     return ans;
	
// }
