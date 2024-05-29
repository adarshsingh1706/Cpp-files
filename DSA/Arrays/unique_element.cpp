#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,1,5};
    int size=5;
    int ans=0;
    for (int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<  ans;
}