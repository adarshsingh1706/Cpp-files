// class Solution {
// public:
//     int numberOfAlternatingGroups(vector<int>& colors) {
//        int cnt = 0;
//         int n = colors.size();

//         for (int i = 0; i < n; i++) {
//             if (colors[i] != colors[(i + 1) % n] && 
//                 colors[(i + 1) % n] != colors[(i + 2) % n]) {
//                 cnt++;
//             }
//         }

//         return cnt;
//     }
// };