// First non-repeating character in a stream
// Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.


//{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		   unordered_map<char,int> count;
// 		   queue<int>q;
// 		   string ans ="";
// 		   for(int i=0;i<A.length();i++){
// 		       char ch = A[i];
		       
// 		       count[ch]++;
// 		       q.push(ch);
		       
// 		       while(!q.empty()){
// 		           if(count[q.front()]>1){
// 		               q.pop(); //repeating
// 		           }
// 		           else{
// 		               ans.push_back(q.front()); //non-repeating
// 		               break;
// 		           }
// 		       }
		       
// 		       if(q.empty()){
// 		            ans.push_back('#');
// 		       }
		       
// 		   }
// 		   return ans;
// 		}
		

// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		string A;
// 		cin >> A;
// 		Solution obj;
// 		string ans = obj.FirstNonRepeating(A);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }
// // } Driver Code Ends