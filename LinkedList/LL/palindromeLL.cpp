// putting elements one by one in stack then compairing TC=>O(N), SC=>O(N) 

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* temp = head;
//         stack<int> st;
//         while(temp!=NULL) {
//             st.push(temp->val);
//             temp = temp->next;
//         }
//         temp  = head;
//         while(temp!=NULL){
            
//             if(temp->val!=st.top()) return false;
//             temp=temp->next;
//             st.pop();
//         }
//         return true;
//     }
// };

// now we want SC=>O(1)
// find middle => reverse => compare
//finidng middle


// class Solution {
// public: ListNode* reverse(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* temp = head;
//         ListNode* front;
//         while(temp!=NULL) {
//         front = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = front;
//         }
//        return prev;
// }
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next!=NULL && fast->next->next!=NULL) {
//          slow = slow->next;
//          fast = fast->next->next;
//         }
//         ListNode* newHead = reverse(slow->next);
//         ListNode* second = newHead;
//         ListNode* first = head;
//         while(second!=NULL) {
//             if(first->val!=second->val) {
//                 reverse(newHead);
//                 return false;
//             }
//             first = first->next;
//             second = second->next;
//         }
//         reverse(newHead);
//         return true;

//     }
// };




