// #include <bits/stdc++.h>
// queue<int> reverseElements(queue<int> q, int k) {
//   stack<int> st;
//   for (int i = 0; i < k; i++) {
//     int nums = q.front();
//     q.pop();
//     st.push(nums);
//   }

//   while (!st.empty()) {
//     int nums1 = st.top();
//     st.pop();
//     q.push(nums1);
//   }

//   // baaki jo start me bche hai values unko peeche daalo

//   for (int i = 0; i < q.size() - k; i++) {
//     int nums2 = q.front(); // aage se nikalo
//     q.pop();
//     q.push(nums2); // picje daalo
//   }
//   return q;
// }


// You are given a QUEUE containing ‘N’ integers and an integer ‘K’. You need to reverse the order of the first ‘K’ elements of the queue, leaving the other elements in the same relative order.

// You can only use the standard operations of the QUEUE STL:

// 1. enqueue(x) : Adds an item x to rear of the queue
// 2. dequeue() : Removes an item from front of the queue
// 3. size() : Returns number of elements in the queue.
// 4. front() : Finds the front element.
// For Example:
// Let the given queue be { 1, 2, 3, 4, 5 } and K be 3.
// You need to reverse the first K integers of Queue which are 1, 2, and 3.
// Thus, the final response will be { 3, 2, 1, 4, 5 }.