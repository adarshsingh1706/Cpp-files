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


//sort 0's 1's 2's in a LL


// Node* temp = head;
//     int cnt0=0;
//     int cnt1=0;
//     int cnt2=0;
//     while(temp!=NULL){
//         if(temp->data == 0) cnt0++;
//         else if(temp->data == 1) cnt1++;
//         else{
//             temp->data == 2;
//             cnt2++;
//         }
//         temp=temp->next;
//     }
//      temp = head;
//     while(temp!=NULL) {
//         if(cnt0){
//             temp->data = 0;
//             cnt0--;
//         }
//         else if(cnt1) {
//             temp->data = 1;
//             cnt1--;
//         }
//         else{
//             temp->data =2;
//             cnt2--;
//         }
//         temp=temp->next;
//     }
//     return head;


//optimised way---------------------


// Node* sortList(Node *head){
//     if(head==NULL || head->next == NULL) return head;
//     Node* zeroHead = new Node(-1);
//     Node* oneHead = new Node(-1);
//     Node* twoHead = new Node(-1);

//     Node* zero = zeroHead;
//     Node* one = oneHead;
//     Node* two = twoHead;

//     Node*temp = head;

//     while(temp!=NULL){
//         if(temp->data==0){
//             zero->next = temp;
//             zero = temp;
//         }
//         else if(temp->data==1){
//             one->next = temp;
//             one = temp;
//         }
//         else{
//             two->next = temp;
//             two = temp;
//         }
//         temp= temp->next;
//     }

//     zero->next = (oneHead->next)? oneHead->next:twoHead->next;
//     one->next = twoHead->next;
//     two->next = NULL;

//     Node* newHead = zeroHead->next;

//     delete(zeroHead);
//     delete(oneHead);
//     delete(twoHead);

//     return newHead;

// }


//rotate LL
//Given the head of a linked list, rotate the list to the right by k places.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
// ListNode* nthNode(ListNode* temp,int k) {
    
//     int cnt=1;
//     while(temp!=NULL) {
//         if(cnt == k) return temp;
//         cnt++;
//         temp= temp->next;
//     }
//     return temp;
// }
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head == NULL || k==0) return head;
//         ListNode* tail = head;
//         int len =1;
//         while(tail->next!=NULL) {
//             tail = tail->next;
//             len++;
//         }

//         if(k%len==0) return head;

//         k=k%len;
       
//         //tail to head
//         tail->next = head;
//         ListNode* newLastNode = nthNode(head,len-k);
//         head = newLastNode->next;
//         newLastNode->next= NULL;
//         return head;

        
//     }
// };


//reverse a LL without stack, by playing with links

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//        ListNode* temp = head;
//        ListNode* prev = nullptr;
//        ListNode* front;
//        while(temp!=NULL) {
//         front = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = front;
//        } 
//        return prev;
//     }
// };