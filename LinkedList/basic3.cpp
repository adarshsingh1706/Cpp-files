//length of LL
//search in LL
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

int lengthOfLL(Node* head){
  Node* temp =head;
  int cnt=0;
  while(temp!=nullptr){
    temp = temp->next;
    cnt++;
  }
  return cnt;
}

int searchInLL(Node* head, int val){
  Node* temp = head;
  while(temp!=nullptr){
    if(val==temp->data) return 1;
    temp=temp->next;
  }
  return 0;
}

int main(){
  vector<int> arr ={17,4,5,6};
  
  Node* head = convertArr2LL(arr);
  cout <<lengthOfLL(head)<<endl;;
  cout<<"Checking if val provided is present in the LL" << endl;
  cout<<searchInLL(head,6)<<endl;;
}