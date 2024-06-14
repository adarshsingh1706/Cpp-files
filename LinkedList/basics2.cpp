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

int main(){
  vector<int> arr ={17,4,5,6};
 
  Node* head = convertArr2LL(arr);
  cout<<head->data <<endl;

  //traversal
  Node* temp = head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}