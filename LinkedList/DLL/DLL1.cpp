#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* back;
  public:
  Node(int data1,Node*next1,Node*back1) {
    data = data1;
    next = next1;
    back = back1;
  }
  public:
  Node(int data1) {
    data = data1;
    next = nullptr;
    back = nullptr;
  }
};
Node* convertArr2DLL(vector<int> arr) {
  Node* head = new Node(arr[0]);
  Node* prev = head;
  for(int i=1;i<arr.size();i++) {
    Node* temp = new Node(arr[i],nullptr,prev);
    prev->next = temp;
    prev = temp;
  }
  return head;
}

Node* deleteHead(Node* head) {
  Node* prev = head;
  head = head->next;
  head->back = nullptr;
  prev->next = nullptr;
  delete(prev);
  return head;
}

Node* deleteTail(Node* head) {
  if(head==NULL|| head->next ==NULL) return NULL;
  Node* tail = head;
  while(tail->next!=NULL) {
    tail = tail->next;
  }
  Node* prev = tail->back;
  prev->next = nullptr;
  tail->back = nullptr;
  delete(tail);
  return head;
  return head;
}

Node* removeKthElement(Node* head, int k) {
  if(head == NULL) return NULL;
  int cnt =0;
  Node* kNode = head;
  while(kNode!=NULL) {
    cnt++;
    if(cnt == k ) break;
    kNode = kNode->next;
  }

  Node* prev = kNode->back;
  Node* front = kNode->next;

  if(prev==NULL && front == NULL) return NULL;
  else if(prev==NULL) return deleteHead(head);
  else if(front==NULL) return deleteTail(head);

  prev->next =front;
  front->back = prev;

  kNode->next = nullptr;
  kNode->back = nullptr;
  delete(kNode);
  return head;
}

void print(Node* head) {
  while(head!=NULL) {
    cout <<head->data <<" ";
    head = head->next;
  }
}

int main() {
  vector<int> arr ={10,17,21,211,23,25};
  Node* head = convertArr2DLL(arr);
  print(head);
  cout<<endl;
  // head = deleteHead(head);
  // print(head);
  // head = deleteTail(head);
  // print(head);
  head = removeKthElement(head,4);
  print(head);
}