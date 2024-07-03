// class Solution {
// public:
//     int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        
//         std::sort(g.begin(), g.end());
//         std::sort(s.begin(), s.end());

//         int l=0; int r=0; //l on g nad r on s
//         int n=g.size(); int m=s.size();
//         while(l<n && r<m){ 
//             if(g[l]<=s[r]){
//                 l=l+1;
//             }
//             r=r+1;
//         }
//         return l;
//     }
// };