//deleting Kth element 

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

//deleting Kth element of LL
Node* removeK(Node* head, int k){
  if(head==NULL) return head;
  if(k==1){
    Node* temp = head;
    head = head->next;
    delete(temp);
    return head;
  }
  int cnt =0;
  Node* temp = head;
  Node* prev = NULL;
  while(temp!=NULL){
    cnt++;
    if(k==cnt){
      prev->next= prev->next->next;
      delete(temp);
      break;
    }
    prev = temp;
    temp=temp->next;
  }
  return head;
}



int main(){
  vector<int> arr ={17,4,5,6};
  
  Node* head = convertArr2LL(arr);
  head=removeK(head,3);
  print(head);
  
}
