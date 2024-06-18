// Reverse Linked List

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* temp = head;
//         stack<int> st;
//         while(temp!=NULL){
//             st.push(temp->val);
//             temp=temp->next;
//         }
//      ListNode* temp1 = head;
//      while(!st.empty()){
//         temp1->val = st.top();
//         st.pop();
//         temp1=temp1->next;
//      }
//      return head;
//     }
// };



// Add Two Numbers



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//       ListNode* temp1 = l1;
//       ListNode* temp2 = l2; 
//       ListNode* dummyNode = new ListNode(-1);
//       ListNode* current = dummyNode;
//       int carry = 0;
//       while(temp1!=NULL || temp2!=NULL) {
//         int sum = carry;
//         //adding and keeping the result in newNode
//         if(temp1!=NULL) sum=sum+temp1->val;
//         if(temp2!=NULL) sum=sum+temp2->val;
//         ListNode* newNode = new ListNode (sum%10);
//         carry = sum/10;
//         current->next = newNode;
//         current = current->next;
//         if(temp1!=NULL) temp1=temp1->next;
//         if(temp2!=NULL) temp2=temp2->next;
//       }

//       //incase carry is there after last step, putting it at last 
//       if(carry){
//         ListNode* newNode = new ListNode(carry);
//          current->next = newNode;
//          current = current->next;
//          current->next = nullptr;
//       }
     
//      return dummyNode->next;

//     }
// };