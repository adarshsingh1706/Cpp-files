//deleting head
//delete tail


#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  public:
  Node(int data1,Node*next1){ //constructor
    data = data1;
    next = next1;
  }
    public:
    Node(int data1){
      data = data1;
      next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp; //chaining
    mover=temp;
  }
  return head;
}
//printing LL
void print(Node* head){
  Node* temp = head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

//deleting head
Node* deleteHead(Node* head){
  if(head == NULL) return nullptr;
  Node* temp =head;
  head= head->next;
  delete(temp);
  return head;
}

//delete tail
Node* deleteTail(Node* head){
  if(head==NULL || head->next ==NULL) return NULL;
  Node* temp = head;
  while(temp->next->next!=nullptr){
    temp = temp->next;
  }
  delete(temp->next);
  temp->next = nullptr;
  return head;
}



int main(){
  vector<int> arr ={17,4,5,6};
  
  Node* head = convertArr2LL(arr);
  
  // print(head);
  // cout<<endl;
  // head = deleteHead(head);
  deleteTail(head);
  print(head);
}
// The reason you need to use head = deleteHead(head); instead of just deleteHead(head); is because the deleteHead function returns a new head pointer. When you delete the head node of a linked list, the head pointer needs to be updated to point to the next node in the list. If you don't update the head pointer, it will still point to the old, deleted node, which results in incorrect behavior or potential access to freed memory.