// Split ll IN PARTS

// class Solution {
// public:
//     int lengthOfLL(ListNode* head) {
//         int cnt = 0;
//          ListNode* temp = head;
//         while (temp != NULL) {
//             cnt++;
//             temp = temp->next;
//         }
//         return cnt;
//     }

// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         vector<ListNode*> ans;
//         ListNode* temp = head;
//         int l = lengthOfLL(head);
//         if (l < k) {
//             for (int i = 0; i < l; i++) {
//                 ans.push_back(temp);
//                 ListNode* nextTemp = temp->next;
//                 temp->next = nullptr;
//                 temp = nextTemp;
//             }
//             for (int i = 0; i < k - l; i++) {
//                 ans.push_back(NULL);
//             }
//             return ans;
//         }


//         int equalSize = l / k;
//         int rem = l % k;
//         ListNode* curr =head;
//         ListNode* prev = nullptr;
        
//         while(head){
//             int eachPartSize = equalSize;
//             ans.push_back(curr);
//             while(eachPartSize>0){
//                 prev = curr;
//                 curr = curr->next;
//                 eachPartSize--;
//             }
//             if(rem!=0 && curr!=NULL){
//                 rem--;
//                 prev = curr;
//                 curr = curr->next;
//             }
//             if(prev!=NULL){
//                 head = curr;
//                 prev->next = NULL;
//             }
//         }
//         while(ans.size()!=k) ans.push_back(NULL);
//         return ans;
//     }
// };