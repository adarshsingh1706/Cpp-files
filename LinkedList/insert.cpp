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
//insertAtHead
Node* insertAthead(Node*head,int val){
  Node*temp = new Node(val,head);
  return temp;
}
//insertAtlast
Node* insertAtLast(Node* head,int val){
  Node* temp = head;
  if(head == NULL) return new Node(val);
  while(temp->next !=NULL){
    temp = temp->next;
  }
  Node* temp1 = new Node(val);
  temp->next = temp1;
  temp1->next = nullptr;
  return head;
}

int main(){
  vector<int> arr ={5};
  Node* head = convertArr2LL(arr);
  head = insertAtLast(head,78);
  print(head);
  head = insertAthead(head,23);
  print(head);
}