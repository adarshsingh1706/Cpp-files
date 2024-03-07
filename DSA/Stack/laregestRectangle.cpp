// class Solution {
// private:
//     vector<int> nextSmallerElement(vector<int> arr, int n) {
//         stack<int> st;

//         st.push(-1); // for comparison purpose
//         vector<int> ans(n);
//         // loop from back for O(n) soln

//         for (int i = n - 1; i >= 0; i--) {

//             while (st.top() != -1 && arr[st.top()] >= arr[i]) {
//                 st.pop();
//             }
//             // otherwise

//             ans[i] = st.top();
//             st.push(i);
//         }
//         return ans;
//     }

// private:
//     vector<int> prevSmallerElement(vector<int> arr, int n) {
//         stack<int> st;

//         st.push(-1); // for comparison purpose
//         vector<int> ans(n);
//         // loop from back for O(n) soln

//         for (int i = 0; i < n; i++) {

//             while (st.top() != -1 && arr[st.top()] >= arr[i]) {
//                 st.pop();
//             }
//             // otherwise

//             ans[i] = st.top();
//             st.push(i);
//         }
//         return ans;
//     }

// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         vector<int> next(n);
//         next = nextSmallerElement(heights, n);
//         vector<int> prev(n);
//         prev = prevSmallerElement(heights, n);
//         int area = INT_MIN;

//         for (int i = 0; i < n; i++) {
//             int l = heights[i];

//             // if next[i]==-1 then width will be -ve
//             if (next[i] == -1) {
//                 next[i] = n;
//             }
//             int b = next[i] - prev[i] - 1;

//             int newArea = l * b;
//             area = max(area, newArea);
//         }

//         return area;
//     }
// };