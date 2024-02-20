#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtHead(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void print(Node *&head)
{
  Node *temp = head;
  while (temp != head)
  {
    cout << temp->data << " ";
    cout << temp->next << " ";
  }
}

int main()
{
  Node *node1 = new Node(24);
}