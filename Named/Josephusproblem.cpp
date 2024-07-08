// -------brute force-------------

// class Solution {
// public:
//     int findTheWinner(int n, int k) {
//         queue<int> qu;
//       for(int i=1;i<=n;i++){
//         qu.push(i);
//       }
       
//       while(qu.size()!=1 ){
       
       
//         for(int i=1;i<k;i++){
//             int first = qu.front();
//             qu.pop();
//             qu.push(first);
//         }
//             qu.pop();
//       }
      
//         return qu.front();

//     }
// };




// for 1 based indexing-------------------------------------

// #include <iostream>
// using namespace std;

// int josephus(int n, int k) {
//     if (n == 1) {
//         return 1; // Base case: Only one person left, they eliminate themselves (0-indexed position)
//     } else {
//         // Recursive call to find position in (n-1) people
//         int position = josephus(n - 1, k);
//         // Adjust position based on current circle size n and skip count k
//         return (position + k-1) % n+1;
//     }
// }