#include <iostream>
#include <vector>
using namespace std;


bool checkSorted(const vector<int>& arr) {
  if(arr.size()==0) return false;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int countSortedWays(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> newNums;

            
            for (int k = 0; k < i; k++) {
                newNums.push_back(nums[k]);
            }

           
            for (int k = j + 1; k < n; k++) {
                newNums.push_back(nums[k]);
            }

            for(int i=0;i<newNums.size();i++){
              cout<<newNums[i]<<" ";
              
            }
            cout<<endl;


            if (checkSorted(newNums)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 1};
    int ans = countSortedWays(nums);
    cout << ans << endl;
    return 0;
}
