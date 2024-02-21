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
  // new node creation

  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&Tail, int d)
{
  // new node creation
  Node *temp = new Node(d);
  Tail->next = temp;
  Tail = temp;
}

void insertAtPosition(Node *&head, Node *&Tail, int Position, int d)
{

  if (Position == 1) // incase we want to insert at pos1.
  {
    insertAtHead(head, d);
    return;
  }
  Node *temp = head;
  int count = 1;
  while (count < Position - 1)
  {
    temp = temp->next;
    count++;
  }

  if (temp->next == NULL)
  { // when inserting at last
    insertAtTail(Tail, d);
    return;
  }

  // creating a node for d
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void print(Node *&head)
{
  Node *temp = head; // for traversing
  while (temp != NULL)
  {
    cout << temp->data << " ";
    cout << temp->next << " ";
    cout << endl;
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  // created a new node
  Node *node1 = new Node(10);
  // head pointed to node1
  Node *head = node1;
  Node *Tail = node1;

  // print(head);
  // insertAtHead(head, 12);
  // print(head);
  // insertAtHead(head, 13);
  // print(head);
  // insertAtHead(head, 14);
  // print(head);
  // insertAtHead(head, 15);
  // print(head);
  // insertAtHead(head, 16);
  // print(head);

  print(head);
  insertAtTail(Tail, 12);
  print(head);
  insertAtTail(Tail, 13);
  print(head);
  insertAtTail(Tail, 14);
  print(head);
  insertAtTail(Tail, 15);
  print(head);
  insertAtTail(Tail, 16);
  print(head);

  insertAtPosition(head, Tail, 3, 100);
  print(head);

  insertAtPosition(head, Tail, 1, 0);
  print(head);

  cout << "head:" << head->data << endl;
  cout << "tail:" << Tail->data << endl;

  return 0;
}