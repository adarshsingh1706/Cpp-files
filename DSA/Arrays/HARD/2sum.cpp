#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
vector<int> twosum(vector<int> arr, int target){
  std::unordered_map<int,int> mp;
  vector<int> ans;
  for(int i =0;i<arr.size();i++){
    int rem  = target-arr[i];
    if(mp.find(rem)!=mp.end()){//iterator found
      ans.push_back(i); 
      ans.push_back(mp[rem]);
      return ans;
    }
    else{
      mp[arr[i]]=i;
    }
    
      }
  return ans;
}


 int main(){
    vector<int> arr ={-1,2,3,4,7};
    int target = 0;
    vector<int> soln = twosum(arr,target);
    for(int i=0;i<soln.size();i++){
      cout<<soln[i]<<" ";
    }
    
 }