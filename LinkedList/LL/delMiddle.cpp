//2095. Delete the Middle Node of a Linked List

//TC~0(N)

/*
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     int lengthOfLL(ListNode* head){
//         ListNode* temp = head;
//         int cnt=0;
//         while(temp!=NULL){
//             cnt++;
//             temp=temp->next;
//         }
//         return cnt;
//     }
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head==NULL) return NULL;
//         if(head->next==NULL) return NULL;
//         if(head->next->next ==NULL){
//             ListNode* temp = head->next;
//             head->next = nullptr;
//             delete(temp);
//             return head;
//         }
//         //edge cases.....
//     int middleNode = lengthOfLL(head)/2;
//     ListNode* temp = head;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         if(count==middleNode){
//             ListNode* MN = temp->next;
//             temp->next=temp->next->next;
//             delete(MN);
//         }
//         temp= temp->next;
//     }
//     return head;
//     }
// };




//****************************tortoise hair algo (slow-fast pointer) */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head==NULL) return NULL;
//         if(head->next==NULL) return NULL;
//         if(head->next->next ==NULL){
//             ListNode* temp = head->next;
//             head->next = nullptr;
//             delete(temp);
//             return head;
//         }
//         //2 pointer approach TC~0(N/2),1-pass soln
//         ListNode* fast = head;
//         ListNode* slow = head;
//         fast = head->next->next;
//         while(fast!=nullptr && fast->next!=nullptr){
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         ListNode* temp = slow->next;
//         slow->next=slow->next->next;
//         delete(temp);
//         return head; 
//     }
// };