// class Solution {
//     public:
//     void merge(vector<int> &arr, int low, int mid, int high){
//         vector<int> temp;
//         int left = low;
//         int right = mid+1;
//         while(left<=mid && right<=high){
//             if(arr[left]<arr[right]){
//                 temp.push_back(arr[left]);
//                 left++;
//             }
//             else{
//                 temp.push_back(arr[right]);
//                 right++;

//             }
//         }
//         while(left<=mid){
//             temp.push_back(arr[left]);
//                 left++;
//         }
//         while(right<=high){
//             temp.push_back(arr[right]);
//                 right++;
//         }

//         for(int i=low;i<=high;i++){
//             arr[i]=temp[i-low];
//         }


//     }
//     public:
//     void mS(vector<int> &arr,int low,int high){
//         //base case
//         if(low==high) return;
//         int mid = (low+high)/2;
//         mS(arr,low,mid);
//         mS(arr,mid+1,high);
//         merge(arr,low,mid,high);
//     }
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         mS(nums,0,nums.size()-1);
//         return nums;
//     }
// };


#include <iostream>
#include <vector>
using namespace std;

//merge fn
void merge(vector <int> &arr,int low,int mid, int high){
  vector <int> temp; //creating a temporary array to store sorted arrays
  int left=low;
  int right= mid+1; //cz we have to keep incrementing left nd right

  while(left<=mid && right<=high){
    if(arr[left]<arr[right]){ 
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  //now for elements still left after while condn exhausts

  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }

  for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }

}

void mS(vector <int> &arr,int low,int high){
  //base case
  if(low>=high) return;

  int mid=(low+high)/2;
  mS(arr,low,mid);
  mS(arr,mid+1,high);
  merge(arr,low,mid,high);
}
int main(){

      
 vector<int> nums={56,43,73,20,1};
  mS(nums,0,nums.size()-1);
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }

}




